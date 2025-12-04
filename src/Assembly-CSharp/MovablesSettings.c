
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::MovablesSettings::MovablesSettings_Initialize
               (MovablesSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  aIStackX_10[0].m_value = woID;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovingPlatformGroup);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData_Velocity);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MVMovingPlatformGroup_not_found_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Wo_not_found);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_MovingPlatform,
               (MethodInfo *)0x0);
    if (woID == -1) {
      pSVar1 = StringLiteral_Wo_not_found;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
        pSVar1 = StringLiteral_Wo_not_found;
      }
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar1,(MethodInfo *)0x0);
      return;
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = (MVMovingPlatformGroup *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_03,woID,(MethodInfo *)0x0);
      pMVar3 = pMVar2;
      if (pMVar2 != (MVMovingPlatformGroup *)0x0) {
        bVar4 = (TypeInfo__MVMovingPlatformGroup->_1).naturalAligment;
        if (((pMVar2->klass->_1).naturalAligment < bVar4) ||
           ((MVMovingPlatformGroup__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1]
            != TypeInfo__MVMovingPlatformGroup)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        pMVar3 = (MVMovingPlatformGroup *)0x0;
        if (bVar5) {
          pMVar3 = pMVar2;
        }
      }
      bVar5 = iRam_? != 0;
      (this->fields).platformGroup = pMVar3;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).platformGroup >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      if ((this->fields).platformGroup == (MVMovingPlatformGroup *)0x0) {
        pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_MVMovingPlatformGroup_not_found_,pSVar1,(MethodInfo *)0x0)
        ;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        goto code_?;
      }
      pMVar3 = (this->fields).platformGroup;
      (this->fields).successfullyInitialized = 1;
      if ((pMVar3 != (MVMovingPlatformGroup *)0x0) &&
         (pMVar10 = (pMVar3->fields).platform, pMVar10 != (MVMovingPlatform *)0x0)) {
        uStack_11._0_4_ = (pMVar10->fields)._.velocity.x;
        uStack_11._4_4_ = (pMVar10->fields)._.velocity.y;
        fStack_12 = (pMVar10->fields)._.velocity.z;
        value = (float)FUN_?(&uStack_11);
        this_01 = (this->fields).slider;
        if (this_01 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (this_01,StringLiteral_BlueprintData_Velocity,value,_UNK_?,
                     _UNK_?,(MethodInfo *)0x0);
          this_02 = (this->fields).inputField;
          if (this_02 != (SettingsInputFieldSlider *)0x0) {
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                      (this_02,StringLiteral_BlueprintData_Velocity,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::MovablesSettings::MovablesSettings_OnSettingChanged
               (MovablesSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((key == (String *)0x0) || ((this->fields).successfullyInitialized == 0)) {
    return;
  }
  if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
    FUN_?();
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar1 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                    (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
  pMVar2 = (this->fields).platformGroup;
  if ((pMVar2 != (MVMovingPlatformGroup *)0x0) &&
     (pMVar3 = (pMVar2->fields).platform, pMVar3 != (MVMovingPlatform *)0x0)) {
    VStack_4.x = (pMVar3->fields)._.velocity.x;
    VStack_4.y = (pMVar3->fields)._.velocity.y;
    fVar5 = (pMVar3->fields)._.velocity.z;
    VStack_4.z = fVar5;
    aVStack_6[0]._0_8_ = VStack_4._0_8_;
    fVar7 = (float)FUN_?(&VStack_4);
    if (_UNK_? < fVar7) {
      VStack_4.x = aVStack_6[0].x / fVar7;
      fVar5 = fVar5 / fVar7;
      VStack_4.y = aVStack_6[0].y / fVar7;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_4.x = (pVVar8->zeroVector).x;
      VStack_4.y = (pVVar8->zeroVector).y;
      fVar5 = (pVVar8->zeroVector).z;
    }
    fVar7 = VStack_4.x * fVar1;
    fVar9 = VStack_4.y * fVar1;
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    aVStack_6[0].y = fVar9;
    aVStack_6[0].x = fVar7;
    aVStack_6[0].z = fVar5 * fVar1;
    value_00 = Extensions::Extensions_ToSerializeString(aVStack_6,(MethodInfo *)0x0);
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                (this_00,(pMVar3->fields)._._._._._.id,key,(Object *)value_00,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

