
/* Void Snap(GameObject, Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::ObjectSnap::ObjectSnap_Snap
               (GameObject *root,Vector3 *pivot,Vector3 *dest,MethodInfo *method)

{
  if ((root == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (root,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (obj->fields)._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar2);
  uVar4 = pivot->x;
  uVar5 = pivot->y;
  uVar6 = dest->x;
  uVar7 = dest->y;
  fStack_8 = (0.0 - pivot->z) + dest->z;
  uStack_9 = CONCAT44((0.0 - (float)uVar5) + (float)uVar7,(0.0 - (float)uVar4) + (float)uVar6);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (obj->fields)._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar2,&uStack_9);
  return;
}


/* Void Snap(List`1[UnityEngine.GameObject], Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::ObjectSnap::ObjectSnap_Snap_1
               (List_1_UnityEngine_GameObject_ *roots,Vector3 *pivot,Vector3 *dest,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (roots == (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(roots->fields)._version << 0x20);
  uStack_8 = 0;
  LStack_9._8_8_ = pLStack_7;
  LStack_9._current = (Object *)0x0;
  uStack_3 = 0;
  pLStack_7 = &LStack_9;
  LStack_9._list = (List_1_System_Object_ *)roots;
  while (bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           (&LStack_9,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                           ), bVar10 != 0) {
    VStack_11.x = dest->x;
    VStack_11.y = dest->y;
    VStack_11.z = dest->z;
    VStack_12.x = pivot->x;
    VStack_12.y = pivot->y;
    VStack_12.z = pivot->z;
    ObjectSnap_Snap((GameObject *)LStack_9._current,&VStack_12,&VStack_11,(MethodInfo *)0x0);
  }
  return;
}

