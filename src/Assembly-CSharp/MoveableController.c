
/* Void AddMovable(MVMovable, Boolean) */

void Assembly-CSharp.dll::MoveableController::MoveableController_AddMovable
               (MoveableController *this,MVMovable *movable,bool isInventoryPreviewMovable,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).Velocities;
  if (movable != (MVMovable *)0x0) {
    pSVar1 = DayNightCycle::DayNightCycle_get_CurrentStarsParam
                       ((DayNightCycle *)movable,(MethodInfo *)0x0);
    pVVar2 = MVMovable::MVMovable_get_Velocity
                       ((Vector3 *)&stack0xfffffff0,movable,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]::
      Dictionary_2_System_Int32_UnityEngine_Vector3__Add
                (this_00,(int32_t)pSVar1,*pVVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Add_int__UnityEngine__Vector3_
                );
      pDVar3 = (this->fields).MoveControllers;
      pSVar1 = DayNightCycle::DayNightCycle_get_CurrentStarsParam
                         ((DayNightCycle *)movable,(MethodInfo *)0x0);
      if (pDVar3 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(int32_t)pSVar1,
                   (Object *)movable,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Add_int__MVMovable_
                  );
        isInventoryPreviewMovable = (bool)pSVar1;
        if (isInventoryPreviewMovable == 0) {
          pIVar4 = WindTurbine::WindTurbine_get_InputSignalReceiver
                             ((WindTurbine *)movable,(MethodInfo *)0x0);
          if (pIVar4 != (IInputSignalReceiver *)0x0) {
            pDVar3 = (this->fields).CubeModelMovableMap;
            this_01 = (Collection_1_VoxelHit_ *)
                      WindTurbine::WindTurbine_get_InputSignalReceiver
                                ((WindTurbine *)movable,(MethodInfo *)0x0);
            if (this_01 != (Collection_1_VoxelHit_ *)0x0) {
              key = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
              if (pDVar3 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Add
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(int32_t)key,
                           (Object *)movable,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Add_int__MVMovable_
                          );
                return;
              }
            }
            goto code_?;
          }
          mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
          Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)movable,(MethodInfo *)0x0);
          arg1 = (Object *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          message = mscorlib.dll::System::String::String_Concat_1
                              ((Object *)StringLiteral__MoveableController__trying_add_,arg1,
                               (Object *)StringLiteral__without_a_cube_model,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)message,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Quaternion GetRotationQuat(Int32) */

Quaternion *
Assembly-CSharp.dll::MoveableController::MoveableController_GetRotationQuat
          (Quaternion *__return_storage_ptr__,MoveableController *this,int32_t movableGameObjectID,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).MoveControllers;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
    this_00 = (WindTurbine *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                        (pDVar1,movableGameObjectID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                        );
    if (this_00 != (WindTurbine *)0x0) {
      pIVar2 = WindTurbine::WindTurbine_get_InputSignalReceiver(this_00,(MethodInfo *)0x0);
      if (pIVar2 == (IInputSignalReceiver *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?();
        }
        pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                           ((Quaternion *)&stack0xffffffbc,(MethodInfo *)0x0);
        fVar4 = pQVar3->y;
        fVar5 = pQVar3->z;
        fVar6 = pQVar3->w;
        __return_storage_ptr__->x = pQVar3->x;
        __return_storage_ptr__->y = fVar4;
        __return_storage_ptr__->z = fVar5;
        __return_storage_ptr__->w = fVar6;
        return __return_storage_ptr__;
      }
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).MoveControllers;
      if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        this_01 = (PrefabPool *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (pDVar1,movableGameObjectID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                            );
        if (this_01 != (PrefabPool *)0x0) {
          this_02 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_01,(MethodInfo *)0x0);
          if (this_02 != (MVPointLightObject *)0x0) {
            pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                               ((Quaternion *)&stack0xffffffbc,(Transform *)this_02,
                                (MethodInfo *)0x0);
            fVar4 = pQVar3->x;
            fVar5 = pQVar3->y;
            fVar6 = pQVar3->z;
            fVar7 = pQVar3->w;
            pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)(this->fields).MoveControllers;
            if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)0x0) {
              pMVar8 = (MVMovable *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                       Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                 (pDVar1,movableGameObjectID,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                                 );
              if (pMVar8 != (MVMovable *)0x0) {
                pVVar9 = MVMovable::MVMovable_get_AngularVelocity
                                   ((Vector3 *)&stack0xffffffd0,pMVar8,(MethodInfo *)0x0);
                uStack_10._0_4_ = pVVar9->x;
                uStack_10._4_4_ = pVVar9->y;
                fVar11 = pVVar9->z;
                if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000
                     ) != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                  uStack_10 = CONCAT44(TypeInfo__UnityEngine__Quaternion,&UNK_?);
                  func_?();
                }
                rotation.y = fVar5;
                rotation.x = fVar4;
                rotation.z = fVar6;
                rotation.w = fVar7;
                point.z = fVar11;
                point.x = (float)(int)uStack_10;
                point.y = (float)(int)((ulonglong)uStack_10 >> 0x20);
                UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffffd0,rotation,point,(MethodInfo *)0x0);
                pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)(this->fields).MoveControllers;
                if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                               *)0x0) {
                  pMVar8 = (MVMovable *)
                           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                     (pDVar1,movableGameObjectID,
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                                     );
                  if (pMVar8 != (MVMovable *)0x0) {
                    MVMovable::MVMovable_get_AngularVelocity
                              ((Vector3 *)&stack0xffffffd0,pMVar8,(MethodInfo *)0x0);
                    fVar12 = (float10)func_?();
                    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                                      ((MethodInfo *)0x0);
                    pVVar9 = (Vector3 *)func_?();
                    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                             Quaternion_AngleAxis
                                       ((Quaternion *)&stack0xffffffbc,
                                        (float)fVar12 * _UNK_? * fVar4,*pVVar9,
                                        (MethodInfo *)0x0);
                    fVar4 = pQVar3->x;
                    fVar5 = pQVar3->y;
                    fVar6 = pQVar3->z;
                    fVar7 = pQVar3->w;
                    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                              *)(this->fields).MoveControllers;
                    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                   *)0x0) {
                      pMVar8 = (MVMovable *)
                               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Int32,UnityEngine::Experimental::TerrainAPI::
                               TerrainUtility+TerrainMap]::
                               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                         (pDVar1,movableGameObjectID,
                                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                                         );
                      if (pMVar8 != (MVMovable *)0x0) {
                        pMVar8 = MVMovable::MVMovable_get_ParentMover(pMVar8,(MethodInfo *)0x0);
                        if (pMVar8 == (MVMovable *)0x0) {
                          __return_storage_ptr__->x = fVar4;
                          __return_storage_ptr__->y = fVar5;
                          __return_storage_ptr__->z = fVar6;
                          __return_storage_ptr__->w = fVar7;
                          return __return_storage_ptr__;
                        }
                        pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                  *)(this->fields).MoveControllers;
                        if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                       *)0x0) {
                          pMVar8 = (MVMovable *)
                                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Int32,UnityEngine::Experimental::TerrainAPI::
                                   TerrainUtility+TerrainMap]::
                                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                             (pDVar1,movableGameObjectID,
                                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                                             );
                          if (pMVar8 != (MVMovable *)0x0) {
                            pMVar8 = MVMovable::MVMovable_get_ParentMover(pMVar8,(MethodInfo *)0x0);
                            if (pMVar8 != (MVMovable *)0x0) {
                              movableGameObjectID_00 =
                                   DayNightCycle::DayNightCycle_get_CurrentStarsParam
                                             ((DayNightCycle *)pMVar8,(MethodInfo *)0x0);
                              pQVar3 = MoveableController_GetRotationQuat
                                                 ((Quaternion *)&stack0xffffffbc,this,
                                                  (int32_t)movableGameObjectID_00,(MethodInfo *)0x0)
                              ;
                              fVar11 = pQVar3->w;
                              if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.
                                          methodPtr & 0x2000000) != 0) &&
                                 ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                                func_?();
                              }
                              lhs.y = fVar7;
                              lhs.x = fVar6;
                              lhs.z = 0.0;
                              lhs.w = fVar11;
                              rhs.y = fVar5;
                              rhs.x = fVar4;
                              rhs.z = fVar6;
                              rhs.w = fVar7;
                              pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                       Quaternion_op_Multiply
                                                 ((Quaternion *)&stack0xffffffbc,lhs,rhs,
                                                  (MethodInfo *)0x0);
                              fVar4 = pQVar3->y;
                              fVar5 = pQVar3->z;
                              fVar6 = pQVar3->w;
                              __return_storage_ptr__->x = pQVar3->x;
                              __return_storage_ptr__->y = fVar4;
                              __return_storage_ptr__->z = fVar5;
                              __return_storage_ptr__->w = fVar6;
                              return __return_storage_ptr__;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pQVar3 = (Quaternion *)(*pcVar13)();
  return pQVar3;
}


