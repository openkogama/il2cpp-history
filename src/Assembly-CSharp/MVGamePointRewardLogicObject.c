
/* Void Destroy() */

void Assembly-CSharp.dll::MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_Destroy
               (MVGamePointRewardLogicObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  woid = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GamePointAmountManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointAmountManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePointAmountManager);
  }
  GamePointAmountManager::GamePointAmountManager_UpdateRewardData((int32_t)woid,0,(MethodInfo *)0x0)
  ;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?();
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)in_stack_1,(MethodInfo *)0x0);
  this_00 = in_stack_1[1].fields._.outputLinkRefs;
  if (this_00 != (List_1_MV_WorldObject_Link_ *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((CullingSubscriberBase *)this_00,(MethodInfo *)0x0);
    in_stack_1[1].fields._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)0x0;
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy(in_stack_1,(MethodInfo *)0x0);
  return;
}


/* Int32 GetGamePointsRewardAmount(Dictionary`2[System.Object,System.Object]) */

int32_t Assembly-CSharp.dll::MVGamePointRewardLogicObject::
        MVGamePointRewardLogicObject_GetGamePointsRewardAmount
                  (MVGamePointRewardLogicObject *this,
                  Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)data,StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,(Type *)StringLiteral_gamePointAmount
                        ,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar2 != (Pool *)0x0) {
      if ((pPVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int32_t *)func_?();
        return *piVar3;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Boolean HasGamePoints(Dictionary`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_HasGamePoints
               (MVGamePointRewardLogicObject *this,
               Dictionary_2_System_Object_System_Object_ *dataToCheck,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (dataToCheck != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)dataToCheck,StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_OnDataUpdate
               (MVGamePointRewardLogicObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  woid = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  gamePointRewardAmount =
       (*(code *)(this->klass->vtable).get_GamePointRewardAmount.method)
                 (this,this->klass[1]._0.image);
  if ((((uint)(TypeInfo__GamePointAmountManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointAmountManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePointAmountManager);
  }
  GamePointAmountManager::GamePointAmountManager_UpdateRewardData
            ((int32_t)woid,gamePointRewardAmount,(MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBX);
  return;
}


/* MVGamePointRewardLogicObject(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
               (MVGamePointRewardLogicObject *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *prefabObject,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject__ctor
            ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  woid = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  gamePointRewardAmount =
       (*(code *)(this->klass->vtable).get_GamePointRewardAmount.method)
                 (this,this->klass[1]._0.image);
  if ((((uint)(TypeInfo__GamePointAmountManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointAmountManager->_1).cctor_started == 0)) {
    func_?();
  }
  GamePointAmountManager::GamePointAmountManager_UpdateRewardData
            ((int32_t)woid,gamePointRewardAmount,(MethodInfo *)0x0);
  return;
}


/* Int32 get_GamePointRewardAmount() */

int32_t Assembly-CSharp.dll::MVGamePointRewardLogicObject::
        MVGamePointRewardLogicObject_get_GamePointRewardAmount
                  (MVGamePointRewardLogicObject *this,MethodInfo *method)

{
  data = (Dictionary_2_System_Object_System_Object_ *)
         PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  iVar1 = MVGamePointRewardLogicObject_GetGamePointsRewardAmount(this,data,(MethodInfo *)0x0);
  return iVar1;
}


/* String get_GamePointString() */

String * Assembly-CSharp.dll::MVGamePointRewardLogicObject::
         MVGamePointRewardLogicObject_get_GamePointString
                   (MVGamePointRewardLogicObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  return StringLiteral_gamePointAmount;
}

