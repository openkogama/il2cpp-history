
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::MovablesSettings::MovablesSettings_Initialize
               (MovablesSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVMovingPlatformGroup);
    func_?(&StringLiteral_BlueprintData_Velocity);
    func_?(&StringLiteral_MVMovingPlatformGroup_not_found_);
    func_?(&StringLiteral_Wo_not_found);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_MovingPlatform,
               (MethodInfo *)0x0);
    if (woID == -1) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _puStack_10 = CONCAT44(&UNK_?,puStack_1);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Wo_not_found,(MethodInfo *)0x0);
      return;
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 != (MVWorldObjectClientManager *)0x0) {
      _puStack_10 = CONCAT44(this_03,&UNK_?);
      pMVar2 = (MVMovingPlatformGroup *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_03,woID,(MethodInfo *)0x0);
      if (pMVar2 == (MVMovingPlatformGroup *)0x0) {
        (this->fields).platformGroup = (MVMovingPlatformGroup *)0x0;
        woID = (int32_t)pMVar2;
      }
      else {
        bVar3 = (TypeInfo__MVMovingPlatformGroup->_1).naturalAligment;
        if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
           ((MVMovingPlatformGroup__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
            TypeInfo__MVMovingPlatformGroup)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        pMVar5 = (MVMovingPlatformGroup *)0x0;
        if (bVar4) {
          pMVar5 = pMVar2;
        }
        (this->fields).platformGroup = pMVar5;
        bVar3 = (TypeInfo__MVMovingPlatformGroup->_1).naturalAligment;
        if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
           ((MVMovingPlatformGroup__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
            TypeInfo__MVMovingPlatformGroup)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        woID = (int32_t)(MVMovingPlatformGroup *)0x0;
        if (bVar4) {
          woID = (int32_t)pMVar2;
        }
      }
      func_?();
      pMVar2 = (this->fields).platformGroup;
      if (pMVar2 == (MVMovingPlatformGroup *)0x0) {
        pSVar6 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&woID,(MethodInfo *)0x0);
        pSVar6 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_MVMovingPlatformGroup_not_found_,pSVar6,(MethodInfo *)0x0)
        ;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        _puStack_10 = CONCAT44(&UNK_?,puStack_1);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar6,(MethodInfo *)0x0);
        return;
      }
      (this->fields).successfullyInitialized = 1;
      pMVar7 = (pMVar2->fields).platform;
      if (pMVar7 != (MVMovingPlatform *)0x0) {
        puStack_1 = (undefined *)(pMVar7->fields)._.velocity.x;
        unique0x0000a404 = (pMVar7->fields)._.velocity.y;
        fVar8 = (float10)func_?(&puStack_1,0);
        this_01 = (this->fields).slider;
        if (this_01 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (this_01,StringLiteral_BlueprintData_Velocity,(float)fVar8,0.3,3.0,
                     (MethodInfo *)0x0);
          this_02 = (this->fields).inputField;
          if (this_02 != (SettingsInputFieldSlider *)0x0) {
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                      (this_02,StringLiteral_BlueprintData_Velocity,(float)fVar8,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::MovablesSettings::MovablesSettings_OnSettingChanged
               (MovablesSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  if ((key == (String *)0x0) || ((this->fields).successfullyInitialized == 0)) {
    return;
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Convert);
  }
  fVar1 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                    (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
  pMVar2 = (this->fields).platformGroup;
  if ((pMVar2 != (MVMovingPlatformGroup *)0x0) &&
     (pMVar3 = (pMVar2->fields).platform, pMVar3 != (MVMovingPlatform *)0x0)) {
    puVar4 = (undefined8 *)func_?(&stack0xffffffd4);
    fVar5 = *(float *)(puVar4 + 1);
    fStack_6 = (float)*puVar4;
    fStack_7 = (float)((ulonglong)*puVar4 >> 0x20);
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    vec.z = fVar5 * fVar1;
    vec.x = fStack_6 * fVar1;
    vec.y = fStack_7 * fVar1;
    value_00 = Extensions::Extensions_ToSerializeString(vec,(MethodInfo *)0x0);
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                (this_00,(pMVar3->fields)._._._._._.id,key,(Object *)value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

