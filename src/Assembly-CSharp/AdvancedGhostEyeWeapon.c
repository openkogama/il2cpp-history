
/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostEyeWeapon::AdvancedGhostEyeWeapon_Update
               (AdvancedGhostEyeWeapon *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff48;
  puVar5 = &stack0xffffff48;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  fStack_6 = 0.0;
  uStack_7 = 0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  func_?();
  pTVar9 = (this->fields).timeoutMap;
  puStack_10 = (undefined4 *)&stack0xffffff48;
  puStack_4 = &stack0xffffff48;
  if (pTVar9 != (TimeoutMap *)0x0) {
    puStack_10 = (undefined4 *)&stack0xffffff48;
    puStack_4 = &stack0xffffff48;
    TimeoutMap::TimeoutMap_Update(pTVar9,(MethodInfo *)0x0);
    this_00 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this->fields)._.attackTargets;
    if (this_00 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
      pHVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
               FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                         ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                          auStack_12,this_00,
                          MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
      CStack_8.klass =
           (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar11->hashset;
      CStack_8.monitor = (MonitorData *)pHVar11->next;
      CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar11->stamp;
      CStack_8.fields.syncRoot = (Object *)pHVar11->current;
      uStack_1 = 0;
      while( true ) {
        do {
          do {
            do {
              cVar13 = func_?();
              if (cVar13 == '\0') {
                *puStack_10 = 0xf2;
                uStack_1 = 0xffffffff;
                func_?(&CStack_8,
                                MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                               );
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              unaff_ESI = (DayNightCycle *)
                          mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    (&CStack_8,
                                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                                    );
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
              unaff_ESI = (DayNightCycle *)
                          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                    (this_02,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            } while (unaff_ESI == (DayNightCycle *)0x0);
            pTVar9 = (this->fields).timeoutMap;
            pIVar14 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)unaff_ESI,(MethodInfo *)0x0);
            if (pTVar9 == (TimeoutMap *)0x0) goto code_?;
            bVar15 = TimeoutMap::TimeoutMap_Contains
                              (pTVar9,(int32_t)pIVar14,(MethodInfo *)in_stack_16);
          } while (bVar15 != 0);
          this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(unaff_ESI,(MethodInfo *)0x0);
          if (this_03 == (CelestialParam *)0x0) goto code_?;
          x = (MVRigidBody *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                        ((GameObject *)this_03,
                         MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                        );
          pMStack_17 = x;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        } while (bVar15 != 0);
        puVar18 = (undefined8 *)func_?();
        uStack_19 = *puVar18;
        fStack_20 = *(float *)(puVar18 + 1);
        this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this,(MethodInfo *)0x0);
        if ((this_04 == (GameObject *)0x0) ||
           (this_05 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (this_04,(MethodInfo *)this_02), this_05 == (Transform *)0x0))
        break;
        pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffff84,this_05,(MethodInfo *)0x0);
        uStack_22._0_4_ = pVVar21->x;
        uStack_22._4_4_ = pVVar21->y;
        fStack_23 = pVVar21->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                           ((Vector3 *)&stack0xffffff78,(MethodInfo *)0x0);
        a.z = fStack_23;
        a.x = (float)(undefined4)uStack_22;
        a.y = (float)uStack_22._4_4_;
        pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           ((Vector3 *)&stack0xffffff6c,a,*pVVar21,(MethodInfo *)0x0);
        in_stack_16 = (FirstTimeEvent__Enum__Array *)&UNK_?;
        a_00.z = fStack_20;
        a_00.x = (float)(undefined4)uStack_19;
        a_00.y = (float)uStack_19._4_4_;
        pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           ((Vector3 *)&stack0xffffff60,a_00,*pVVar21,(MethodInfo *)0x0);
        uStack_7._0_4_ = pVVar21->x;
        uStack_7._4_4_ = pVVar21->y;
        fStack_6 = pVVar21->z;
        auStack_12._4_4_ = &uStack_7;
        iStack_24 = 0;
        auStack_12._0_4_ = &stack0xffffff54;
        pVVar21 = (Vector3 *)func_?();
        pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)(auStack_12 + 4),*pVVar21,(this->fields).impulseStrength,
                            (MethodInfo *)0x0);
        if (pMStack_17 == (MVRigidBody *)0x0) break;
        MVRigidBody::MVRigidBody_AddImpulse_1(pMStack_17,*pVVar21,0,(MethodInfo *)0x0);
        pTVar9 = (this->fields).timeoutMap;
        pIVar14 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)unaff_ESI,(MethodInfo *)0x0);
        if (pTVar9 == (TimeoutMap *)0x0) break;
        TimeoutMap::TimeoutMap_Add(pTVar9,(int32_t)pIVar14,(MethodInfo *)0x0);
        this_01 = (this->fields).doDamage;
        if (this_01 == (AudioSource *)0x0) break;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  (this_01,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  func_?();
  func_?(unaff_ESI,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* AdvancedGhostEyeWeapon() */

void Assembly-CSharp.dll::AdvancedGhostEyeWeapon::AdvancedGhostEyeWeapon__ctor
               (AdvancedGhostEyeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).impulseStrength = 2000.0;
  this_00 = (TimeoutMap *)func_?(TypeInfo__TimeoutMap);
  TimeoutMap::TimeoutMap__ctor(this_00,0.5,(MethodInfo *)0x0);
  (this->fields).timeoutMap = this_00;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields)._.attackTargets = (HashSet_1_System_Int32_ *)this_01;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

