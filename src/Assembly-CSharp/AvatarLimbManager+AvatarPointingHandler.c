
/* Void HandlePointing(Quaternion, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarPointingHandler::
     AvatarLimbManager_AvatarPointingHandler_HandlePointing
               (AvatarLimbManager_AvatarPointingHandler *this,Quaternion *yawRotation,
               Quaternion *pitchRotation,MethodInfo *method)

{
  method_00 = (MethodInfo *)pitchRotation;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                     (aVStack_2,yawRotation,(MethodInfo *)pitchRotation);
  if (_UNK_? < pVVar1->y || _UNK_? == pVVar1->y) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       (aVStack_2,yawRotation,method_00);
    if (pVVar1->y <= _UNK_?) {
      pAVar3 = (this->fields).limbRotator;
      fVar4 = (this->fields).elapsedPointingTime;
      if (pAVar3 == (AvatarLimbManager_LimbRotator *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      bVar5 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_HasLimbController
                        (pAVar3,BodyData_PartIndex__Enum_LArm,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        pDVar6 = (pAVar3->fields).limbControllers;
        if (pDVar6 == (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0)
        goto code_?;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,3,
                            MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                           );
        if (pOVar7 == (Object *)0x0) goto code_?;
        if (*(char *)&pOVar7[10].monitor == '\0') {
          pOVar8 = *(Object__Class **)yawRotation;
          pMVar9 = *(MonitorData **)&yawRotation->z;
          *(undefined1 *)&pOVar7[8].monitor = 1;
          *(float *)&pOVar7[8].klass = fVar4;
          pOVar7[4].klass = pOVar8;
          pOVar7[4].monitor = pMVar9;
          *(undefined4 *)((longlong)&pOVar7[7].klass + 4) = 0;
          pOVar8 = *(Object__Class **)pitchRotation;
          pMVar9 = *(MonitorData **)&pitchRotation->z;
          *(undefined4 *)((longlong)&pOVar7[8].klass + 4) = 0;
          pOVar7[5].klass = pOVar8;
          pOVar7[5].monitor = pMVar9;
        }
      }
      pAVar3 = (this->fields).limbRotator;
      if (pAVar3 == (AvatarLimbManager_LimbRotator *)0x0) goto code_?;
      key = 2;
      goto code_?;
    }
  }
  pAVar3 = (this->fields).limbRotator;
  fVar4 = (this->fields).elapsedPointingTime;
  if (pAVar3 == (AvatarLimbManager_LimbRotator *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar5 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_HasLimbController
                    (pAVar3,BodyData_PartIndex__Enum_RArm,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    pDVar6 = (pAVar3->fields).limbControllers;
    if (pDVar6 == (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) goto code_?;
    pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,2,
                        MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                       );
    if (pOVar7 == (Object *)0x0) goto code_?;
    if (*(char *)&pOVar7[10].monitor == '\0') {
      pOVar8 = *(Object__Class **)yawRotation;
      pMVar9 = *(MonitorData **)&yawRotation->z;
      *(undefined1 *)&pOVar7[8].monitor = 1;
      *(float *)&pOVar7[8].klass = fVar4;
      pOVar7[4].klass = pOVar8;
      pOVar7[4].monitor = pMVar9;
      *(undefined4 *)((longlong)&pOVar7[7].klass + 4) = 0;
      pOVar8 = *(Object__Class **)pitchRotation;
      pMVar9 = *(MonitorData **)&pitchRotation->z;
      *(undefined4 *)((longlong)&pOVar7[8].klass + 4) = 0;
      pOVar7[5].klass = pOVar8;
      pOVar7[5].monitor = pMVar9;
    }
  }
  pAVar3 = (this->fields).limbRotator;
  if (pAVar3 != (AvatarLimbManager_LimbRotator *)0x0) {
    key = 3;
code_?:
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                    ,key,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar6 = (pAVar3->fields).limbControllers;
    if (pDVar6 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,key,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                         );
      if (pOVar7 != (Object *)0x0) {
        if (*(char *)&pOVar7[10].monitor == '\0') {
          *(undefined1 *)&pOVar7[8].monitor = 0;
        }
        return;
      }
    }
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void HandleWeaponPointing(Quaternion, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarPointingHandler::
     AvatarLimbManager_AvatarPointingHandler_HandleWeaponPointing
               (AvatarLimbManager_AvatarPointingHandler *this,Quaternion *yawRotation,
               Quaternion *pitchRotation,MethodInfo *method)

{
  pAVar1 = (this->fields).limbRotator;
  fVar2 = (this->fields).elapsedPointingTime;
  if (pAVar1 == (AvatarLimbManager_LimbRotator *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar3 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_HasLimbController
                    (pAVar1,BodyData_PartIndex__Enum_RArm,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pDVar4 = (pAVar1->fields).limbControllers;
    if (pDVar4 == (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) goto code_?;
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar4,2,
                        MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                       );
    if (pOVar5 == (Object *)0x0) goto code_?;
    if (*(char *)&pOVar5[10].monitor == '\0') {
      pOVar6 = *(Object__Class **)yawRotation;
      pMVar7 = *(MonitorData **)&yawRotation->z;
      *(undefined1 *)&pOVar5[8].monitor = 1;
      *(float *)&pOVar5[8].klass = fVar2;
      pOVar5[4].klass = pOVar6;
      pOVar5[4].monitor = pMVar7;
      *(undefined4 *)((longlong)&pOVar5[7].klass + 4) = 0;
      pOVar6 = *(Object__Class **)pitchRotation;
      pMVar7 = *(MonitorData **)&pitchRotation->z;
      *(undefined4 *)((longlong)&pOVar5[8].klass + 4) = 0;
      pOVar5[5].klass = pOVar6;
      pOVar5[5].monitor = pMVar7;
    }
  }
  pAVar1 = (this->fields).limbRotator;
  if (pAVar1 != (AvatarLimbManager_LimbRotator *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar4 = (pAVar1->fields).limbControllers;
    if (pDVar4 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar4,3,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                         );
      if (pOVar5 != (Object *)0x0) {
        if (*(char *)&pOVar5[10].monitor == '\0') {
          *(undefined1 *)&pOVar5[8].monitor = 0;
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize(AvatarLimbManager, AvatarLimbManager+LimbRotator, AvatarEnabledChangeHandler) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarPointingHandler::
     AvatarLimbManager_AvatarPointingHandler_Initialize
               (AvatarLimbManager_AvatarPointingHandler *this,AvatarLimbManager *limbManager,
               AvatarLimbManager_LimbRotator *limbRotator,
               AvatarEnabledChangeHandler *enableChangeHandler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManager__AvatarPointingHandler__OnDisable__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManager__AvatarPointingHandler__OnEnable__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).limbManager = limbManager;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).limbManager >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).limbRotator = limbRotator;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).limbRotator >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (enableChangeHandler == (AvatarEnabledChangeHandler *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pAVar8 = (enableChangeHandler->fields).OnEnabled;
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__AvatarLimbManager__AvatarPointingHandler__OnEnable__,
             (MethodInfo *)0x0);
  pAVar10 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar8,(Delegate *)pNVar9,(MethodInfo *)0x0);
  pAVar8 = (Action *)0x0;
  if (pAVar10 == (Action *)0x0) {
    (enableChangeHandler->fields).OnEnabled = (Action *)0x0;
  }
  else {
    pAVar11 = pAVar8;
    if (pAVar10->klass == TypeInfo__System__Action) {
      pAVar11 = pAVar10;
    }
    if (pAVar11 == (Action *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (enableChangeHandler->fields).OnEnabled = pAVar11;
    pAVar11 = pAVar8;
    if (pAVar10->klass == TypeInfo__System__Action) {
      pAVar11 = pAVar10;
    }
    if (pAVar11 == (Action *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(enableChangeHandler->fields).OnEnabled >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pAVar10 = (enableChangeHandler->fields).OnDisabled;
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__AvatarLimbManager__AvatarPointingHandler__OnDisable__
             ,(MethodInfo *)0x0);
  pAVar10 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar10,(Delegate *)pNVar9,(MethodInfo *)0x0);
  if (pAVar10 == (Action *)0x0) {
    (enableChangeHandler->fields).OnDisabled = (Action *)0x0;
  }
  else {
    pAVar11 = pAVar8;
    if (pAVar10->klass == TypeInfo__System__Action) {
      pAVar11 = pAVar10;
    }
    if (pAVar11 == (Action *)0x0) {
      FUN_?(pAVar10);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (enableChangeHandler->fields).OnDisabled = pAVar11;
    if (pAVar10->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar10;
    }
    if (pAVar8 == (Action *)0x0) {
      FUN_?(pAVar10);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(enableChangeHandler->fields).OnDisabled >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* Void StopPointing() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarPointingHandler::
     AvatarLimbManager_AvatarPointingHandler_StopPointing
               (AvatarLimbManager_AvatarPointingHandler *this,MethodInfo *method)

{
  pAVar1 = (this->fields).limbRotator;
  if (pAVar1 != (AvatarLimbManager_LimbRotator *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar2 = (pAVar1->fields).limbControllers;
    if (pDVar2 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,2,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                         );
      if (pOVar3 != (Object *)0x0) {
        if (*(char *)&pOVar3[10].monitor == '\0') {
          *(undefined1 *)&pOVar3[8].monitor = 0;
        }
        pAVar1 = (this->fields).limbRotator;
        if (pAVar1 != (AvatarLimbManager_LimbRotator *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar2 = (pAVar1->fields).limbControllers;
          if (pDVar2 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,3,
                                MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                               );
            if (pOVar3 != (Object *)0x0) {
              if (*(char *)&pOVar3[10].monitor == '\0') {
                *(undefined1 *)&pOVar3[8].monitor = 0;
              }
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdatePointing(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarPointingHandler::
     AvatarLimbManager_AvatarPointingHandler_UpdatePointing
               (AvatarLimbManager_AvatarPointingHandler *this,Vector3 *localLookDirection,
               MethodInfo *method)

{
  fVar1 = (this->fields).elapsedPointingTime;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  fVar5 = localLookDirection->z;
  fVar6 = localLookDirection->y;
  (this->fields).prevLookDirection.x = localLookDirection->x;
  (this->fields).prevLookDirection.y = fVar6;
  (this->fields).prevLookDirection.z = fVar5;
  (this->fields).elapsedPointingTime = fVar1 - fVar4;
  return;
}


/* AvatarLimbManager+AvatarPointingHandler() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarPointingHandler::
     AvatarLimbManager_AvatarPointingHandler__ctor
               (AvatarLimbManager_AvatarPointingHandler *this,MethodInfo *method)

{
  (this->fields).pointingDuration = 0.8;
  (this->fields).pointState = 1;
  (this->fields).isActive = 1;
  return;
}

