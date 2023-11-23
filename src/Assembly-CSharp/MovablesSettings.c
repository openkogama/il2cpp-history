
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
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Wo_not_found,(MethodInfo *)0x0);
      return;
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 != (MVWorldObjectClientManager *)0x0) {
      pMVar1 = (MVMovingPlatformGroup *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_03,woID,(MethodInfo *)0x0);
      if (pMVar1 == (MVMovingPlatformGroup *)0x0) {
        (this->fields).platformGroup = (MVMovingPlatformGroup *)0x0;
        pMVar2 = pMVar1;
      }
      else {
        if (((pMVar1->klass->_1).naturalAligment <
             (TypeInfo__MVMovingPlatformGroup->_1).naturalAligment) ||
           ((MVMovingPlatformGroup__Class *)
            (pMVar1->klass->_1).typeHierarchy
            [(TypeInfo__MVMovingPlatformGroup->_1).naturalAligment - 1] !=
            TypeInfo__MVMovingPlatformGroup)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        pMVar2 = (MVMovingPlatformGroup *)0x0;
        if (bVar3) {
          pMVar2 = pMVar1;
        }
        (this->fields).platformGroup = pMVar2;
        if (((pMVar1->klass->_1).naturalAligment <
             (TypeInfo__MVMovingPlatformGroup->_1).naturalAligment) ||
           ((MVMovingPlatformGroup__Class *)
            (pMVar1->klass->_1).typeHierarchy
            [(TypeInfo__MVMovingPlatformGroup->_1).naturalAligment - 1] !=
            TypeInfo__MVMovingPlatformGroup)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        pMVar2 = (MVMovingPlatformGroup *)0x0;
        if (bVar3) {
          pMVar2 = pMVar1;
        }
      }
      func_?(&(this->fields).platformGroup,pMVar2);
      if ((this->fields).platformGroup == (MVMovingPlatformGroup *)0x0) {
        pSVar4 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&woID,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_MVMovingPlatformGroup_not_found_,pSVar4,(MethodInfo *)0x0)
        ;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar4,(MethodInfo *)0x0);
        return;
      }
      pMVar1 = (this->fields).platformGroup;
      (this->fields).successfullyInitialized = 1;
      if ((pMVar1 != (MVMovingPlatformGroup *)0x0) &&
         (pMVar5 = (pMVar1->fields).platform, pMVar5 != (MVMovingPlatform *)0x0)) {
        uVar6 = (pMVar5->fields)._.velocity.x;
        uVar7 = (pMVar5->fields)._.velocity.y;
        fVar8 = (pMVar5->fields)._.velocity.z;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        dVar9 = (double)((float)uVar7 * (float)uVar7 + (float)uVar6 * (float)uVar6 + fVar8 * fVar8
                        );
        if (dVar9 < 0.0) {
          func_?();
        }
        else {
          dVar9 = SQRT(dVar9);
        }
        this_01 = (this->fields).slider;
        if (this_01 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (this_01,StringLiteral_BlueprintData_Velocity,(float)dVar9,0.3,3.0,
                     (MethodInfo *)0x0);
          this_02 = (this->fields).inputField;
          if (this_02 != (SettingsInputFieldSlider *)0x0) {
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                      (this_02,StringLiteral_BlueprintData_Velocity,unaff_retaddr,(MethodInfo *)0x0)
            ;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  fVar1 = mscorlib.dll::System::Convert::Convert_ToSingle
                    (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
  pMVar2 = (this->fields).platformGroup;
  if ((pMVar2 != (MVMovingPlatformGroup *)0x0) &&
     (pMVar3 = (pMVar2->fields).platform, pMVar3 != (MVMovingPlatform *)0x0)) {
    uVar4 = (pMVar3->fields)._.velocity.x;
    uVar5 = (pMVar3->fields)._.velocity.y;
    if (cRam_? == '\0') {
      uStack_6 = CONCAT44(fStack_7,&TypeInfo__System__Math);
      in_stack_8 = &UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      uStack_6 = CONCAT44(fStack_7,TypeInfo__System__Math);
      in_stack_8 = &UNK_?;
      func_?();
    }
    dVar9 = (double)(fStack_7 * fStack_7 + (float)uStack_6 * (float)uStack_6 +
                    fStack_10 * fStack_10);
    if (dVar9 < 0.0) {
      func_?();
    }
    else {
      dVar9 = SQRT(dVar9);
    }
    uStack_6._0_4_ = (float)dVar9;
    if (_UNK_? < (float)uStack_6) {
      fVar11 = (float)uVar5 / (float)uStack_6;
      uStack_6 = CONCAT44((float)uVar4 / (float)uStack_6,fVar1 / (float)uStack_6);
    }
    else {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_6._0_4_ = (pVVar12->zeroVector).x;
      fStack_7 = (pVVar12->zeroVector).y;
      fVar11 = (pVVar12->zeroVector).z;
    }
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    vec.y = fStack_7 * (float)in_stack_8;
    vec.x = (float)uStack_6 * (float)in_stack_8;
    vec.z = fVar11 * (float)in_stack_8;
    value_00 = Extensions::Extensions_ToSerializeString(vec,(MethodInfo *)0x0);
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                (this_00,(pMVar3->fields)._._._._._.id,key,(Object *)value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

