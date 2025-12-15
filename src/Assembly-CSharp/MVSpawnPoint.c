
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint_Delete
               (MVSpawnPoint *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_You_cannot_delete_the_last_spawn);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    iVar3 = MVTeamManager::MVTeamManager_get_NumSpawnPoint(this_00,(MethodInfo *)0x0);
    if (iVar3 < 2) {
      bVar4 = iRam_? != 0;
      *errorText = StringLiteral_You_cannot_delete_the_last_spawn;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)errorText >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      return 0;
    }
    this_01 = (this->fields)._._.gameObject;
    if ((this_01 != (GameObject *)0x0) &&
       (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,0,(MethodInfo *)0x0),
       worldObjectClientManager != (MVWorldObjectClientManager *)0x0)) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                (worldObjectClientManager,(this->fields)._._._.id,(MethodInfo *)0x0);
      return 1;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint_Destroy(MVSpawnPoint *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields).isInWorld != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_Quitting_k__BackingField == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
        iVar3 = (this->fields)._._._.type;
        pMVar4 = (pMVar2->fields).teamManager;
        if (iVar3 == 0x27) {
          key = 1;
        }
        else if (iVar3 == 0x28) {
          key = 2;
        }
        else if (iVar3 == 0x29) {
          key = 3;
        }
        else if (iVar3 == 0x2a) {
          key = 0;
        }
        else {
          key = 5;
        }
        if (pMVar4 != (MVTeamManager *)0x0) {
          IVar5 = (this->fields)._._._.id;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Remove_MV__WorldObject__MVTeam_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__MV__WorldObject__TeamEventArgs);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_OnRemoveSpawnPoint);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar6 = (pMVar4->fields).teams;
          if ((pDVar6 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) &&
             (this_02 = (HashSet_1_System_Int32Enum_ *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,key,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                                  ), this_02 != (HashSet_1_System_Int32Enum_ *)0x0)) {
            bVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                    HashSet_1_System_Int32Enum__Remove
                              (this_02,IVar5,
                               MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
            if (bVar7 == 0) {
              uVar8 = func_?(&TypeInfo__System__Exception);
              pEVar9 = (Exception *)func_?(uVar8);
              pSVar10 = (String *)func_?(&StringLiteral_Team_wo_id_already_removed);
              mscorlib.dll::System::Exception::Exception__ctor_1(pEVar9,pSVar10,(MethodInfo *)0x0);
              uVar8 = func_?(&
                                           MethodInfo__MVTeamManager__OnRemoveSpawnPoint_int__MV__WorldObject__MVTeam_
                                          );
              FUN_?(pEVar9,uVar8);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pDVar6 = (pMVar4->fields).teams;
            if ((pDVar6 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) &&
               (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,key,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                                    ), pOVar12 != (Object *)0x0)) {
              if (*(int *)&pOVar12[2].klass != 0) {
code_?:
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)StringLiteral_OnRemoveSpawnPoint,(MethodInfo *)0x0);
                uVar8 = (*(pMVar4->klass->vtable).ToString.methodPtr)
                                   (pMVar4,(pMVar4->klass->vtable).ToString.method);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Debug,0);
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__UnityEngine__ILogger);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Debug);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pIVar13 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
                if (pIVar13 == (ILogger_1 *)0x0) {
                  FUN_?();
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar13,3,uVar8);
                return;
              }
              pDVar6 = (pMVar4->fields).teams;
              if (pDVar6 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__Remove
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Remove_MV__WorldObject__MVTeam_
                          );
                if ((pMVar4->fields).OnTeamsUpdated != (MVTeamManager_OnTeamsUpdatedDelegate *)0x0)
                {
                  pMVar14 = (pMVar4->fields).OnTeamsUpdated;
                  (*(pMVar14->fields)._._.invoke_impl)
                            ((pMVar14->fields)._._.method_code,(pMVar14->fields)._._.method);
                }
                if ((pMVar4->fields).OnTeamRemoved !=
                    (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)0x0) {
                  pEVar15 = (pMVar4->fields).OnTeamRemoved;
                  this_03 = (TeamEventArgs *)FUN_?(TypeInfo__MV__WorldObject__TeamEventArgs)
                  ;
                  MVWorldObject.dll::MV::WorldObject::TeamEventArgs::TeamEventArgs__ctor
                            (this_03,key,(MethodInfo *)0x0);
                  (*(pEVar15->fields)._._.invoke_impl)
                            ((pEVar15->fields)._._.method_code,pMVar4,this_03);
                }
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                IVar5 = 0;
                while (this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                                 (pMVar4->fields).teams,
                      this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
                  iVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32Enum,UnityEngine::Vector3]::
                           Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                                     (this_00,IVar5,
                                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                                      ->klass->rgctx_data[0x21].method);
                  if (-1 < iVar16) {
                    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((pMVar2 == (MVNetworkGame *)0x0) ||
                       (this_01 = (pMVar2->fields).playerContainer,
                       this_01 == (MVPlayerContainer *)0x0)) break;
                    MVPlayerContainer::MVPlayerContainer_UpdateTeamForPlayersOnRemovedTeam
                              (this_01,key,IVar5,(MethodInfo *)0x0);
                    goto code_?;
                  }
                  IVar5 = IVar5 + 1;
                  if (3 < (int)IVar5) {
                    uVar8 = func_?(&TypeInfo__System__Exception);
                    pEVar9 = (Exception *)func_?(uVar8);
                    pSVar10 = (String *)
                              func_?(&StringLiteral_Could_not_find_default_team);
                    mscorlib.dll::System::Exception::Exception__ctor_1
                              (pEVar9,pSVar10,(MethodInfo *)0x0);
                    uVar8 = func_?(&MethodInfo__MVTeamManager__GetDefaultTeam__);
                    FUN_?(pEVar9,uVar8);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                }
              }
            }
          }
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVSpawnPoint *this,float gridSize,
                    Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_2.x = (pVVar1->oneVector).x;
  VStack_2.y = (pVVar1->oneVector).y;
  fVar3 = (pVVar1->oneVector).z;
  this_00 = (this->fields)._._.gameObject;
  if ((this_00 != (GameObject *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_4.x = 0.0;
    QStack_4.y = 0.0;
    QStack_4.z = 0.0;
    QStack_4.w = 0.0;
    pvVar5 = (obj->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar5,&QStack_4);
    fVar9 = TypeRef__System__Activator__T._0_4_;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_2.z = position->z;
    uVar8._0_4_ = position->x;
    uVar8._4_4_ = position->y;
    VStack_10.y = fVar9;
    VStack_10.x = VStack_2.x;
    aQStack_11[0].x = QStack_4.x;
    aQStack_11[0].y = QStack_4.y;
    aQStack_11[0].z = QStack_4.z;
    aQStack_11[0].w = QStack_4.w;
    VStack_10.z = fVar3;
    VStack_2._0_8_ = uVar8;
    pVVar7 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                       ((Vector3 *)&QStack_4,&VStack_2,aQStack_11,gridSize,&VStack_10,
                        (MethodInfo *)0x0);
    fVar9 = pVVar7->y;
    fVar3 = pVVar7->z;
    __return_storage_ptr__->x = pVVar7->x;
    __return_storage_ptr__->y = fVar9;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint_Initialize
               (MVSpawnPoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<bool>__Nullable_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_onlyFirstSpawn);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._.data;
  (this->fields).isInWorld = 1;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::StyleComplexSelector+PseudoStateData]::
             Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                       (this_00,(Object *)StringLiteral_onlyFirstSpawn,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        ->klass->rgctx_data[0x21].method);
    key = 0;
    if (-1 < iVar1) {
      this_01 = (this->fields)._._._.data;
      if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (this_01,(Object *)StringLiteral_onlyFirstSpawn,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (pOVar2 != (Object *)0x0) {
        pOVar3 = (Object *)0x0;
        if (pOVar2->klass == pORam0000000182dbdd78) {
          pOVar3 = pOVar2;
        }
        if (pOVar3 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class != (pORam0000000182dbdd78->_0).element_class) {
            FUN_?(pOVar2,pORam0000000182dbdd78);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uStackX_8 = CONCAT71((uint7)*(byte *)&pOVar2[1].klass,1);
          (this->fields).spawnPointOnlyFirstDeath = uStackX_8._0_2_;
        }
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar5 != (MVGameControllerBase *)0x0) &&
       (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) {
      pMVar7 = (pMVar6->fields).teamManager;
      iVar8 = (this->fields)._._._.type;
      if (iVar8 == 0x27) {
        key = 1;
      }
      else if (iVar8 == 0x28) {
        key = 2;
      }
      else if (iVar8 == 0x29) {
        key = 3;
      }
      else if (iVar8 != 0x2a) {
        key = 5;
      }
      if (pMVar7 != (MVTeamManager *)0x0) {
        iVar1 = (this->fields)._._._.id;
        uVar9 = 0;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__HashSet<int>_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__MV__WorldObject__TeamEventArgs);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Attempt_to_AddTeam_of_type_Serve);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (key == 4) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar10 = StringLiteral_Attempt_to_AddTeam_of_type_Serve;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__ILogger);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar11 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
          if (pIVar11 != (ILogger_1 *)0x0) {
            FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar11,0,pSVar10);
            return;
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_02 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(pMVar7->fields).teams;
        bVar12 = false;
        if (this_02 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
          iVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32Enum,UnityEngine::Vector3]::
                   Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                             (this_02,key,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                              ->klass->rgctx_data[0x21].method);
          if (iVar13 < 0) {
            pDVar14 = (pMVar7->fields).teams;
            pOVar2 = (Object *)FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
            FUN_?(pOVar2,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__)
            ;
            if (pDVar14 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0)
            goto DAT_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,key,pOVar2,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar9 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__HashSet<int>_
                       ->klass->rgctx_data[0x22].method);
            bVar12 = true;
          }
          pDVar14 = (pMVar7->fields).teams;
          if (pDVar14 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
            this_03 = (HashSet_1_System_Int32_ *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                                );
            if (this_03 != (HashSet_1_System_Int32_ *)0x0) {
              System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
              HashSet_1_System_Int32__AddIfNotPresent
                        (this_03,iVar1,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                         rgctx_data[0x15].method);
              if (bVar12) {
                if ((pMVar7->fields).OnTeamsUpdated != (MVTeamManager_OnTeamsUpdatedDelegate *)0x0)
                {
                  pMVar15 = (pMVar7->fields).OnTeamsUpdated;
                  (*(pMVar15->fields)._._.invoke_impl)
                            ((pMVar15->fields)._._.method_code,(pMVar15->fields)._._.method);
                }
                if ((pMVar7->fields).OnTeamAdded !=
                    (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)0x0) {
                  pEVar16 = (pMVar7->fields).OnTeamAdded;
                  this_04 = (TeamEventArgs *)FUN_?(TypeInfo__MV__WorldObject__TeamEventArgs)
                  ;
                  MVWorldObject.dll::MV::WorldObject::TeamEventArgs::TeamEventArgs__ctor
                            (this_04,key,(MethodInfo *)0x0);
                  (*(pEVar16->fields)._._.invoke_impl)
                            ((pEVar16->fields)._._.method_code,pMVar7,this_04,
                             (pEVar16->fields)._._.method);
                }
              }
              return;
            }
          }
        }
DAT_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVTeam WOTypeToTeamIndex(WorldObjectType) */

MVTeam__Enum
Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint_WOTypeToTeamIndex
          (WorldObjectType__Enum type,MethodInfo *method)

{
  if (type == WorldObjectType__Enum_SpawnPointRed) {
    return MVTeam__Enum_Red;
  }
  if (type == WorldObjectType__Enum_SpawnPointGreen) {
    return MVTeam__Enum_Green;
  }
  if (type == WorldObjectType__Enum_SpawnPointYellow) {
    return MVTeam__Enum_Yellow;
  }
  if (type != WorldObjectType__Enum_SpawnPointBlue) {
    return MVTeam__Enum_None;
  }
  return MVTeam__Enum_Blue;
}


/* MVSpawnPoint(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint__ctor
               (MVSpawnPoint *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *prefabObject,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  MVLogicObject::MVLogicObject__ctor
            ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  (this->fields)._._.interactionFlags = 0xa101;
  return;
}


/* Boolean get_SpawnPointOnlyFirstDeath() */

bool Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint_get_SpawnPointOnlyFirstDeath
               (MVSpawnPoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<bool>__Nullable_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<bool>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<bool>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_onlyFirstSpawn);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).spawnPointOnlyFirstDeath.hasValue == 0) {
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(this->fields)._._._.data;
    NStackX_8.value = 0;
    if (this_00 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_onlyFirstSpawn,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar3) {
      this_01 = (this->fields)._._._.data;
      if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_01,(Object *)StringLiteral_onlyFirstSpawn,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar4 != (Object *)0x0) {
        pOVar5 = (Object *)0x0;
        if (pOVar4->klass == pORam0000000182dbdd78) {
          pOVar5 = pOVar4;
        }
        if (pOVar5 != (Object *)0x0) {
          if ((pOVar4->klass->_0).element_class != (pORam0000000182dbdd78->_0).element_class) {
            FUN_?(pOVar4,pORam0000000182dbdd78);
            pcVar1 = (code *)swi(3);
            bVar2 = (*pcVar1)();
            return bVar2;
          }
          NStackX_8.value = *(bool *)&pOVar4[1].klass;
        }
      }
    }
    NStackX_8.hasValue = 1;
    (this->fields).spawnPointOnlyFirstDeath = NStackX_8;
  }
  return (this->fields).spawnPointOnlyFirstDeath.value;
}

