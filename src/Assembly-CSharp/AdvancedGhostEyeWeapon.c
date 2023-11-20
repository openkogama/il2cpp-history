
/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostEyeWeapon::AdvancedGhostEyeWeapon_Update
               (AdvancedGhostEyeWeapon *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff38;
  puVar5 = &stack0xffffff38;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  HStack_6._set = (HashSet_1_System_UInt32_ *)0x0;
  HStack_6._index = 0;
  HStack_6._version = 0;
  HStack_6._current = 0;
  pTVar7 = (this->fields).timeoutMap;
  if (pTVar7 != (TimeoutMap *)0x0) {
    TimeoutMap::TimeoutMap_Update(pTVar7,(MethodInfo *)0x0);
    this_00 = (HashSet_1_System_UInt32_ *)(this->fields)._.attackTargets;
    if (this_00 != (HashSet_1_System_UInt32_ *)0x0) {
      pHVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
               HashSet_1_System_UInt32__GetEnumerator
                         ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffff68,this_00,
                          MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
      uStack_9 = 0;
      HStack_6._set = pHVar8->_set;
      HStack_6._index = pHVar8->_index;
      HStack_6._version = pHVar8->_version;
      HStack_6._current = pHVar8->_current;
      uStack_1 = 1;
      pHStack_10 = &HStack_6;
      while( true ) {
        do {
          do {
            do {
              bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System
                      ::UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                                (&HStack_6,
                                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                );
              id = HStack_6._current;
              if (bVar11 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)&HStack_6,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                           ,in_stack_12);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
              in_stack_12 = (MethodInfo *)0x0;
              pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (this_03,id,(MethodInfo *)0x0);
            } while (pMVar13 == (MVWorldObject *)0x0);
            pTVar7 = (this->fields).timeoutMap;
            if (pTVar7 == (TimeoutMap *)0x0) goto code_?;
            in_stack_12 = (MethodInfo *)&UNK_?;
            bVar11 = TimeoutMap::TimeoutMap_Contains(pTVar7,(pMVar13->fields).id,(MethodInfo *)0x0);
          } while (bVar11 != 0);
          this_01 = pMVar13[1].fields.inputLinkRefs;
          if (this_01 == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
          pMStack_14 = (MVRigidBody *)
                       UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponent_1
                                 ((GameObject *)this_01,
                                  MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                                 );
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pMStack_14,(Object_1 *)0x0,(MethodInfo *)0x0);
        } while (bVar11 != 0);
        puVar15 = (undefined8 *)func_?();
        uStack_16 = *puVar15;
        uStack_17 = *(undefined4 *)(puVar15 + 1);
        this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_04 == (GameObject *)0x0) break;
        this_05 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_04,(MethodInfo *)0x0);
        if (this_05 == (Transform *)0x0) break;
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffff50,this_05,(MethodInfo *)0x0);
        uStack_19._0_4_ = pVVar18->x;
        uStack_19._4_4_ = pVVar18->y;
        fStack_20 = pVVar18->z;
        puVar15 = (undefined8 *)func_?();
        uStack_21 = *puVar15;
        uStack_22 = *(undefined4 *)(puVar15 + 1);
        puVar15 = (undefined8 *)func_?();
        uVar23 = *puVar15;
        fStack_24 = *(float *)(puVar15 + 1);
        uStack_25._4_4_ = (float)((ulonglong)uVar23 >> 0x20);
        fStack_26 = (this->fields).impulseStrength;
        uStack_25._0_4_ = (float)uVar23;
        fStack_27 = fStack_24 * fStack_26;
        fStack_28 = uStack_25._4_4_ * fStack_26;
        fStack_26 = (float)uStack_25 * fStack_26;
        uStack_25 = uVar23;
        if (pMStack_14 == (MVRigidBody *)0x0) break;
        impulse.y = fStack_28;
        impulse.x = fStack_26;
        impulse.z = fStack_27;
        MVRigidBody::MVRigidBody_AddImpulse_1(pMStack_14,impulse,0,(MethodInfo *)0x0);
        pTVar7 = (this->fields).timeoutMap;
        if (pTVar7 == (TimeoutMap *)0x0) break;
        TimeoutMap::TimeoutMap_Add(pTVar7,(pMVar13->fields).id,(MethodInfo *)0x0);
        this_02 = (this->fields).doDamage;
        if (this_02 == (AudioSource *)0x0) break;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                  (this_02,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* AdvancedGhostEyeWeapon() */

void Assembly-CSharp.dll::AdvancedGhostEyeWeapon::AdvancedGhostEyeWeapon__ctor
               (AdvancedGhostEyeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TimeoutMap);
    cRam_? = '\x01';
  }
  (this->fields).impulseStrength = 2000.0;
  this_00 = (TimeoutMap *)func_?(TypeInfo__TimeoutMap);
  TimeoutMap::TimeoutMap__ctor(this_00,0.5,(MethodInfo *)0x0);
  (this->fields).timeoutMap = this_00;
  func_?(&(this->fields).timeoutMap,this_00);
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  this_01 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields)._.attackTargets = this_01;
  func_?(&(this->fields)._.attackTargets,this_01);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

