
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::MovablesSettings::MovablesSettings_Initialize
               (MovablesSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_MovingPlatform,
               (MethodInfo *)0x0);
    if (woID == -1) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Wo_not_found,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 != (MVWorldObjectClientManager *)0x0) {
      pSVar1 = (ShootableButton *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_03,woID,(MethodInfo *)0x0);
      this_04 = pSVar1;
      if (pSVar1 != (ShootableButton *)0x0) {
        bVar2 = (TypeInfo__MVMovingPlatformGroup->_1).naturalAligment;
        if (((pSVar1->klass->_1).naturalAligment < bVar2) ||
           ((MVMovingPlatformGroup__Class *)(pSVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
            TypeInfo__MVMovingPlatformGroup)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        this_04 = (ShootableButton *)0x0;
        if (bVar3) {
          this_04 = pSVar1;
        }
      }
      (this->fields).platformGroup = (MVMovingPlatformGroup *)this_04;
      if (this_04 != (ShootableButton *)0x0) {
        this_05 = (MVMovable *)
                  ShootableButton::ShootableButton_get_InputSignalReceiver
                            (this_04,(MethodInfo *)0x0);
        if (this_05 != (MVMovable *)0x0) {
          MVMovable::MVMovable_get_Velocity((Vector3 *)&stack0xffffffe4,this_05,(MethodInfo *)0x0);
          fVar4 = (float10)func_?();
          this_01 = (this->fields).slider;
          if (this_01 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize
                      (this_01,StringLiteral_BlueprintData_Velocity,(float)fVar4,0.3,3.0,
                       (MethodInfo *)0x0);
            this_02 = (this->fields).inputField;
            if (this_02 != (SettingsInputFieldSlider *)0x0) {
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                        (this_02,StringLiteral_BlueprintData_Velocity,(float)fVar4,(MethodInfo *)0x0
                        );
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::MovablesSettings::MovablesSettings_OnSettingChanged
               (MovablesSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (key == (String *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Convert);
  }
  fStack_1 = mscorlib.dll::System::Convert::Convert_ToSingle_14(value,(MethodInfo *)0x0);
  this_00 = (ShootableButton *)(this->fields).platformGroup;
  if ((this_00 != (ShootableButton *)0x0) &&
     (this_01 = (MVMovable *)
                ShootableButton::ShootableButton_get_InputSignalReceiver(this_00,(MethodInfo *)0x0),
     this_01 != (MVMovable *)0x0)) {
    MVMovable::MVMovable_get_Velocity(&VStack_2,this_01,(MethodInfo *)0x0);
    puVar3 = (undefined8 *)func_?(&stack0xffffffd4);
    VStack_2._4_8_ = *puVar3;
    fVar4 = *(float *)(puVar3 + 1);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar4;
    a.x = VStack_2.y;
    a.y = VStack_2.z;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffd4,a,fStack_1,(MethodInfo *)0x0);
    VStack_2.y = pVVar5->x;
    VStack_2.z = pVVar5->y;
    fStack_1 = pVVar5->z;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    worldObjectID =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    vec.z = fStack_1;
    vec.x = VStack_2.y;
    vec.y = VStack_2.z;
    value_00 = Extensions::Extensions_ToSerializeString(vec,(MethodInfo *)0x0);
    if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                (this_02,(int32_t)worldObjectID,key,(Object *)value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

