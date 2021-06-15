
/* String ToString() */

String * Assembly-CSharp.dll::GreyOutObjectScript+PickupOriginalMaterials::
         GreyOutObjectScript_PickupOriginalMaterials_ToString
                   (GreyOutObjectScript_PickupOriginalMaterials *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  pMVar2 = (this->fields).meshRenderer;
  if (pMVar2 != (MeshRenderer *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)pMVar2,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)this_00,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Format
                         (StringLiteral_GameObject___0__,(Object *)pSVar3,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_2(pSVar1,pSVar3,(MethodInfo *)0x0);
      pMVar2 = (this->fields).meshRenderer;
      if (pMVar2 != (MeshRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                  ((Renderer *)pMVar2,(MethodInfo *)0x0);
        pOVar4 = (Object *)func_?();
        pSVar3 = mscorlib.dll::System::String::String_Format
                           (StringLiteral_meshRenderer_enabled___0__,pOVar4,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_2(pSVar1,pSVar3,(MethodInfo *)0x0);
        pOVar4 = (Object *)func_?();
        pSVar3 = mscorlib.dll::System::String::String_Format
                           (StringLiteral_meshRendererEnabled___0__,pOVar4,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_2(pSVar1,pSVar3,(MethodInfo *)0x0);
        return pSVar1;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* GreyOutObjectScript+PickupOriginalMaterials(MeshRenderer) */

void Assembly-CSharp.dll::GreyOutObjectScript+PickupOriginalMaterials::
     GreyOutObjectScript_PickupOriginalMaterials__ctor
               (GreyOutObjectScript_PickupOriginalMaterials *this,MeshRenderer *meshRenderer,
               MethodInfo *method)

{
  (this->fields).meshRendererEnabled = 1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).meshRenderer = meshRenderer;
  if (meshRenderer != (MeshRenderer *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                       ((Renderer *)meshRenderer,(MethodInfo *)0x0);
    (this->fields).originalMaterials = pMVar1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

