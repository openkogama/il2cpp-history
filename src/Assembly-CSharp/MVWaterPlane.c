
/* Void Destroy() */

void Assembly-CSharp.dll::MVWaterPlane::MVWaterPlane_Destroy(MVWaterPlane *this,MethodInfo *method)

{
  if ((this->fields).addedToWPManager != 0) {
    this_00 = (this->fields).waterManager;
    if (this_00 == (WaterPlaneManager *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    WaterPlaneManager::WaterPlaneManager_RemoveWaterPlaneLogicCube(this_00,this,(MethodInfo *)0x0);
  }
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  return;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVWaterPlane::MVWaterPlane_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVWaterPlane *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  fVar1 = (this->fields).localBounds.m_Center.y;
  fVar2 = (this->fields).localBounds.m_Center.z;
  fVar3 = (this->fields).localBounds.m_Extents.x;
  (__return_storage_ptr__->m_Center).x = (this->fields).localBounds.m_Center.x;
  (__return_storage_ptr__->m_Center).y = fVar1;
  (__return_storage_ptr__->m_Center).z = fVar2;
  (__return_storage_ptr__->m_Extents).x = fVar3;
  fVar1 = (this->fields).localBounds.m_Extents.z;
  (__return_storage_ptr__->m_Extents).y = (this->fields).localBounds.m_Extents.y;
  (__return_storage_ptr__->m_Extents).z = fVar1;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVWaterPlane::MVWaterPlane_Initialize
               (MVWaterPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).waterManager;
  if (this_00 != (WaterPlaneManager *)0x0) {
    WaterPlaneManager::WaterPlaneManager_AddWaterPlaneLogicCube(this_00,this,(MethodInfo *)0x0);
    (this->fields).addedToWPManager = 1;
    this_01 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_01 !=
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (this_01,StringLiteral_waterColor,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar1 == 0) {
        this_02 = (Dictionary_2_System_String_Theme_ *)
                  PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
        value = (Theme *)func_?();
        mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
        RuntimeHelpers_InitializeArray_1
                  ((Array *)value,__field_4252C6F90ECAA2224CCAE50ECACB287C08401B6E_Field,
                   (MethodInfo *)0x0);
        if (this_02 == (Dictionary_2_System_String_Theme_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  (this_02,StringLiteral_waterColor,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      (*(code *)(this->klass->vtable).OnDataUpdate.method)();
      return;
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVWaterPlane::MVWaterPlane_OnDataUpdate
               (MVWaterPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_02 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_02 ==
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_02,StringLiteral_waterColor,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return;
    }
    this_03 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_03 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_03,(Type *)StringLiteral_waterColor,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar2 == (Pool *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = func_?();
      if (iVar3 == 0) goto code_?;
    }
    this_00 = (this->fields).waterManager;
    if (iVar3 == 0) goto code_?;
    uVar4 = *(uint *)(iVar3 + 0xc);
    if (uVar4 == 0) goto code_?;
    if (uVar4 < 2) goto code_?;
    if (uVar4 < 3) goto code_?;
    uVar5 = *(undefined4 *)(iVar3 + 0x18);
    uVar6 = 0;
    uVar7 = 0x3f4ccccd;
    func_?();
    if (this_00 == (WaterPlaneManager *)0x0) goto code_?;
    value.g = (float)uVar7;
    value.r = (float)uVar5;
    value.b = (float)uVar6;
    value.a = 0.0;
    WaterPlaneManager::WaterPlaneManager_set_WaterColor(this_00,value,(MethodInfo *)0x0);
    this_01 = (this->fields)._._.component;
    if ((this_01 == (ObjectPrefab *)0x0) ||
       (pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                            (MethodInfo *)0x0), pOVar8 == (Object *)0x0)) goto code_?;
    if (pOVar8[1].monitor == (MonitorData *)0x0) goto code_?;
    if (pOVar8[2].klass == (Object__Class *)0x0) goto code_?;
    this_04 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)pOVar8[2].klass,(MethodInfo *)0x0);
    uVar4 = *(uint *)(iVar3 + 0xc);
    if (uVar4 == 0) goto code_?;
    if (uVar4 < 2) goto code_?;
    if (2 < uVar4) {
      uVar5 = 0;
      uVar7 = 0;
      uVar6 = 0;
      puVar9 = &UNK_?;
      func_?();
      if (this_04 != (Material *)0x0) {
        value_00.y = (float)uVar7;
        value_00.x = (float)uVar5;
        value_00.z = (float)uVar6;
        value_00.w = (float)puVar9;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                  (this_04,StringLiteral__MaskedColor,value_00,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVWaterPlane(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWaterPlane::MVWaterPlane__ctor
               (MVWaterPlane *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_02 == (PrefabPool *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    prefabObject = MVVehicleBase::MVVehicleBase_get_Visualization
                             ((MVVehicleBase *)this_02,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)prefabObject,worldObjects,
               (MethodInfo *)0x0);
    pOVar1 = (this->fields)._._.component;
    if (pOVar1 == (ObjectPrefab *)0x0) goto code_?;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pOVar1,
                        (MethodInfo *)0x0);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
    this_00 = pOVar2[2].klass;
    pOVar1 = (this->fields)._._.component;
    if (pOVar1 == (ObjectPrefab *)0x0) goto code_?;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pOVar1,
                        (MethodInfo *)0x0);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if (pOVar2[1].monitor != (MonitorData *)0x0) {
      if (pOVar2[2].klass != (Object__Class *)0x0) {
        source = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           ((Renderer *)pOVar2[2].klass,(MethodInfo *)0x0);
        this_03 = (Material *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                  (this_03,source,(MethodInfo *)0x0);
        if (this_00 != (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                    ((Renderer *)this_00,this_03,(MethodInfo *)0x0);
          pOVar1 = (this->fields)._._.component;
          if (pOVar1 != (ObjectPrefab *)0x0) {
            pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pOVar1,
                                (MethodInfo *)0x0);
            if (pOVar2 != (Object *)0x0) {
              if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
              if (pOVar2[2].klass != (Object__Class *)0x0) {
                pBVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                                    ((Bounds *)&puStack_4,(Renderer *)pOVar2[2].klass,
                                     (MethodInfo *)0x0);
                fVar5 = (pBVar3->m_Center).y;
                fVar6 = (pBVar3->m_Center).z;
                fVar7 = (pBVar3->m_Extents).x;
                fVar8 = (pBVar3->m_Extents).y;
                fVar9 = (pBVar3->m_Extents).z;
                (this->fields).localBounds.m_Center.x = (pBVar3->m_Center).x;
                (this->fields).localBounds.m_Center.y = fVar5;
                (this->fields).localBounds.m_Center.z = fVar6;
                (this->fields).localBounds.m_Extents.x = fVar7;
                (this->fields).localBounds.m_Extents.y = fVar8;
                (this->fields).localBounds.m_Extents.z = fVar9;
                iVar10 = func_?();
                fVar5 = *(float *)(iVar10 + 8);
                this_01 = (this->fields)._._.gameObject;
                if (this_01 != (GameObject *)0x0) {
                  this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(this_01,(MethodInfo *)0x0);
                  if (this_04 != (Transform *)0x0) {
                    pVVar11 = (Vector3 *)&stack0xffffffdc;
                    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position(pVVar11,this_04,(MethodInfo *)0x0);
                    uVar13._0_4_ = pVVar12->x;
                    uVar13._4_4_ = pVVar12->y;
                    fVar6 = pVVar12->z;
                    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                      puVar14 = &UNK_?;
                      func_?();
                      uVar13 = CONCAT44(puVar14,(undefined4)uVar13);
                    }
                    a.y = (float)this_04;
                    a.x = (float)pVVar11;
                    a.z = fVar5;
                    b.z = fVar6;
                    b.x = (float)(int)uVar13;
                    b.y = (float)(int)((ulonglong)uVar13 >> 0x20);
                    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                              Vector3_op_Subtraction
                                        ((Vector3 *)&stack0xffffffdc,a,b,(MethodInfo *)0x0);
                    puStack15 = (undefined *)pVVar11->z;
                    func_?();
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?();
                    }
                    pWVar16 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager
                                        ((MethodInfo *)0x0);
                    iVar17 = (this->fields)._._.interactionFlags;
                    (this->fields).waterManager = pWVar16;
                    uVar13._0_4_ = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
                    *(uint *)&(this->fields)._._.interactionFlags =
                         (uint)iVar17 & 0xffffdfff | 0x8000;
                    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
                         (undefined4)uVar13;
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

