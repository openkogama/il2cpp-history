
/* String ToString() */

String * Assembly-CSharp.dll::GreyOutObjectScript+PickupOriginalMaterials::
         GreyOutObjectScript_PickupOriginalMaterials_ToString
                   (GreyOutObjectScript_PickupOriginalMaterials *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&StringLiteral_meshRenderer_enabled___0__);
    func_?(&StringLiteral_meshRendererEnabled___0__);
    func_?(&StringLiteral_GameObject___0__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).meshRenderer;
  if (pMVar1 != (MeshRenderer *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pMVar1,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)this_00,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Format
                         (StringLiteral_GameObject___0__,(Object *)pSVar2,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (::StringLiteral__,pSVar2,(MethodInfo *)0x0);
      pMVar1 = (this->fields).meshRenderer;
      if (pMVar1 != (MeshRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                  ((Renderer *)pMVar1,(MethodInfo *)0x0);
        pOVar3 = (Object *)func_?();
        pSVar4 = mscorlib.dll::System::String::String_Format
                           (StringLiteral_meshRenderer_enabled___0__,pOVar3,(MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar2,pSVar4,(MethodInfo *)0x0);
        pOVar3 = (Object *)func_?();
        pSVar4 = mscorlib.dll::System::String::String_Format
                           (StringLiteral_meshRendererEnabled___0__,pOVar3,(MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar2,pSVar4,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar5)();
  return pSVar2;
}


/* GreyOutObjectScript+PickupOriginalMaterials(MeshRenderer) */

void Assembly-CSharp.dll::GreyOutObjectScript+PickupOriginalMaterials::
     GreyOutObjectScript_PickupOriginalMaterials__ctor
               (GreyOutObjectScript_PickupOriginalMaterials *this,MeshRenderer *meshRenderer,
               MethodInfo *method)

{
  (this->fields).meshRendererEnabled = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).meshRenderer = meshRenderer;
  func_?(&this->fields,meshRenderer);
  if (meshRenderer != (MeshRenderer *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                       ((Renderer *)meshRenderer,(MethodInfo *)0x0);
    ppMVar2 = &(this->fields).originalMaterials;
    *ppMVar2 = pMVar1;
    func_?(ppMVar2,pMVar1);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

