
/* Void Awake() */

void Assembly-CSharp.dll::MVCountingCubeDigit::MVCountingCubeDigit_Awake
               (MVCountingCubeDigit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
                  ((uint)((float)(this->fields)._number / _UNK_?) ^ _UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).meshRenderer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        UnityEngine__MeshRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::MeshRenderer>__
                       );
    (this->fields).meshRenderer = (MeshRenderer *)pMVar2;
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
      fVar4 = (float)((uint)((float)(this->fields)._number / _UNK_?) ^ _UNK_?);
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
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

