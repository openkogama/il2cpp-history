
/* Void Awake() */

void Assembly-CSharp.dll::InGameControls::InGameControls_Awake
               (InGameControls *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  InGameButtons_MethodInfo__UnityEngine__Object__Instantiate<InGameButtons>_InGameButtons__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inGameButtonsPrefab;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar1 = (InGameButtons *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pIVar1,pTVar2,0,
                      InGameButtons_MethodInfo__UnityEngine__Object__Instantiate<InGameButtons>_InGameButtons__UnityEngine__Transform__bool_
                     );
  bVar3 = iRam_? != 0;
  (this->fields).InGameButtons = pIVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).InGameButtons >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  original = (this->fields).avatarJoystickPrefab;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  pMVar8 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar8);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_3
                     ((Object_1 *)original,pTVar2,0,(MethodInfo *)0x0);
  pvVar10 = ((pMVar8->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0) {
    pvVar10 = (void *)FUN_?(pvVar10);
  }
  if ((pOVar9 != (Object_1 *)0x0) && (lVar11 = FUN_?(pOVar9,pvVar10), lVar11 == 0)) {
    FUN_?(pOVar9,pvVar10);
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  return;
}

