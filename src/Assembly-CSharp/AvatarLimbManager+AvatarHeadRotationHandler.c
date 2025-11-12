
/* Single CalculateHeadPitchRotationModifier(Single) */

float Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
      AvatarLimbManager_AvatarHeadRotationHandler_CalculateHeadPitchRotationModifier
                (AvatarLimbManager_AvatarHeadRotationHandler *this,float yawAngle,MethodInfo *method
                )

{
  if (_UNK_? < yawAngle) {
    yawAngle = _UNK_? - yawAngle;
  }
  if ((this->fields).shouldLean == 0) {
    yawAngle = _UNK_?;
  }
  return _UNK_? / ((_UNK_? - yawAngle / _UNK_?) + _UNK_?);
}


/* Single CalculateTorsoRotationModifier(Single) */

float Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
      AvatarLimbManager_AvatarHeadRotationHandler_CalculateTorsoRotationModifier
                (AvatarLimbManager_AvatarHeadRotationHandler *this,float yawAngle,MethodInfo *method
                )

{
  if (_UNK_? < yawAngle) {
    yawAngle = _UNK_? - yawAngle;
  }
  if ((this->fields).shouldLean == 0) {
    yawAngle = _UNK_?;
  }
  return _UNK_? / (_UNK_? - yawAngle / _UNK_?);
}


/* Quaternion ClampQuaternion(Quaternion) */

Quaternion *
Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
          (Quaternion *__return_storage_ptr__,AvatarLimbManager_AvatarHeadRotationHandler *this,
          Quaternion *rotation,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                     (&VStack_2,rotation,(MethodInfo *)rotation);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  if (((_UNK_? < (float)(undefined4)uVar3) &&
      (fVar4 = _UNK_?, (float)(undefined4)uVar3 <= _UNK_?)) ||
     ((uVar5 = uVar3, (float)(undefined4)uVar3 < _UNK_? &&
      (fVar4 = _UNK_?, _UNK_? < (float)(undefined4)uVar3)))) {
    uVar5 = (ulonglong)(uint)fVar4;
  }
  if (((_UNK_? < (float)uVar3._4_4_) &&
      (fVar4 = _UNK_?, (float)uVar3._4_4_ <= _UNK_?)) ||
     ((fVar6 = (float)uVar3._4_4_, (float)uVar3._4_4_ < _UNK_? &&
      (fVar4 = _UNK_?, _UNK_? < (float)uVar3._4_4_)))) {
    fVar6 = fVar4;
  }
  fStack_7 = pVVar1->z * _UNK_?;
  uStack_8 = CONCAT44(fVar6 * _UNK_?,(float)uVar5 * _UNK_?);
  uStack_9 = 0;
  uStack_10 = 0;
  pcVar11 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar11 = (code *)swi(3);
    pQVar13 = (Quaternion *)(*pcVar11)();
    return pQVar13;
  }
  pcRam_? = pcVar11;
  (*pcRam_?)(&uStack_8,&uStack_9);
  __return_storage_ptr__->x = (float)(undefined4)uStack_9;
  __return_storage_ptr__->y = (float)uStack_9._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_10;
  __return_storage_ptr__->w = (float)uStack_10._4_4_;
  return __return_storage_ptr__;
}


