
/* Void <OnPostRender>b__7_0(MeshRenderer) */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI+<>c::AvatarPictureTakerUGUI_c__OnPostRender_b__7_0
               (AvatarPictureTakerUGUI_c *this,MeshRenderer *mr,MethodInfo *method)

{
  if (mr == (MeshRenderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (mr == (MeshRenderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (mr->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)mr,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void <OnPreCull>b__6_0(MeshRenderer) */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI+<>c::AvatarPictureTakerUGUI_c__OnPreCull_b__6_0
               (AvatarPictureTakerUGUI_c *this,MeshRenderer *mr,MethodInfo *method)

{
  if (mr == (MeshRenderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (mr == (MeshRenderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (mr->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)mr,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,1);
  return;
}


/* AvatarPictureTakerUGUI+<>c() */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI+<>c::AvatarPictureTakerUGUI_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarPictureTakerUGUI____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (AvatarPictureTakerUGUI_c *)FUN_?(TypeInfo__AvatarPictureTakerUGUI____c);
  TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9 = pAVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__AvatarPictureTakerUGUI____c->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

