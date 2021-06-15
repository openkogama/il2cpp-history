
/* Void CheckMoveables(MvCharacterController, Single) */

void Assembly-CSharp.dll::MVMovableMotorState::MVMovableMotorState_CheckMoveables
               (MVMovableMotorState *this,MvCharacterController *controller,float tolerance,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffec8;
  method_00 = in_stack_5;
  puVar6 = &stack0xfffffec8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    method_00 = in_stack_5;
    puVar6 = puStack_4;
  }
  puStack_4 = puVar6;
  LStack_7.fields._NextReward_k__BackingField.value = 0;
  pDStack_8 = (DayNightCycle *)0x0;
  LStack_7.klass = (LevelRewardsManager__Class *)0x0;
  LStack_7.monitor = (MonitorData *)0x0;
  LStack_7.fields.unseenLevelRewards = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  LStack_7.fields._NextReward_k__BackingField.key = 0;
  pMStack_9 = (MVGameControllerBase__Class *)0x0;
  uStack_10 = 0;
  func_?();
  LStack_7.fields.OnRewardsReturned = (Action *)&stack0xfffffec8;
  puStack_4 = &stack0xfffffec8;
  if (controller != (MvCharacterController *)0x0) {
    LStack_7.fields.OnRewardsReturned = (Action *)&stack0xfffffec8;
    puStack_4 = &stack0xfffffec8;
    this_00 = MvCharacterController::MvCharacterController_GetOverlappingObjects
                        (controller,(MethodInfo *)0x0);
    bVar11 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_6
                      ((IEnumerable_1_MVOverlapResult_ *)this_00,
                       bool_MethodInfo__System__Linq__Enumerable__Any<MVOverlapResult>_System__Collections__Generic__IEnumerable<MVOverlapResult>_
                      );
    if (bVar11 != 0) {
      unaff_ESI = (MVGameControllerBase__Class *)0x0;
      if (this_00 == (List_1_MVOverlapResult_ *)0x0) goto code_?;
      pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
               List_1_UnityEngine_Vector2__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Vector2_ *)auStack_13,
                          (List_1_UnityEngine_Vector2_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<MVOverlapResult>__GetEnumerator__
                         );
      LStack_7.klass = (LevelRewardsManager__Class *)pLVar12->l;
      LStack_7.monitor = (MonitorData *)pLVar12->next;
      LStack_7.fields.unseenLevelRewards = (Dictionary_2_System_Int32_System_Int32_ *)pLVar12->ver;
      LStack_7.fields._NextReward_k__BackingField.key = (int32_t)(pLVar12->current).x;
      LStack_7.fields._NextReward_k__BackingField.value = (int32_t)(pLVar12->current).y;
      uStack_1 = 0;
      while (cVar14 = func_?(), cVar14 != '\0') {
        KVar15 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                           (&LStack_7,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__get_Current__
                           );
        iVar16 = KVar15.value;
        unaff_ESI = (MVGameControllerBase__Class *)KVar15.key;
        pDStack_8 = (DayNightCycle *)0x0;
        iStack_17 = iVar16;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar18 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (((pMVar18 == (MVWorldObjectClientManager *)0x0) ||
            (pOVar19 = System.Core.dll::System::Linq::
                      Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic
                      ::KeyValuePair`2[System::Object,System::Object],System::Object]::
                      Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                  *)pMVar18,(MethodInfo *)0x0), pOVar19 == (Object *)0x0)) ||
           (pOVar19[2].klass == (Object__Class *)0x0)) goto code_?;
        pMVar20 = 
        MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
        ;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                  ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)pOVar19[2].klass,(int32_t)unaff_ESI,(TerrainUtility_TerrainMap **)&pDStack_8,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
                  );
        if (pDStack_8 != (DayNightCycle *)0x0) {
          if (controller == (MvCharacterController *)0x0) goto code_?;
          method_02 = (MethodInfo *)&UNK_?;
          pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)controller,(MethodInfo *)0x0);
          if ((pGVar21 == (GameObject *)0x0) ||
             (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar21,(MethodInfo *)0x0),
             pTVar22 == (Transform *)0x0)) goto code_?;
          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_24,pTVar22,(MethodInfo *)0x0);
          uStack_25._0_4_ = pVVar23->x;
          uStack_25._4_4_ = pVVar23->y;
          fStack_26 = pVVar23->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                    (&VStack_27,(MethodInfo *)0x0);
          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                              (&VStack_28,(MethodInfo *)0x0);
          uStack_29._0_4_ = pVVar23->x;
          uStack_29._4_4_ = pVVar23->y;
          pMStack_30 = (MVGameControllerBase__Class *)pVVar23->z;
          fStack_31 = 0.0;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar18 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (((pMVar18 == (MVWorldObjectClientManager *)0x0) ||
              (unaff_ESI = (MVGameControllerBase__Class *)
                           System.Core.dll::System::Linq::
                           Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::
                           Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
                           Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                     ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                       *)pMVar18,(MethodInfo *)0x0),
              pDStack_8 == (DayNightCycle *)0x0)) ||
             (pSVar32 = DayNightCycle::DayNightCycle_get_CurrentStarsParam(pDStack_8,pMVar20),
             unaff_ESI == (MVGameControllerBase__Class *)0x0)) goto code_?;
          pMVar20 = (MethodInfo *)((ulonglong)uStack_25 >> 0x20);
          position.z = fStack_26;
          position.x = (float)(undefined4)uStack_25;
          position.y = (float)uStack_25._4_4_;
          pVVar23 = MoveableController::MoveableController_GetVel
                              (&VStack_33,(MoveableController *)unaff_ESI,(int32_t)pSVar32,position,
                               method_02);
          uStack_34._0_4_ = pVVar23->x;
          uStack_34._4_4_ = pVVar23->y;
          unaff_ESI = (MVGameControllerBase__Class *)pVVar23->z;
          uStack_35 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                                ((MethodInfo *)0x0);
          method_04 = (MethodInfo *)0x0;
          a_04.z = (float)unaff_ESI;
          a_04.x = (float)(undefined4)uStack_34;
          a_04.y = uStack_34._4_4_;
          method_03 = unaff_ESI;
          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                              (&VStack_36,a_04,uStack_35,(MethodInfo *)0x0);
          uStack_37._0_4_ = pVVar23->x;
          uStack_37._4_4_ = pVVar23->y;
          uStack_34 = CONCAT44(pVVar23->z,(undefined4)uStack_34);
          pMVar18 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (((pMVar18 == (MVWorldObjectClientManager *)0x0) ||
              (unaff_ESI = (MVGameControllerBase__Class *)
                           System.Core.dll::System::Linq::
                           Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::
                           Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
                           Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                     ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                       *)pMVar18,method_00), pDStack_8 == (DayNightCycle *)0x0)) ||
             (in_stack_38 =
                   (MethodInfo *)
                   DayNightCycle::DayNightCycle_get_CurrentStarsParam(pDStack_8,in_stack_38),
             unaff_ESI == (MVGameControllerBase__Class *)0x0)) goto code_?;
          method_00 = (MethodInfo *)&UNK_?;
          MoveableController::MoveableController_UpdateSingleMoveableInChain
                    ((MoveableController *)unaff_ESI,(int32_t)in_stack_38,-1.0,
                     in_stack_39);
          unaff_ESI = (MVGameControllerBase__Class *)0x0;
          while( true ) {
            if (iVar16 == 0) goto code_?;
            if (*(int *)(iVar16 + 0xc) <= (int)unaff_ESI) break;
            puVar40 = (undefined4 *)func_?();
            uStack_35 = (float)CONCAT22(*(undefined2 *)(puVar40 + 1),(undefined2)uStack_35);
            uStack_41 = CONCAT44(*puVar40,(undefined4)uStack_41);
            if (pDStack_8 == (DayNightCycle *)0x0) goto code_?;
            gameObject = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                   (pDStack_8,in_stack_42);
            if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
              func_?(TypeInfo__SharedCubeFunctions);
            }
            uVar43 = uStack_41;
            iVector.z = uStack_35._2_2_;
            iVector.x = uStack_41._4_2_;
            iVector.y = uStack_41._6_2_;
            uStack_41 = uVar43;
            pVVar23 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                                (&VStack_44,(GameObject *)gameObject,iVector,(MethodInfo *)0x0);
            uStack_41._0_4_ = pVVar23->x;
            uStack_41._4_4_ = pVVar23->y;
            fVar45 = pVVar23->z;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            in_stack_42 = (MethodInfo *)&stack0xffffff1c;
            a.z = fStack_26;
            a.x = (float)(undefined4)uStack_25;
            a.y = (float)uStack_25._4_4_;
            b.z = fVar45;
            b.x = (float)(undefined4)uStack_41;
            b.y = (float)uStack_41._4_4_;
            pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                ((Vector3 *)in_stack_42,a,b,(MethodInfo *)0x0);
            a_01.z = (float)pMStack_30;
            a_01.x = (float)(undefined4)uStack_29;
            a_01.y = (float)uStack_29._4_4_;
            pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                ((Vector3 *)&stack0xffffff10,a_01,*pVVar23,(MethodInfo *)0x0);
            fStack_31 = fStack_31 + _UNK_?;
            unaff_ESI = (MVGameControllerBase__Class *)((int)&(unaff_ESI->_0).image + 1);
            uStack_29._0_4_ = pVVar23->x;
            uStack_29._4_4_ = pVVar23->y;
            pMStack_30 = (MVGameControllerBase__Class *)pVVar23->z;
            iVar16 = iStack_17;
          }
          pMVar46 = pMStack_30;
          if (_UNK_? < fStack_31) {
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            a_02.z = (float)pMStack_30;
            a_02.x = (float)(undefined4)uStack_29;
            a_02.y = (float)uStack_29._4_4_;
            pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                                ((Vector3 *)&stack0xffffff04,a_02,fStack_31,(MethodInfo *)0x0);
            uStack_29._0_4_ = pVVar23->x;
            uStack_29._4_4_ = pVVar23->y;
            pMVar46 = (MVGameControllerBase__Class *)pVVar23->z;
          }
          if (controller == (MvCharacterController *)0x0) goto code_?;
          motion_00.z = uStack_34._4_4_;
          motion_00.x = (float)(undefined4)uStack_37;
          motion_00.y = (float)uStack_37._4_4_;
          MvCharacterController::MvCharacterController_Move
                    (controller,motion_00,0,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar18 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar18 == (MVWorldObjectClientManager *)0x0) goto code_?;
          method_01 = (MethodInfo *)&UNK_?;
          unaff_ESI = (MVGameControllerBase__Class *)
                      System.Core.dll::System::Linq::
                      Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic
                      ::KeyValuePair`2[System::Object,System::Object],System::Object]::
                      Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                  *)pMVar18,(MethodInfo *)0x0);
          if ((pDStack_8 == (DayNightCycle *)0x0) ||
             (pMVar20 = (MethodInfo *)
                        DayNightCycle::DayNightCycle_get_CurrentStarsParam(pDStack_8,pMVar20),
             unaff_ESI == (MVGameControllerBase__Class *)0x0)) goto code_?;
          MoveableController::MoveableController_UpdateSingleMoveableInChain
                    ((MoveableController *)unaff_ESI,(int32_t)pMVar20,1.0,method_02);
          bVar11 = MvCharacterController::MvCharacterController_CheckOverLap
                            (controller,(MethodInfo *)0x0);
          if (bVar11 != 0) {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              method_03 = TypeInfo__MVGameControllerBase;
              func_?();
            }
            pMVar18 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (((pMVar18 == (MVWorldObjectClientManager *)0x0) ||
                (unaff_ESI = (MVGameControllerBase__Class *)
                             System.Core.dll::System::Linq::
                             Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::
                             Generic::KeyValuePair`2[System::Object,System::Object],System::Object]
                             ::
                             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                         *)pMVar18,(MethodInfo *)0x0),
                pDStack_8 == (DayNightCycle *)0x0)) ||
               (pMVar20 = (MethodInfo *)
                          DayNightCycle::DayNightCycle_get_CurrentStarsParam(pDStack_8,pMVar20),
               unaff_ESI == (MVGameControllerBase__Class *)0x0)) goto code_?;
            MoveableController::MoveableController_UpdateSingleMoveableInChain
                      ((MoveableController *)unaff_ESI,(int32_t)pMVar20,-1.0,method_02);
            pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)controller,(MethodInfo *)0x0);
            if ((pGVar21 == (GameObject *)0x0) ||
               (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar21,(MethodInfo *)method_03),
               pTVar22 == (Transform *)0x0)) goto code_?;
            pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xfffffef8,pTVar22,method_04);
            uStack_37._0_4_ = pVVar23->x;
            uStack_37._4_4_ = pVVar23->y;
            unaff_ESI = (MVGameControllerBase__Class *)pVVar23->z;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            a_05.z = fStack_26;
            a_05.x = (float)(undefined4)uStack_25;
            a_05.y = (float)uStack_25._4_4_;
            b_01.z = (float)unaff_ESI;
            b_01.x = (float)(undefined4)uStack_37;
            b_01.y = (float)uStack_37._4_4_;
            pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                ((Vector3 *)&stack0xfffffeec,a_05,b_01,(MethodInfo *)0x0);
            method_00 = (MethodInfo *)pVVar23->x;
            in_stack_38 = (MethodInfo *)pVVar23->z;
            in_stack_39 = (MethodInfo *)0x0;
            MvCharacterController::MvCharacterController_Move
                      (controller,*pVVar23,0,(MethodInfo *)0x0);
            VStack_36.y = (float)&uStack_10;
            uStack_10 = uStack_29 & 0xffffffff;
            VStack_36.z = 0.0;
            VStack_36.x = (float)&UNK_?;
            pMStack_9 = pMVar46;
            fVar47 = (float10)func_?();
            uStack_34 = CONCAT44((float)fVar47,(undefined4)uStack_34);
            if ((float)fVar47 < tolerance * tolerance) {
              func_?(&uStack_10,0);
              unaff_ESI = pMStack_9;
              uStack_37 = uStack_10;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector3);
              }
              a_00.z = (float)unaff_ESI;
              a_00.x = (float)(undefined4)uStack_37;
              a_00.y = (float)uStack_37._4_4_;
              pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                  ((Vector3 *)&stack0xfffffee0,a_00,tolerance,(MethodInfo *)0x0);
              uStack_10._0_4_ = pVVar23->x;
              uStack_10._4_4_ = pVVar23->y;
              pMStack_9 = (MVGameControllerBase__Class *)pVVar23->z;
            }
            motion.z = (float)pMStack_9;
            motion.x = (float)(undefined4)uStack_10;
            motion.y = (float)uStack_10._4_4_;
            MvCharacterController::MvCharacterController_Move(controller,motion,0,(MethodInfo *)0x0)
            ;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar18 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar18 == (MVWorldObjectClientManager *)0x0) goto code_?;
            method_01 = (MethodInfo *)&UNK_?;
            unaff_ESI = (MVGameControllerBase__Class *)
                        System.Core.dll::System::Linq::
                        Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::
                        Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
                        Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                  ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                    *)pMVar18,(MethodInfo *)0x0);
            if ((pDStack_8 == (DayNightCycle *)0x0) ||
               (pSVar32 = DayNightCycle::DayNightCycle_get_CurrentStarsParam(pDStack_8,pMVar20),
               unaff_ESI == (MVGameControllerBase__Class *)0x0)) goto code_?;
            MoveableController::MoveableController_UpdateSingleMoveableInChain
                      ((MoveableController *)unaff_ESI,(int32_t)pSVar32,1.0,method_02);
          }
          pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)controller,(MethodInfo *)0x0);
          if ((pGVar21 == (GameObject *)0x0) ||
             (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar21,method_01), pTVar22 == (Transform *)0x0))
          goto code_?;
          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xfffffed4,pTVar22,(MethodInfo *)0x0);
          uStack_37._0_4_ = pVVar23->x;
          uStack_37._4_4_ = pVVar23->y;
          fVar45 = pVVar23->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          a_03.z = fStack_26;
          a_03.x = (float)(undefined4)uStack_25;
          a_03.y = (float)uStack_25._4_4_;
          b_00.z = fVar45;
          b_00.x = (float)(undefined4)uStack_37;
          b_00.y = (float)uStack_37._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                    ((Vector3 *)(auStack_13 + 8),a_03,b_00,(MethodInfo *)0x0);
          func_?();
        }
      }
      (LStack_7.fields.OnRewardsReturned)->klass = (Action__Class *)0x21f;
      uStack_1 = 0xffffffff;
      func_?(&LStack_7,
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__Dispose__
                     );
    }
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  func_?();
  func_?(unaff_ESI,0,0);
  pcVar48 = (code *)swi(3);
  (*pcVar48)();
  return;
}

/* decompilation failed: Low-level Error: Symbol offset is incompatible with VariableGroup */

