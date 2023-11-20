
/* Void Awake() */

void Assembly-CSharp.dll::Fader::Fader_Awake(Fader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                   );
    cRam_? = '\x01';
  }
  pRVar1 = (Renderer *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                     );
  (this->fields)._renderer = pRVar1;
  func_?(&(this->fields)._renderer,pRVar1);
  pRVar1 = (this->fields)._renderer;
  if (pRVar1 != (Renderer *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        (pRVar1,(MethodInfo *)0x0);
    if (this_00 != (Material *)0x0) {
      pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                         (this_00,(MethodInfo *)0x0);
      (this->fields).normalShader = pSVar2;
      func_?();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Fade(Single) */

void Assembly-CSharp.dll::Fader::Fader_Fade(Fader *this,float fadeFactor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Faded_);
    func_?(&StringLiteral__factor_);
    cRam_? = '\x01';
  }
  if ((bool)(this->fields).faded != fadeFactor < _UNK_?) {
    if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Boolean);
    }
    pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString
                       ((Boolean *)&(this->fields).faded,(MethodInfo *)0x0);
    str3 = mscorlib.dll::System::Single::Single_ToString((Single *)&fadeFactor,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_5
                       (StringLiteral_Faded_,pSVar1,StringLiteral__factor_,str3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  }
  pRVar2 = (this->fields)._renderer;
  if (fadeFactor < _UNK_?) {
    if ((pRVar2 != (Renderer *)0x0) &&
       (pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (pRVar2,(MethodInfo *)0x0), pMVar3 != (Material *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader
                (pMVar3,(this->fields).fadeShader,(MethodInfo *)0x0);
      pRVar2 = (this->fields)._renderer;
      if (pRVar2 != (Renderer *)0x0) {
        pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (pRVar2,(MethodInfo *)0x0);
        if (pMVar3 != (Material *)0x0) {
          pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                             ((Color *)&puStack_5,pMVar3,(MethodInfo *)0x0);
          puStack_5 = (undefined *)pCVar4->r;
          fVar6 = pCVar4->g;
          fVar7 = pCVar4->b;
          pRVar2 = (this->fields)._renderer;
          if ((pRVar2 != (Renderer *)0x0) &&
             (fVar8 = fadeFactor,
             pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                (pRVar2,(MethodInfo *)0x0), pMVar3 != (Material *)0x0))
          goto code_?;
        }
      }
    }
  }
  else if ((pRVar2 != (Renderer *)0x0) &&
          (pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                              (pRVar2,(MethodInfo *)0x0), pMVar3 != (Material *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader
              (pMVar3,(this->fields).normalShader,(MethodInfo *)0x0);
    pRVar2 = (this->fields)._renderer;
    if (pRVar2 != (Renderer *)0x0) {
      pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                         (pRVar2,(MethodInfo *)0x0);
      if (pMVar3 != (Material *)0x0) {
        pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                           ((Color *)&puStack_5,pMVar3,(MethodInfo *)0x0);
        puStack_5 = (undefined *)pCVar4->r;
        fVar6 = pCVar4->g;
        fVar7 = pCVar4->b;
        pRVar2 = (this->fields)._renderer;
        if ((pRVar2 != (Renderer *)0x0) &&
           (pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                               (pRVar2,(MethodInfo *)0x0), pMVar3 != (Material *)0x0)) {
          fVar8 = 1.0;
code_?:
          value.g = fVar6;
          value.r = (float)puStack_5;
          value.b = fVar7;
          value.a = fVar8;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                    (pMVar3,value,(MethodInfo *)0x0);
          (this->fields).faded = fadeFactor < _UNK_?;
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