/* Void Initialize(AvatarLimbManager, AvatarLimbManager+LimbRotator,
   AvatarLimbManager+AvatarLookDirectionHandler) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
     AvatarLimbManager_AvatarHeadRotationHandler_Initialize
               (AvatarLimbManager_AvatarHeadRotationHandler *this,AvatarLimbManager *limbManager,
               AvatarLimbManager_LimbRotator *limbRotator,
               AvatarLimbManager_AvatarLookDirectionHandler *lookDirectionHandler,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).limbRotator = limbRotator;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).limbRotator >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (limbManager == (AvatarLimbManager *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pAVar7 = (limbManager->fields).OnAvatarRotate;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer__,
             (MethodInfo *)0x0);
  pAVar7 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar7,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar7 == (Action *)0x0) {
    (limbManager->fields).OnAvatarRotate = (Action *)0x0;
  }
  else {
    pAVar8 = (Action *)0x0;
    if (pAVar7->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar7;
    }
    if (pAVar8 == (Action *)0x0) {
      FUN_?(pAVar7,TypeInfo__System__Action);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (limbManager->fields).OnAvatarRotate = pAVar8;
    pAVar8 = (Action *)0x0;
    if (pAVar7->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar7;
    }
    if (pAVar8 == (Action *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&limbManager->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
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


/* Void ResetIdleTimer(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
     AvatarLimbManager_AvatarHeadRotationHandler_ResetIdleTimer_1
               (AvatarLimbManager_AvatarHeadRotationHandler *this,EmoteTypes__Enum emoteType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).limbRotator;
  (this->fields).idleTime = 0.0;
  pSVar1 = StringLiteral_Idle;
  if (this_00 == (AvatarLimbManager_LimbRotator *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar3 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_HasLimbController
                    (this_00,BodyData_PartIndex__Enum_Head,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  this_01 = (this_00->fields).limbControllers;
  if ((this_01 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) &&
     (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,0,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                         ), pOVar4 != (Object *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__RemoveAt_int_);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_02 = (List_1_System_Object_ *)pOVar4[9].monitor;
    index = 0;
    if (this_02 != (List_1_System_Object_ *)0x0) {
      lVar5 = 0x20;
      while( true ) {
        if ((this_02->fields)._size <= (int)index) {
          return;
        }
        if ((uint)(this_02->fields)._size <= index) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pOVar6 = (this_02->fields)._items;
        if (pOVar6 == (Object__Array *)0x0) break;
        if ((uint)pOVar6->max_length <= index) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pSVar7 = *(String **)((longlong)pOVar6->vector + lVar5 + -0x20);
        if (pSVar7 == pSVar1) {
code_?:
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    (this_02,index,
                     MethodInfo__System__Collections__Generic__List<System::String>__RemoveAt_int_);
          return;
        }
        if (((pSVar7 == (String *)0x0) || (pSVar1 == (String *)0x0)) ||
           ((pSVar7->fields)._stringLength != (pSVar1->fields)._stringLength)) {
          index = index + 1;
          lVar5 = lVar5 + 8;
        }
        else {
          bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar7->fields)._firstChar,
                             (uint8_t *)&(pSVar1->fields)._firstChar,
                             (longlong)(pSVar7->fields)._stringLength * 2,(MethodInfo *)0x0);
          if (bVar3 != 0) goto code_?;
          index = index + 1;
          lVar5 = lVar5 + 8;
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RotateHead(Quaternion, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
     AvatarLimbManager_AvatarHeadRotationHandler_RotateHead
               (AvatarLimbManager_AvatarHeadRotationHandler *this,Quaternion *yawRotation,
               Quaternion *pitchRotation,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                     (&VStack_2,yawRotation,(MethodInfo *)pitchRotation);
  fVar3 = pVVar1->y;
  if (_UNK_? < fVar3) {
    fVar3 = _UNK_? - fVar3;
  }
  if ((this->fields).shouldLean == 0) {
    fVar3 = _UNK_?;
  }
  fStack_4 = pitchRotation->x;
  fStack_5 = pitchRotation->y;
  fStack_6 = pitchRotation->z;
  fStack_7 = pitchRotation->w;
  this_00 = (this->fields).limbRotator;
  fVar3 = fStack_4 /
          (_UNK_? / ((_UNK_? - fVar3 / _UNK_?) + _UNK_?));
  if (this_00 != (AvatarLimbManager_LimbRotator *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar8 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_HasLimbController
                      (this_00,BodyData_PartIndex__Enum_Head,(MethodInfo *)0x0);
    if (bVar8 == 0) {
      return;
    }
    this_01 = (this_00->fields).limbControllers;
    if ((this_01 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) &&
       (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,0,
                            MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                           ), pOVar9 != (Object *)0x0)) {
      if (*(char *)&pOVar9[10].monitor != '\0') {
        return;
      }
      pOVar10 = *(Object__Class **)yawRotation;
      pMVar11 = *(MonitorData **)&yawRotation->z;
      *(undefined4 *)((longlong)&pOVar9[7].klass + 4) = 0;
      pOVar9[4].klass = pOVar10;
      pOVar9[4].monitor = pMVar11;
      pOVar9[8].klass = (Object__Class *)0x0;
      *(float *)&pOVar9[5].klass = fVar3;
      *(float *)((longlong)&pOVar9[5].klass + 4) = fStack_5;
      *(float *)&pOVar9[5].monitor = fStack_6;
      *(float *)((longlong)&pOVar9[5].monitor + 4) = fStack_7;
      *(undefined1 *)&pOVar9[8].monitor = 1;
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void RotateTorso(Quaternion, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
     AvatarLimbManager_AvatarHeadRotationHandler_RotateTorso
               (AvatarLimbManager_AvatarHeadRotationHandler *this,Quaternion *yawRotation,
               Quaternion *pitchRotation,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                     (&VStack_2,yawRotation,(MethodInfo *)pitchRotation);
  fVar3 = pVVar1->y;
  if (_UNK_? < fVar3) {
    fVar3 = _UNK_? - fVar3;
  }
  if ((this->fields).shouldLean == 0) {
    fVar3 = _UNK_?;
  }
  fStack_4 = pitchRotation->x;
  fStack_5 = pitchRotation->y;
  fStack_6 = pitchRotation->z;
  fStack_7 = pitchRotation->w;
  this_00 = (this->fields).limbRotator;
  fVar3 = fStack_4 / (_UNK_? / (_UNK_? - fVar3 / _UNK_?));
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 != (AvatarLimbManager_LimbRotator *)0x0) {
    pOVar8 = *(Object__Class **)
              &TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
    pMVar9 = *(MonitorData **)
              &(TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion).z;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar10 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_HasLimbController
                      (this_00,BodyData_PartIndex__Enum_Torso,(MethodInfo *)0x0);
    if (bVar10 == 0) {
      return;
    }
    this_01 = (this_00->fields).limbControllers;
    if ((this_01 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) &&
       (pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,1,
                            MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                           ), pOVar11 != (Object *)0x0)) {
      if (*(char *)&pOVar11[10].monitor != '\0') {
        return;
      }
      *(undefined4 *)((longlong)&pOVar11[7].klass + 4) = 0;
      *(float *)&pOVar11[5].klass = fVar3;
      *(float *)((longlong)&pOVar11[5].klass + 4) = fStack_5;
      *(float *)&pOVar11[5].monitor = fStack_6;
      *(float *)((longlong)&pOVar11[5].monitor + 4) = fStack_7;
      pOVar11[8].klass = (Object__Class *)0x0;
      *(undefined1 *)&pOVar11[8].monitor = 1;
      pOVar11[4].klass = pOVar8;
      pOVar11[4].monitor = pMVar9;
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateIdleTimer() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
     AvatarLimbManager_AvatarHeadRotationHandler_UpdateIdleTimer
               (AvatarLimbManager_AvatarHeadRotationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).idleTime;
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
  fVar4 = fVar4 + fVar1;
  bVar5 = TypeRef__System__Activator__T._0_4_ <= fVar4;
  (this->fields).idleTime = fVar4;
  animation = StringLiteral_Idle;
  if (bVar5) {
    this_00 = (this->fields).limbRotator;
    if (this_00 == (AvatarLimbManager_LimbRotator *)0x0) {
DAT_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar6 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_HasLimbController
                      (this_00,BodyData_PartIndex__Enum_Head,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      this_01 = (this_00->fields).limbControllers;
      if ((this_01 == (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) ||
         (this_02 = (LimbController *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,0,
                               MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                              ), this_02 == (LimbController *)0x0)) goto DAT_?;
      LimbController::LimbController_StartBlendingWithAnimation(this_02,animation,(MethodInfo *)0x0)
      ;
    }
  }
  return;
}


/* Void UpdateRotation() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::
     AvatarLimbManager_AvatarHeadRotationHandler_UpdateRotation
               (AvatarLimbManager_AvatarHeadRotationHandler *this,MethodInfo *method)

{
  (*(this->klass->vtable).UpdateIdleTimer.methodPtr)
            (this,(this->klass->vtable).UpdateIdleTimer.method);
  (this->fields).shouldLean = 1;
  return;
}

