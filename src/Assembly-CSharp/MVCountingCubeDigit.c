
/* Void Awake() */

void Assembly-CSharp.dll::MVCountingCubeDigit::MVCountingCubeDigit_Awake
               (MVCountingCubeDigit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Material);
    cRam_? = '\x01';
  }
  this_00 = MVCountingCubeDigit_get_MeshRenderer(this,(MethodInfo *)0x0);
  source = (this->fields).CountingCubeDigitMaterial;
  this_01 = (Material *)func_?(TypeInfo__UnityEngine__Material);
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
            (this_01,source,(MethodInfo *)0x0);
  if (this_00 != (MeshRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              ((Renderer *)this_00,this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetMaterialOffset() */

void Assembly-CSharp.dll::MVCountingCubeDigit::MVCountingCubeDigit_SetMaterialOffset
               (MVCountingCubeDigit *this,MethodInfo *method)

{
  pMVar1 = MVCountingCubeDigit_get_MeshRenderer(this,(MethodInfo *)0x0);
  if (pMVar1 != (MeshRenderer *)0x0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                       ((Renderer *)pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (Material *)0x0) {
      VVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTextureOffset
                        (pMVar2,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)
                  ((uint)((float)(this->fields)._number / _UNK_?) ^
                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      puVar4 = &UNK_?;
      pMVar1 = MVCountingCubeDigit_get_MeshRenderer((MVCountingCubeDigit *)VVar3.y,method_00);
      if (pMVar1 != (MeshRenderer *)0x0) {
        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           ((Renderer *)pMVar1,(MethodInfo *)0x0);
        if (pMVar2 != (Material *)0x0) {
          VVar3.y = (float)method_00;
          VVar3.x = (float)puVar4;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureOffset
                    (pMVar2,VVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MeshRenderer get_MeshRenderer() */

MeshRenderer *
Assembly-CSharp.dll::MVCountingCubeDigit::MVCountingCubeDigit_get_MeshRenderer
          (MVCountingCubeDigit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshRenderer>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).meshRenderer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pMVar1 = (MeshRenderer *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__MeshRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshRenderer>__
                       );
    (this->fields).meshRenderer = pMVar1;
    func_?(&(this->fields).meshRenderer,pMVar1);
  }
  return (this->fields).meshRenderer;
}


/* Void set_Number(Int32) */

void Assembly-CSharp.dll::MVCountingCubeDigit::MVCountingCubeDigit_set_Number
               (MVCountingCubeDigit *this,int32_t value,MethodInfo *method)

{
  (this->fields)._number = value;
  pMVar1 = MVCountingCubeDigit_get_MeshRenderer(this,(MethodInfo *)0x0);
  if (pMVar1 != (MeshRenderer *)0x0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                       ((Renderer *)pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (Material *)0x0) {
      VVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTextureOffset
                        (pMVar2,(MethodInfo *)0x0);
      fVar4 = (float)((uint)((float)(this->fields)._number / _UNK_?) ^
                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      puVar5 = &UNK_?;
      pMVar1 = MVCountingCubeDigit_get_MeshRenderer
                         ((MVCountingCubeDigit *)VVar3.y,(MethodInfo *)0x0);
      if (pMVar1 != (MeshRenderer *)0x0) {
        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           ((Renderer *)pMVar1,(MethodInfo *)0x0);
        if (pMVar2 != (Material *)0x0) {
          VVar3.y = fVar4;
          VVar3.x = (float)puVar5;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureOffset
                    (pMVar2,VVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

