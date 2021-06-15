
/* Void Awake() */

void Assembly-CSharp.dll::Fader::Fader_Awake(Fader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                      ((Component_1 *)this,
                       UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                      );
  (this->fields)._renderer = (Renderer *)this_00;
  if (this_00 != (MVInteractableBase *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Material *)0x0) {
      pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                         (this_01,(MethodInfo *)0x0);
      (this->fields).normalShader = pSVar1;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Fade(Single) */

void Assembly-CSharp.dll::Fader::Fader_Fade(Fader *this,float fadeFactor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = this;
  if ((bool)(this->fields).faded == fadeFactor < _UNK_?) {
code_?:
    pRVar2 = (pFVar1->fields)._renderer;
    if (fadeFactor < _UNK_?) {
      if ((pRVar2 == (Renderer *)0x0) ||
         (pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             (pRVar2,(MethodInfo *)0x0), pMVar3 == (Material *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader
                (pMVar3,(pFVar1->fields).fadeShader,(MethodInfo *)0x0);
      pRVar2 = (pFVar1->fields)._renderer;
      if ((pRVar2 == (Renderer *)0x0) ||
         (pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             (pRVar2,(MethodInfo *)0x0), pMVar3 == (Material *)0x0))
      goto code_?;
      pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                         ((Color *)&stack0xffffffd8,pMVar3,(MethodInfo *)0x0);
      fVar5 = pCVar4->r;
      fVar6 = pCVar4->g;
      fVar7 = pCVar4->b;
      pRVar2 = (pFVar1->fields)._renderer;
      if (pRVar2 == (Renderer *)0x0) goto code_?;
      pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                         (pRVar2,(MethodInfo *)0x0);
      fVar8 = fadeFactor;
    }
    else {
      if ((pRVar2 == (Renderer *)0x0) ||
         (pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             (pRVar2,(MethodInfo *)0x0), pMVar3 == (Material *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader
                (pMVar3,(pFVar1->fields).normalShader,(MethodInfo *)0x0);
      pRVar2 = (pFVar1->fields)._renderer;
      if ((pRVar2 == (Renderer *)0x0) ||
         (pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             (pRVar2,(MethodInfo *)0x0), pMVar3 == (Material *)0x0))
      goto code_?;
      pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                         ((Color *)&stack0xffffffd8,pMVar3,(MethodInfo *)0x0);
      fVar5 = pCVar4->r;
      fVar6 = pCVar4->g;
      fVar7 = pCVar4->b;
      pRVar2 = (pFVar1->fields)._renderer;
      if (pRVar2 == (Renderer *)0x0) goto code_?;
      pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                         (pRVar2,(MethodInfo *)0x0);
      fVar8 = 1.0;
    }
    if (pMVar3 != (Material *)0x0) {
      value.g = fVar6;
      value.r = fVar5;
      value.b = fVar7;
      value.a = fVar8;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                (pMVar3,value,(MethodInfo *)0x0);
      (pFVar1->fields).faded = fadeFactor < _UNK_?;
      return;
    }
    goto code_?;
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  if (args == (Object__Array *)0x0) goto code_?;
  if ((StringLiteral_Faded_ == (String *)0x0) ||
     (iVar9 = func_?(StringLiteral_Faded_,(args->klass->_0).element_class), iVar9 != 0)) {
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_Faded_;
    this = (Fader *)CONCAT13((pFVar1->fields).faded,this._0_3_);
    pOVar10 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
    if ((pOVar10 != (Object *)0x0) &&
       (iVar9 = func_?(pOVar10,(args->klass->_0).element_class), iVar9 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar10;
    if ((StringLiteral__factor_ != (String *)0x0) &&
       (iVar9 = func_?(StringLiteral__factor_,(args->klass->_0).element_class), iVar9 == 0)
       ) goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral__factor_;
    pOVar10 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff8);
    if ((pOVar10 != (Object *)0x0) &&
       (iVar9 = func_?(pOVar10,(args->klass->_0).element_class), iVar9 == 0))
    goto code_?;
    if (3 < args->max_length) {
      args->vector[3] = pOVar10;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
    uVar11 = func_?(0,0);
    func_?(uVar11);
code_?:
    uVar11 = func_?(0,0);
    func_?(uVar11);
code_?:
    uVar11 = func_?(0,0);
    func_?(uVar11);
code_?:
    uVar11 = func_?(0,0);
    func_?(uVar11);
code_?:
    uVar11 = func_?(0,0);
    func_?(uVar11);
code_?:
    uVar11 = func_?(0,0);
    func_?(uVar11);
code_?:
    uVar11 = func_?(0,0);
    func_?(uVar11);
  }
  uVar11 = func_?(0,0);
  func_?(uVar11);
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

