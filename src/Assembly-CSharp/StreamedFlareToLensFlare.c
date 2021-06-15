
/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedFlareToLensFlare::StreamedFlareToLensFlare_OnAssetSet
               (StreamedFlareToLensFlare *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).lensFlare;
  value = (Flare *)System.Core.dll::System::Linq::
                   Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                   Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                             ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                              MethodInfo__StreamingAsset<UnityEngine::Flare,_UnityEngine::Flare>__get_Asset__
                             );
  if (this_00 != (LensFlare *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_flare
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::StreamedFlareToLensFlare::StreamedFlareToLensFlare_Reset
               (StreamedFlareToLensFlare *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).lensFlare;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        UnityEngine__LensFlare_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::LensFlare>__
                       );
    (this->fields).lensFlare = (LensFlare *)pMVar3;
  }
  pLVar1 = (this->fields).lensFlare;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponentInParent_6
                       ((Component_1 *)this,
                        UnityEngine__LensFlare_MethodInfo__UnityEngine__Component__GetComponentInParent<UnityEngine::LensFlare>__
                       );
    (this->fields).lensFlare = (LensFlare *)pTVar4;
  }
  return;
}


/* StreamedFlareToLensFlare() */

void Assembly-CSharp.dll::StreamedFlareToLensFlare::StreamedFlareToLensFlare__ctor
               (StreamedFlareToLensFlare *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  StreamingAsset`2[UnityEngine::Texture2D,UnityEngine::Texture2D]::
  StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D___ctor
            ((StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D_ *)this,
             MethodInfo__StreamingAsset<UnityEngine::Flare,_UnityEngine::Flare>__StreamingAsset__);
  return;
}

