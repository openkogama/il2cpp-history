
/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_FixedUpdate
               (MVAvatarLocal_AvatarLocalModes *this,IInputToPlayerMovement *movementMap,
               MethodInfo *method)

{
  pMVar1 = (this->fields).currentMode;
  if (pMVar1 != (MVAvatarLocal_AvatarMode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->klass->vtable).__unknown_1.methodPtr)
              (pMVar1,movementMap,(pMVar1->klass->vtable).__unknown_1.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AvatarRuntimeState GetStartState() */

AvatarRuntimeState__Enum
Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_GetStartState
          (MVAvatarLocal_AvatarLocalModes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
      (IPlayModeUI *)0x0) {
    pMVar1 = (MVNetworkGameStateListener *)FUN_?(7,TypeInfo__IPlayModeUI);
    if ((char)pMVar1 == '\0') {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar2 == (MVGameControllerBase *)0x0) ||
          (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
         (pMVar1 = (pMVar3->fields)._NetworkGameStateListener_k__BackingField,
         pMVar1 == (MVNetworkGameStateListener *)0x0)) goto code_?;
      if ((pMVar1->fields).currentGameState != 2) {
        return (AvatarRuntimeState__Enum)CONCAT71((int7)((ulonglong)pMVar1 >> 8),1);
      }
    }
    return (AvatarRuntimeState__Enum)pMVar1 & 0xffffff00;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  AVar5 = (*pcVar4)();
  return AVar5;
}


/* Boolean HasDied() */

bool Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_HasDied
               (MVAvatarLocal_AvatarLocalModes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal__DeadMode);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarModes;
  if (this_00 == (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
           ::Dictionary_2_System_ByteEnum_System_Object__get_Item
                     ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,
                      (ByteEnum__Enum)CONCAT71((int7)((ulonglong)method >> 8),4),
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                     );
  if (pOVar3 != (Object *)0x0) {
    pOVar4 = pOVar3->klass;
    bVar5 = (TypeInfo__MVAvatarLocal__DeadMode->_1).naturalAligment;
    if ((bVar5 <= (pOVar4->_1).naturalAligment) &&
       ((pOVar4->_1).typeHierarchy[(ulonglong)bVar5 - 1] ==
        (Il2CppClass *)TypeInfo__MVAvatarLocal__DeadMode)) {
      bVar5 = (TypeInfo__MVAvatarLocal__DeadMode->_1).naturalAligment;
      if (((pOVar4->_1).naturalAligment < bVar5) ||
         ((pOVar4->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
          (Il2CppClass *)TypeInfo__MVAvatarLocal__DeadMode)) {
        FUN_?(pOVar3,TypeInfo__MVAvatarLocal__DeadMode);
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      if (*(float *)&pOVar3[2].klass != 0.0) {
        return 1;
      }
    }
  }
  return 0;
}


/* Void SetMode(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
               (MVAvatarLocal_AvatarLocalModes *this,AvatarRuntimeState__Enum mode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).currentMode;
  bVar2 = (this->fields).currentState;
  if (pMVar1 != (MVAvatarLocal_AvatarMode *)0x0) {
    (*(pMVar1->klass->vtable).__unknown.methodPtr)
              (pMVar1,(ulonglong)(byte)mode,(pMVar1->klass->vtable).__unknown.method);
    this_00 = (this->fields).avatarModes;
    if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
      pMVar1 = (MVAvatarLocal_AvatarMode *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,mode & 0xff,
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                         );
      bVar3 = iRam_? != 0;
      (this->fields).currentMode = pMVar1;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).currentMode >> 0xc);
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
      pMVar1 = (this->fields).currentMode;
      (this->fields).currentState = (byte)mode;
      if (pMVar1 != (MVAvatarLocal_AvatarMode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pMVar1->klass->vtable).Activate.methodPtr)
                  (pMVar1,(ulonglong)bVar2,(pMVar1->klass->vtable).Activate.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetToStartMode() */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::
     MVAvatarLocal_AvatarLocalModes_SetToStartMode
               (MVAvatarLocal_AvatarLocalModes *this,MethodInfo *method)

{
  BVar1 = MVAvatarLocal_AvatarLocalModes_GetStartState(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                  ,BVar1 & 0xff,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = (this->fields).currentMode;
  bVar3 = (this->fields).currentState;
  if (pMVar2 != (MVAvatarLocal_AvatarMode *)0x0) {
    (*(pMVar2->klass->vtable).__unknown.methodPtr)
              (pMVar2,(ulonglong)(byte)BVar1,(pMVar2->klass->vtable).__unknown.method);
    this_00 = (this->fields).avatarModes;
    if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
      pMVar2 = (MVAvatarLocal_AvatarMode *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,BVar1 & 0xff,
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                         );
      bVar4 = iRam_? != 0;
      (this->fields).currentMode = pMVar2;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).currentMode >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      pMVar2 = (this->fields).currentMode;
      (this->fields).currentState = (byte)BVar1;
      if (pMVar2 != (MVAvatarLocal_AvatarMode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pMVar2->klass->vtable).Activate.methodPtr)
                  (pMVar2,(ulonglong)bVar3,(pMVar2->klass->vtable).Activate.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* MVAvatarLocal+AvatarLocalModes(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes__ctor
               (MVAvatarLocal_AvatarLocalModes *this,MVAvatarLocal *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal__DeadMode);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal__GhostMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal__LobbyMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal__ReviveMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal__ReviveWaitMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal__WaitMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal__WalkMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).avatarModes = (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pDVar6 = (this->fields).avatarModes;
  this_01 = (MVAvatarLocal_WalkMode *)FUN_?(TypeInfo__MVAvatarLocal__WalkMode);
  MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode__ctor(this_01,avatar,(MethodInfo *)0x0);
  if (pDVar6 == (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0)
  goto code_?;
  IVar7 = CONCAT31((int3)((uint)in_R9D >> 8),2);
  pIVar8 = MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
           ->klass->rgctx_data;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pIVar8 >> 8),1),(Object *)this_01,IVar7,
             pIVar8[0x22].method);
  pDVar6 = (this->fields).avatarModes;
  this_02 = (MVAvatarLocal_DeadMode *)FUN_?(TypeInfo__MVAvatarLocal__DeadMode);
  MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode__ctor(this_02,avatar,(MethodInfo *)0x0);
  if (pDVar6 == (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0)
  goto code_?;
  IVar7 = CONCAT31((int3)(IVar7 >> 8),2);
  pIVar8 = MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
           ->klass->rgctx_data;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pIVar8 >> 8),4),(Object *)this_02,IVar7,
             pIVar8[0x22].method);
  pDVar6 = (this->fields).avatarModes;
  pOVar9 = (Object *)FUN_?(TypeInfo__MVAvatarLocal__ReviveMode);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal_ReviveMode__AvatarInputControllerDead);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  *(undefined4 *)((longlong)&pOVar9[2].klass + 4) = 0x41200000;
  pOVar10 = (Object__Class *)
            FUN_?(TypeInfo__MVAvatarLocal_ReviveMode__AvatarInputControllerDead);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar11 = iRam_?;
  pcVar12 = *(char **)&(TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion).z;
  (pOVar10->_0).name =
       *(char **)&TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
  (pOVar10->_0).namespaze = pcVar12;
  pOVar9[3].klass = pOVar10;
  if (iVar11 != 0) {
    uVar2 = (uint)((ulonglong)(pOVar9 + 3) >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar11 = iRam_?;
    } while (!bVar1);
  }
  pOVar9[1].klass = (Object__Class *)avatar;
  if (iVar11 != 0) {
    uVar2 = (uint)((ulonglong)(pOVar9 + 1) >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  *(undefined4 *)&pOVar9[1].monitor = 2;
  if (pDVar6 == (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0)
  goto code_?;
  IVar7 = CONCAT31((int3)(IVar7 >> 8),2);
  pMVar13 = MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar13 >> 8),10),pOVar9,IVar7,pMVar13);
  pDVar6 = (this->fields).avatarModes;
  pOVar9 = (Object *)FUN_?(TypeInfo__MVAvatarLocal__ReviveWaitMode);
  bVar1 = iRam_? != 0;
  pOVar9[1].klass = (Object__Class *)avatar;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)(pOVar9 + 1) >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  *(undefined4 *)&pOVar9[1].monitor = 4;
  if (pDVar6 == (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0)
  goto code_?;
  IVar7 = CONCAT31((int3)(IVar7 >> 8),2);
  pMVar13 = MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar13 >> 8),0xb),pOVar9,IVar7,pMVar13);
  pDVar6 = (this->fields).avatarModes;
  pOVar9 = (Object *)FUN_?(TypeInfo__MVAvatarLocal__LobbyMode);
  bVar1 = iRam_? != 0;
  pOVar9[1].klass = (Object__Class *)avatar;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)(pOVar9 + 1) >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  *(undefined4 *)&pOVar9[1].monitor = 4;
  if (pDVar6 == (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0)
  goto code_?;
  IVar7 = CONCAT31((int3)(IVar7 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,0,pOVar9,IVar7,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
             ->klass->rgctx_data[0x22].method);
  pDVar6 = (this->fields).avatarModes;
  this_03 = (MVAvatarLocal_TimeAttackFlagDebriefingMode *)
            FUN_?(TypeInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode);
  MVAvatarLocal+TimeAttackFlagDebriefingMode::MVAvatarLocal_TimeAttackFlagDebriefingMode__ctor
            (this_03,avatar,(MethodInfo *)0x0);
  if (pDVar6 == (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0)
  goto code_?;
  IVar7 = CONCAT31((int3)(IVar7 >> 8),2);
  pIVar8 = MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
           ->klass->rgctx_data;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pIVar8 >> 8),7),(Object *)this_03,IVar7,
             pIVar8[0x22].method);
  pDVar6 = (this->fields).avatarModes;
  this_04 = (MVAvatarLocal_WaitMode *)FUN_?(TypeInfo__MVAvatarLocal__WaitMode);
  MVAvatarLocal+WaitMode::MVAvatarLocal_WaitMode__ctor(this_04,avatar,(MethodInfo *)0x0);
  if (pDVar6 == (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0)
  goto code_?;
  IVar7 = CONCAT31((int3)(IVar7 >> 8),2);
  pIVar8 = MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
           ->klass->rgctx_data;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pIVar8 >> 8),8),(Object *)this_04,IVar7,
             pIVar8[0x22].method);
  pDVar6 = (this->fields).avatarModes;
  pOVar9 = (Object *)FUN_?(TypeInfo__MVAvatarLocal__GhostMode);
  bVar1 = iRam_? != 0;
  pOVar9[1].klass = (Object__Class *)avatar;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)(pOVar9 + 1) >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  bVar1 = cRam_? == '\0';
  *(undefined4 *)&pOVar9[1].monitor = 4;
  if (bVar1) {
    FUN_?(&TypeInfo__AvatarInputControllerTouch);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarInputController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar14 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar14 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar14->fields).gameMode == 2) {
code_?:
    this_06 = (AvatarInputController *)FUN_?(TypeInfo__AvatarInputController);
    AvatarInputController::AvatarInputController__ctor(this_06,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0)
    goto code_?;
    this_05 = (AvatarInputControllerTouch *)FUN_?(TypeInfo__AvatarInputControllerTouch);
    AvatarInputControllerTouch::AvatarInputControllerTouch__ctor(this_05,(MethodInfo *)0x0);
  }
  if (pDVar6 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
    pMVar13 = MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
             ->klass->rgctx_data[0x22].method;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
    Dictionary_2_System_ByteEnum_System_Object__TryInsert
              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
               (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar13 >> 8),9),pOVar9,
               CONCAT31((int3)(IVar7 >> 8),2),pMVar13);
    BVar15 = MVAvatarLocal_AvatarLocalModes_GetStartState(this,(MethodInfo *)0x0);
    pDVar6 = (this->fields).avatarModes;
    (this->fields).currentState = (uint8_t)BVar15;
    if (pDVar6 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
      pMVar16 = (MVAvatarLocal_AvatarMode *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,BVar15 & 0xff,
                           MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                          );
      bVar1 = iRam_? != 0;
      (this->fields).currentMode = pMVar16;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(this->fields).currentMode >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

