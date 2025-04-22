
/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedFlareToLensFlare::StreamedFlareToLensFlare_OnAssetSet
               (StreamedFlareToLensFlare *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).lensFlare;
  if (this_00 != (LensFlare *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_flare
              (this_00,(this->fields)._.asset,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::StreamedFlareToLensFlare::StreamedFlareToLensFlare_Reset
               (StreamedFlareToLensFlare *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__LensFlare_MethodInfo__UnityEngine__Component__GetComponentInParent<UnityEngine::LensFlare>__
                   );
    func_?(&
                    UnityEngine__LensFlare_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::LensFlare>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).lensFlare;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pLVar1 = (LensFlare *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__LensFlare_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::LensFlare>__
                       );
    (this->fields).lensFlare = pLVar1;
    func_?(&(this->fields).lensFlare,pLVar1);
  }
  pLVar1 = (this->fields).lensFlare;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pLVar1 = (LensFlare *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInParent_1
                       ((Component *)this,
                        UnityEngine__LensFlare_MethodInfo__UnityEngine__Component__GetComponentInParent<UnityEngine::LensFlare>__
                       );
    (this->fields).lensFlare = pLVar1;
    func_?();
  }
  return;
}


/* StreamedFlareToLensFlare() */

void Assembly-CSharp.dll::StreamedFlareToLensFlare::StreamedFlareToLensFlare__ctor
               (StreamedFlareToLensFlare *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__StreamingAsset<UnityEngine::Flare,_UnityEngine::Flare>__StreamingAsset__
                   );
    cRam_? = '\x01';
  }
  StreamingAsset`2[System::Object,System::Object]::
  StreamingAsset_2_System_Object_System_Object___ctor
            ((StreamingAsset_2_System_Object_System_Object_ *)this,
             MethodInfo__StreamingAsset<UnityEngine::Flare,_UnityEngine::Flare>__StreamingAsset__);
  return;
}