/* Vector3 GetVel(Int32, Vector3) */

Vector3 * Assembly-CSharp.dll::MoveableController::MoveableController_GetVel
                    (Vector3 *__return_storage_ptr__,MoveableController *this,
                    int32_t movableGameObjectID,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVMovable *)0x0;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).MoveControllers;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
              (this_00,movableGameObjectID,(TerrainUtility_TerrainMap **)&pMStack_1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
              );
    if (pMStack_1 == (MVMovable *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                         ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
code_?:
      fVar3 = pVVar2->y;
      fVar4 = pVVar2->z;
      __return_storage_ptr__->x = pVVar2->x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
    pIVar5 = WindTurbine::WindTurbine_get_InputSignalReceiver
                       ((WindTurbine *)pMStack_1,(MethodInfo *)0x0);
    if (pIVar5 != (IInputSignalReceiver *)0x0) {
      puVar6 = (undefined8 *)(**(code **)&pIVar5->klass[1]._1.nested_type_count)();
      uStack_7 = *puVar6;
      fVar4 = *(float *)(puVar6 + 1);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      b.z = fVar4;
      b.x = (float)(undefined4)uStack_7;
      b.y = (float)uStack_7._4_4_;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         (&VStack_8,position,b,(MethodInfo *)0x0);
      uStack_7._0_4_ = pVVar2->x;
      uStack_7._4_4_ = pVVar2->y;
      fVar4 = pVVar2->z;
      pQVar9 = MoveableController_GetRotationQuat
                         ((Quaternion *)&stack0xffffffcc,this,movableGameObjectID,(MethodInfo *)0x0)
      ;
      fVar3 = pQVar9->x;
      fVar10 = pQVar9->y;
      fVar11 = pQVar9->z;
      fVar12 = pQVar9->w;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
      }
      rotation.y = fVar10;
      rotation.x = fVar3;
      rotation.z = fVar11;
      rotation.w = fVar12;
      point.z = fVar4;
      point.x = (float)(undefined4)uStack_7;
      point.y = (float)uStack_7._4_4_;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         (&VStack_8,rotation,point,(MethodInfo *)0x0);
      uStack_13._0_4_ = pVVar2->x;
      uStack_13._4_4_ = pVVar2->y;
      fVar3 = pVVar2->z;
      this_01 = (this->fields).Velocities;
      if (this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        pVVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__get_Item
                           ((Vector3 *)&stack0xffffffd0,this_01,movableGameObjectID,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__get_Item_int_
                           );
        VStack_8.y = pVVar2->x;
        VStack_8.z = pVVar2->y;
        fVar10 = pVVar2->z;
        a.z = fVar3;
        a.x = (float)(undefined4)uStack_13;
        a.y = (float)uStack_13._4_4_;
        b_00.z = fVar4;
        b_00.x = (float)(undefined4)uStack_7;
        b_00.y = (float)uStack_7._4_4_;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           ((Vector3 *)&stack0xffffffd0,a,b_00,(MethodInfo *)0x0);
        a_00.z = fVar10;
        a_00.x = VStack_8.y;
        a_00.y = VStack_8.z;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xffffffd0,a_00,*pVVar2,(MethodInfo *)0x0);
        uStack_7._0_4_ = pVVar2->x;
        uStack_7._4_4_ = pVVar2->y;
        fVar4 = pVVar2->z;
        if (pMStack_1 != (MVMovable *)0x0) {
          pMVar14 = MVMovable::MVMovable_get_ParentMover(pMStack_1,(MethodInfo *)0x0);
          if (pMVar14 == (MVMovable *)0x0) {
            __return_storage_ptr__->x = (float)(undefined4)uStack_7;
            __return_storage_ptr__->y = (float)uStack_7._4_4_;
            __return_storage_ptr__->z = fVar4;
            return __return_storage_ptr__;
          }
          if (pMStack_1 != (MVMovable *)0x0) {
            pMVar14 = MVMovable::MVMovable_get_ParentMover(pMStack_1,(MethodInfo *)0x0);
            if (pMVar14 != (MVMovable *)0x0) {
              movableGameObjectID_00 =
                   MVMovable::MVMovable_get_CubeModelID(pMVar14,(MethodInfo *)0x0);
              if (pMStack_1 != (MVMovable *)0x0) {
                pIVar5 = WindTurbine::WindTurbine_get_InputSignalReceiver
                                   ((WindTurbine *)pMStack_1,(MethodInfo *)0x0);
                if (pIVar5 != (IInputSignalReceiver *)0x0) {
                  pIVar15 = pIVar5->klass;
                  uVar16._0_2_ = pIVar15[1]._1.interfaces_count;
                  uVar16._2_2_ = pIVar15[1]._1.interface_offsets_count;
                  pVVar2 = (Vector3 *)
                           (**(code **)&pIVar15[1]._1.nested_type_count)
                                     (&stack0xffffffd0,pIVar5,uVar16);
                  pVVar2 = MoveableController_GetVel
                                     ((Vector3 *)&stack0xffffffd0,this,movableGameObjectID_00,
                                      *pVVar2,(MethodInfo *)0x0);
                  VStack_8.y = pVVar2->x;
                  VStack_8.z = pVVar2->y;
                  fVar3 = pVVar2->z;
                  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                    func_?();
                  }
                  a_01.z = fVar4;
                  a_01.x = (float)(undefined4)uStack_7;
                  a_01.y = (float)uStack_7._4_4_;
                  b_01.z = fVar3;
                  b_01.x = VStack_8.y;
                  b_01.y = VStack_8.z;
                  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                     ((Vector3 *)&stack0xffffffd0,a_01,b_01,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar17 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar17)();
  return pVVar2;
}


/* Void RemoveMovable(MVMovable) */

void Assembly-CSharp.dll::MoveableController::MoveableController_RemoveMovable
               (MoveableController *this,MVMovable *movable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).MoveControllers;
  if ((movable != (MVMovable *)0x0) &&
     (pSVar2 = DayNightCycle::DayNightCycle_get_CurrentStarsParam
                         ((DayNightCycle *)movable,(MethodInfo *)0x0),
     pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
              (pDVar1,(int32_t)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Remove_int_);
    this_00 = (this->fields).Velocities;
    pSVar2 = DayNightCycle::DayNightCycle_get_CurrentStarsParam
                       ((DayNightCycle *)movable,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]::
      Dictionary_2_System_Int32_UnityEngine_Vector3__Remove
                (this_00,(int32_t)pSVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Remove_int_
                );
      pIVar3 = WindTurbine::WindTurbine_get_InputSignalReceiver
                         ((WindTurbine *)movable,(MethodInfo *)0x0);
      if (pIVar3 == (IInputSignalReceiver *)0x0) {
        return;
      }
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).CubeModelMovableMap;
      this_01 = (Collection_1_VoxelHit_ *)
                WindTurbine::WindTurbine_get_InputSignalReceiver
                          ((WindTurbine *)movable,(MethodInfo *)0x0);
      if ((this_01 != (Collection_1_VoxelHit_ *)0x0) &&
         (key = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0),
         pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (pDVar1,(int32_t)key,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Remove_int_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ResetMoveables() */

void Assembly-CSharp.dll::MoveableController::MoveableController_ResetMoveables
               (MoveableController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  this_00 = (this->fields).MoveControllers;
  if ((this_00 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) &&
     (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                          ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Values__
                          ),
     this_01 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                *)&stack0xffffffbc,this_01,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovable>__GetEnumerator__
              );
    uStack_1 = 0;
    while( true ) {
      cVar4 = func_?();
      if (cVar4 == '\0') {
        uStack_1 = 0xffffffff;
        func_?();
        MoveableController_SyncTimeToServer(this,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      piVar5 = (int *)func_?();
      if (piVar5 == (int *)0x0) break;
      (**(code **)(*piVar5 + 0x150))(piVar5,*(undefined4 *)(*piVar5 + 0x154));
    }
  }
  func_?(0);
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SyncTimeToServer() */

void Assembly-CSharp.dll::MoveableController::MoveableController_SyncTimeToServer
               (MoveableController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (this_01 = (PhotonPeer *)
                AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                          ((AvatarUIHandlerRemote *)this_00,(MethodInfo *)0x0),
     this_01 != (PhotonPeer *)0x0)) {
    Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::
    PhotonPeer_get_ServerTimeInMilliSeconds(this_01,(MethodInfo *)0x0);
    fVar1 = (float10)func_?();
    _UNK_? = (float)fVar1;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::MoveableController::MoveableController_UpdateControllerFixedUpdate
               (MoveableController *this,MethodInfo *method)

{
  MoveableController_UpdateMoveables(this,1.0,(MethodInfo *)0x0);
  return;
}


/* Void UpdateMoveable(Int32, Single, Int32) */

void Assembly-CSharp.dll::MoveableController::MoveableController_UpdateMoveable
               (MoveableController *this,int32_t movableGameObjectID,float directionFactor,
               int32_t breakid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).MoveControllers;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    this_01 = (MVMovable *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                        (this_00,movableGameObjectID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                        );
    if (this_01 != (MVMovable *)0x0) {
      MVMovable::MVMovable_UpdateMoverSubTree(this_01,directionFactor,breakid,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateMoveables(Single) */

void Assembly-CSharp.dll::MoveableController::MoveableController_UpdateMoveables
               (MoveableController *this,float directionFactor,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  fVar4 = (this->fields).time;
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  source = (this->fields).MoveControllers;
  (this->fields).time = fVar5 + fVar4;
  if (TypeInfo__MoveableController->static_fields->__f__am_cache0 ==
      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__MoveableController___UpdateMoveables_m__0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
               ,
               MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>__Func_System__Object__void__
              );
    TypeInfo__MoveableController->static_fields->__f__am_cache0 =
         (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean_ *)this_00
    ;
  }
  pIVar6 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                     ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source,
                      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                       *)TypeInfo__MoveableController->static_fields->__f__am_cache0,
                      System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                     );
  if (pIVar6 != (IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)0x0) {
    piVar7 = (int *)func_?();
    uStack_1 = 0;
    while (piVar7 != (int *)0x0) {
      cVar8 = func_?();
      if (cVar8 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar7 != (int *)0x0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      uVar9 = 0;
      uVar10 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar10 != 0) {
        iVar11 = *(int *)(*piVar7 + 0x58);
        do {
          if (*(IEnumerator_1_KeyValuePair_2_System_Int32_MVMovable___Class **)
               (iVar11 + (uint)uVar9 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>
             ) {
            puVar12 = (undefined4 *)(*piVar7 + (*(int *)(iVar11 + 4 + (uint)uVar9 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar10);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      (*(code *)*puVar12)();
      this_01 = (MVMovable *)func_?();
      if (this_01 == (MVMovable *)0x0) break;
      MVMovable::MVMovable_UpdateMoverSubTree(this_01,directionFactor,0,(MethodInfo *)0x0);
    }
  }
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateSingleMoveableInChain(Int32, Single) */

void Assembly-CSharp.dll::MoveableController::MoveableController_UpdateSingleMoveableInChain
               (MoveableController *this,int32_t movableGameObjectID,float directionFactor,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).MoveControllers;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    this_01 = (MVMovable *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                        (this_00,movableGameObjectID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                        );
    if (this_01 != (MVMovable *)0x0) {
      MVMovable::MVMovable_UpdateMoverSubTree
                (this_01,directionFactor,movableGameObjectID,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean <UpdateMoveables>m__0(KeyValuePair`2[System.Int32,MVMovable]) */

bool Assembly-CSharp.dll::MoveableController::MoveableController__UpdateMoveables_m__0
               (KeyValuePair_2_System_Int32_MVMovable_ x,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (MVMovable *)
         func_?(&x,
                         MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVMovable>__get_Value__
                        );
  if (this != (MVMovable *)0x0) {
    bVar1 = MVMovable::MVMovable_get_IsRoot(this,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* MoveableController() */

void Assembly-CSharp.dll::MoveableController::MoveableController__ctor
               (MoveableController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Dictionary__
            );
  (this->fields).Velocities = this_00;
  pDVar1 = (Dictionary_2_System_Int32_MVMovable_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVMovable>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Dictionary__);
  (this->fields).MoveControllers = pDVar1;
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<int,_MVMovable>;
  pDVar1 = (Dictionary_2_System_Int32_MVMovable_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Dictionary__);
  (this->fields).CubeModelMovableMap = pDVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  MoveableController_SyncTimeToServer(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?();
  }
  UpdateController::UpdateController_AddFixedUpdateObject
            ((IUpdatecontrollerSubscriberFixedUpdate *)this,UpdatePriority__Enum_PRE_UPDATEBUCKET_20
             ,1,(MethodInfo *)0x0);
  return;
}

