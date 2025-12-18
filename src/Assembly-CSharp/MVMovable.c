
/* Void AddMovableChild(MVMovable) */

void Assembly-CSharp.dll::MVMovable::MVMovable_AddMovableChild
               (MVMovable *this,MVMovable *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMovable>__Add_MVMovable_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<MVMovable>__Add_MVMovable_;
  pLVar2 = (this->fields).MoveableChildren;
  if (pLVar2 != (List_1_MVMovable_ *)0x0) {
    piVar3 = &(pLVar2->fields)._version;
    *piVar3 = *piVar3 + 1;
    pMVar4 = (pLVar2->fields)._items;
    if (pMVar4 != (MVMovable__Array *)0x0) {
      uVar5 = (pLVar2->fields)._size;
      if (uVar5 < (uint)pMVar4->max_length) {
        (pLVar2->fields)._size = uVar5 + 1;
      }
      else {
        uVar5 = (pLVar2->fields)._size;
        FUN_?(pLVar2,uVar5 + 1,
                      (pMVar1->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy
                      ,pMVar4,unaff_RDI);
        pMVar4 = (pLVar2->fields)._items;
        (pLVar2->fields)._size = uVar5 + 1;
        if (pMVar4 == (MVMovable__Array *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((uint)pMVar4->max_length <= uVar5) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = iRam_? != 0;
      pMVar4->vector[(int)uVar5] = child;
      if (bVar7) {
        uVar5 = (uint)((ulonglong)(pMVar4->vector + (int)uVar5) >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVMovable::MVMovable_Destroy(MVMovable *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
     (pMVar2 = (pMVar1->fields)._MoveableController_k__BackingField,
     pMVar2 != (MoveableController *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Remove_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Remove_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this != (MVMovable *)0x0) &&
       (pDVar3 = (pMVar2->fields).MoveControllers,
       pDVar3 != (Dictionary_2_System_Int32_MVMovable_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(this->fields)._._._.goId,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Remove_int_);
      this_00 = (pMVar2->fields).Velocities;
      if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]
        ::Dictionary_2_System_Int32_UnityEngine_Vector3__Remove
                  (this_00,(this->fields)._._._.goId,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Remove_int_
                  );
        if ((this->fields)._CubeModel_k__BackingField != (MVCubeModelInstance *)0x0) {
          pDVar3 = (pMVar2->fields).CubeModelMovableMap;
          if (pDVar3 == (Dictionary_2_System_Int32_MVMovable_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,
                     (((this->fields)._CubeModel_k__BackingField)->fields)._._._.id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Remove_int_
                    );
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar4 = (this->fields)._._._.gameObject;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar4 != (GameObject *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pGVar4->fields)._.m_CachedPtr != (void *)0x0) {
            pGVar4 = (this->fields)._._._.gameObject;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                      ((Object_1 *)pGVar4,0.0,(MethodInfo *)0x0);
          }
        }
        if ((this->fields)._._._.initializedFromInventory != 0) {
          return;
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
          pRVar7 = (pMVar6->fields).runtimeVariableNetworkManager;
          item = (this->fields)._._._._.id;
          if (pRVar7 != (RuntimeVariableNetworkManager *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_01 = (HashSet_1_System_Int32Enum_ *)(pRVar7->fields).runtimeDataVariables;
            if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
              bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                      HashSet_1_System_Int32Enum__Contains
                                (this_01,item,
                                 MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                );
              if (bVar8 != 0) {
                pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar6 == (MVNetworkGame *)0x0) ||
                   (pRVar7 = (pMVar6->fields).runtimeVariableNetworkManager,
                   pRVar7 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
                RuntimeVariableNetworkManager::
                RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                          (pRVar7,(this->fields)._._._._.id,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
DAT_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* String GetParamPath(String) */

String * Assembly-CSharp.dll::MVMovable::MVMovable_GetParamPath
                   (MVMovable *this,String *param,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (param == (String *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  pSVar3 = (String *)
           (*(param->klass->vtable).ToString.methodPtr)
                     (param,(param->klass->vtable).ToString.method);
  pSVar2 = StringLiteral_BlueprintData_;
  if ((StringLiteral_BlueprintData_ == (String *)0x0) ||
     ((StringLiteral_BlueprintData_->fields)._stringLength == 0)) {
    if ((pSVar3 != (String *)0x0) && ((pSVar3->fields)._stringLength != 0)) {
      return pSVar3;
    }
    return (String *)**(undefined8 **)(lRam_? + 0xb8);
  }
  if ((pSVar3 == (String *)0x0) || ((pSVar3->fields)._stringLength == 0)) {
    return StringLiteral_BlueprintData_;
  }
  iVar4 = (StringLiteral_BlueprintData_->fields)._stringLength;
  pSVar5 = (String *)FUN_?((pSVar3->fields)._stringLength + iVar4,pSVar3,0);
  if (pSVar5 == (String *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  if ((pSVar2->fields)._stringLength <= (pSVar5->fields)._stringLength) {
    puVar6 = &(pSVar5->fields)._firstChar;
    puVar7 = &(pSVar2->fields)._firstChar;
    uVar8 = (pSVar2->fields)._stringLength * 2;
    if (((ulonglong)((longlong)puVar6 - (longlong)puVar7) < (ulonglong)uVar8) ||
       ((ulonglong)((longlong)puVar7 - (longlong)puVar6) < (ulonglong)uVar8)) {
      FUN_?();
    }
    else {
      mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                ((uint8_t *)puVar6,(uint8_t *)puVar7,uVar8,(MethodInfo *)0x0);
    }
    if ((pSVar3->fields)._stringLength <= (pSVar5->fields)._stringLength - iVar4) {
      puVar7 = &(pSVar5->fields)._firstChar + iVar4;
      puVar6 = &(pSVar3->fields)._firstChar;
      uVar8 = (pSVar3->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar7 - (longlong)puVar6) < (ulonglong)uVar8) ||
         ((ulonglong)((longlong)puVar6 - (longlong)puVar7) < (ulonglong)uVar8)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar7,(uint8_t *)puVar6,uVar8,(MethodInfo *)0x0);
      }
      return pSVar5;
    }
    uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar10 = (IndexOutOfRangeException *)func_?(uVar9);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar10,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                               );
    FUN_?(pIVar10,uVar9);
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  pIVar10 = (IndexOutOfRangeException *)func_?(uVar9);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
            (pIVar10,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                             );
  FUN_?(pIVar10,uVar9);
  pcVar1 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar1)();
  return pSVar2;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVMovable::MVMovable_Initialize(MVMovable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MovableVisualization_MethodInfo__UnityEngine__GameObject__AddComponent<MovableVisualization>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  MVMovable_InitializeCommon(this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
     (this_00 = (pMVar1->fields)._MoveableController_k__BackingField,
     this_00 != (MoveableController *)0x0)) {
    MoveableController::MoveableController_AddMovable(this_00,this,0,(MethodInfo *)0x0);
    this_01 = (this->fields)._._._.gameObject;
    if (this_01 != (GameObject *)0x0) {
      pMVar2 = (MovableVisualization *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         (this_01,
                          MovableVisualization_MethodInfo__UnityEngine__GameObject__AddComponent<MovableVisualization>__
                         );
      bVar3 = iRam_? != 0;
      (this->fields).movableVisualization = pMVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).movableVisualization >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      pMVar2 = (this->fields).movableVisualization;
      if (pMVar2 != (MovableVisualization *)0x0) {
        MovableVisualization::MovableVisualization_Init
                  (pMVar2,(MVCubeModelBase *)(this->fields)._CubeModel_k__BackingField,
                   (MethodInfo *)0x0);
        pMVar8 = (this->fields)._CubeModel_k__BackingField;
        if (pMVar8 != (MVCubeModelInstance *)0x0) {
          (*(pMVar8->klass->vtable).set_Visible.methodPtr)
                    (pMVar8,0,(pMVar8->klass->vtable).set_Visible.method);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(this->klass->vtable).set_Visible.methodPtr)
                    (this,(ulonglong)(this->fields).isVisible,
                     (this->klass->vtable).set_Visible.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVMovable::MVMovable_InitializeCommon(MVMovable *this,MethodInfo *method)

{
  MVMovable_ReadWOData(this,(MethodInfo *)0x0);
  if ((this->fields)._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0) {
    return;
  }
  pMVar1 = (this->fields)._CubeModel_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = pMVar1->klass;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  QStack_4.x = (pVVar3->zeroVector).x;
  QStack_4.y = (pVVar3->zeroVector).y;
  QStack_4.z = (pVVar3->zeroVector).z;
  (*(pMVar2->vtable).set_Position.methodPtr)(pMVar1,&QStack_4,(pMVar2->vtable).set_Position.method)
  ;
  pMVar1 = (this->fields)._CubeModel_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    QStack_4.x = (pQVar5->identityQuaternion).x;
    QStack_4.y = (pQVar5->identityQuaternion).y;
    QStack_4.z = (pQVar5->identityQuaternion).z;
    QStack_4.w = (pQVar5->identityQuaternion).w;
    (*(pMVar1->klass->vtable).set_Rotation.methodPtr)(pMVar1,&QStack_4);
    pMVar1 = (this->fields)._CubeModel_k__BackingField;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      pQVar6 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                         (&QStack_4,(MVWorldObjectClient *)pMVar1,(MethodInfo *)0x0);
      fVar7 = pQVar6->y;
      fVar8 = pQVar6->z;
      fVar9 = pQVar6->w;
      (this->fields).orgRotation.x = pQVar6->x;
      (this->fields).orgRotation.y = fVar7;
      (this->fields).orgRotation.z = fVar8;
      (this->fields).orgRotation.w = fVar9;
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVMovable::MVMovable_InitializeInventory
               (MVMovable *this,MethodInfo *method)

{
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  MVMovable_InitializeCommon(this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
     (pMVar2 = (pMVar1->fields)._MoveableController_k__BackingField,
     pMVar2 != (MoveableController *)0x0)) {
    uVar3 = 0;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,this,1,0);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Add_int__UnityEngine__Vector3_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Add_int__MVMovable_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral__without_a_cube_model);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral__MoveableController__trying_add_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this != (MVMovable *)0x0) &&
       (this_00 = (pMVar2->fields).Velocities,
       this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
      VStack_4.z = (this->fields).velocity.z;
      VStack_4.x = (this->fields).velocity.x;
      VStack_4.y = (this->fields).velocity.y;
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]::
      Dictionary_2_System_Int32_UnityEngine_Vector3__TryInsert
                (this_00,(this->fields)._._._.goId,&VStack_4,(InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Add_int__UnityEngine__Vector3_
                 ->klass->rgctx_data[0x22].method);
      this_01 = (pMVar2->fields).MoveControllers;
      if (this_01 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,(this->fields)._._._.goId,
                   (Object *)this,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2)
                   ,MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Add_int__MVMovable_
                    ->klass->rgctx_data[0x22].method);
        return;
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Move(Single, Int32) */

void Assembly-CSharp.dll::MVMovable::MVMovable_Move
               (MVMovable *this,float directionFactor,int32_t breakid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMovable>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0) {
    return;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar1 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar2 = (pMVar1->fields)._MoveableController_k__BackingField,
     pMVar2 == (MoveableController *)0x0)) goto code_?;
  fVar3 = (pMVar2->fields).time;
  if ((this->fields).pausedMovement == 0) {
    if (directionFactor < 0.0) {
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      fVar3 = fVar3 - fVar4;
    }
    (this->fields).linearTime = 0.0;
    (this->fields).fraction = 0.0;
    if ((this->fields).timeToEnd != 0.0) {
      fVar4 = (float)FUN_?();
      (this->fields).linearTime = fVar4;
      fVar4 = fVar4 / (this->fields).timeToEnd;
      (this->fields).fraction = fVar4;
      if (_UNK_? < (this->fields).timeToEnd) {
        (this->fields).fraction = TypeRef__System__Activator__T._0_4_ - fVar4;
      }
    }
  }
  else {
    (this->fields).linearTime = (this->fields).fraction * (this->fields).timeToEnd;
  }
  puVar5 = (undefined8 *)
            (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                      (&VStack_6,this,(this->klass->vtable).get_WorldPosition_1.method);
  uStack_7 = *puVar5;
  fVar4 = *(float *)(puVar5 + 1);
  if ((this->fields).parentMover != (MVMovable *)0x0) {
    pMVar8 = (((this->fields).parentMover)->fields)._CubeModel_k__BackingField;
    if (pMVar8 == (MVCubeModelInstance *)0x0) goto code_?;
    puVar5 = (undefined8 *)(*(pMVar8->klass->vtable).get_WorldPosition_1.methodPtr)(&VStack_9);
    VStack_6._0_8_ = *puVar5;
    fVar4 = *(float *)(puVar5 + 1);
    pMVar10 = (this->fields).parentMover;
    if ((pMVar10 == (MVMovable *)0x0) ||
       (pMVar8 = (pMVar10->fields)._CubeModel_k__BackingField, pMVar8 == (MVCubeModelInstance *)0x0))
    goto code_?;
    pQVar11 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                        ((Quaternion *)auStack_12,(MVWorldObjectClient *)pMVar8,(MethodInfo *)0x0);
    pLVar13 = *(List_1_MVMovable_ **)pQVar11;
    puVar14 = *(undefined1 **)&pQVar11->z;
    puVar5 = (undefined8 *)
              (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                        (auStack_15,this,(this->klass->vtable).get_WorldPosition_1.method);
    VStack_9._0_8_ = *puVar5;
    fVar16 = *(float *)(puVar5 + 1);
    pMVar10 = (this->fields).parentMover;
    if (pMVar10 == (MVMovable *)0x0) goto code_?;
    puVar5 = (undefined8 *)
              (*(pMVar10->klass->vtable).get_WorldPosition_1.methodPtr)
                        (auStack_15,pMVar10,(pMVar10->klass->vtable).get_WorldPosition_1.method);
    VStack_9.z = fVar16 - *(float *)(puVar5 + 1);
    VStack_9.y = VStack_9.y - (float)((ulonglong)*puVar5 >> 0x20);
    VStack_9.x = VStack_9.x - (float)*puVar5;
    auStack_12._0_8_ = pLVar13;
    auStack_12._8_8_ = puVar14;
    pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)auStack_15,(Quaternion *)auStack_12,&VStack_9,(MethodInfo *)0x0
                        );
    uVar18._0_4_ = pVVar17->x;
    uVar18._4_4_ = pVVar17->y;
    fVar4 = fVar4 + pVVar17->z;
    uStack_7 = CONCAT44(VStack_6.y + uVar18._4_4_,VStack_6.x + (float)uVar18);
    VStack_6._0_8_ = uVar18;
  }
  if (_UNK_? < (this->fields).timeToEnd) {
    if (*(int *)&(TypeInfo__MVMovable->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MVMovable);
    }
    TypeInfo__MVMovable->static_fields->direction = 1.0;
    pIVar19 = (this->klass->vtable).get_WorldVelocity.methodPtr;
    fVar16 = (this->fields).timeToEnd;
    pfVar20 = &(this->fields).linearTime;
    if (*pfVar20 <= fVar16 && fVar16 != *pfVar20) {
      puVar5 = (undefined8 *)
                (*pIVar19)(auStack_15,this,(this->klass->vtable).get_WorldVelocity.method);
      fVar16 = (this->fields).linearTime;
      VStack_6._0_8_ = *puVar5;
      fVar21 = *(float *)(puVar5 + 1);
      (this->fields).localPos.x = VStack_6.x * fVar16;
      (this->fields).localPos.y = VStack_6.y * fVar16;
      (this->fields).localPos.z = fVar21 * fVar16;
    }
    else {
      puVar5 = (undefined8 *)(*pIVar19)();
      fVar16 = (this->fields).timeToEnd;
      VStack_6._0_8_ = *puVar5;
      fVar21 = (fVar16 + fVar16) - (this->fields).linearTime;
      fVar16 = *(float *)(puVar5 + 1);
      (this->fields).localPos.x = fVar21 * VStack_6.x;
      (this->fields).localPos.y = fVar21 * VStack_6.y;
      (this->fields).localPos.z = fVar21 * fVar16;
      if (*(int *)&(TypeInfo__MVMovable->_1).field_0x1c == 0) {
        FUN_?();
      }
      TypeInfo__MVMovable->static_fields->direction = -1.0;
    }
    if (0.0 < directionFactor) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar1 == (MVWorldObjectClientManager *)0x0) ||
         (pMVar2 = (pMVar1->fields)._MoveableController_k__BackingField,
         pMVar2 == (MoveableController *)0x0)) goto code_?;
      this_00 = (pMVar2->fields).Velocities;
      key = (this->fields)._._._.goId;
      if (*(int *)&(TypeInfo__MVMovable->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MVMovable);
      }
      fVar16 = TypeInfo__MVMovable->static_fields->direction;
      plVar22 = (longlong *)
                (*(this->klass->vtable).get_WorldVelocity.methodPtr)
                          (auStack_15,this,(this->klass->vtable).get_WorldVelocity.method);
      pLVar13 = (List_1_MVMovable_ *)*plVar22;
      fVar21 = *(float *)(plVar22 + 1);
      fVar23 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      auStack_15 = (undefined1  [8])pLVar13;
      if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      VStack_6.y = fVar16 * (float)((ulonglong)pLVar13 >> 0x20) * directionFactor * fVar23;
      VStack_6.x = fVar16 * SUB84(pLVar13,0) * directionFactor * fVar23;
      VStack_6.z = fVar16 * fVar21 * directionFactor * fVar23;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]::
      Dictionary_2_System_Int32_UnityEngine_Vector3__TryInsert
                (this_00,key,&VStack_6,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar19 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                 ->klass->rgctx_data[0x22].method);
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar24 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar16 = (pVVar24->zeroVector).z;
    fVar21 = (pVVar24->zeroVector).y;
    (this->fields).localPos.x = (pVVar24->zeroVector).x;
    (this->fields).localPos.y = fVar21;
    (this->fields).localPos.z = fVar16;
  }
  pMVar8 = (this->fields)._CubeModel_k__BackingField;
  auStack_15 = *(undefined1 (*) [8])&(this->fields).localPos;
  uVar25._0_4_ = (float)uStack_7 + SUB84(auStack_15,0);
  if (pMVar8 != (MVCubeModelInstance *)0x0) {
    uVar25._4_4_ = uStack_7._4_4_ + (float)((ulonglong)auStack_15 >> 0x20);
    VStack_6._0_8_ = uVar25;
    VStack_6.z = fVar4 + (this->fields).localPos.z;
    (*(pMVar8->klass->vtable).set_WorldPosition.methodPtr)
              (pMVar8,&VStack_6,(pMVar8->klass->vtable).set_WorldPosition.method);
    fVar4 = (this->fields).angularSpeed;
    auStack_15._0_4_ = (this->fields).angularDirection.x;
    auStack_15._4_4_ = (this->fields).angularDirection.y;
    VStack_6.z = fVar4 * (this->fields).angularDirection.z * fVar3;
    VStack_6.y = fVar4 * (float)auStack_15._4_4_ * fVar3;
    VStack_6.x = fVar4 * (float)auStack_15._0_4_ * fVar3;
    FUN_?(&VStack_6);
    fVar3 = (this->fields).angularSpeed;
    auStack_15._0_4_ = (this->fields).angularDirection.x;
    auStack_15._4_4_ = (this->fields).angularDirection.y;
    fVar21 = fVar3 * (this->fields).angularDirection.z;
    fVar16 = fVar3 * (float)auStack_15._4_4_;
    fVar3 = fVar3 * (float)auStack_15._0_4_;
    VStack_6.y = fVar16;
    VStack_6.x = fVar3;
    VStack_6.z = fVar21;
    fVar4 = (float)FUN_?(&VStack_6);
    if (_UNK_? < fVar4) {
      VStack_6.z = fVar21 / fVar4;
      VStack_6.y = fVar16 / fVar4;
      VStack_6.x = fVar3 / fVar4;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar24 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_6.x = (pVVar24->zeroVector).x;
      VStack_6.y = (pVVar24->zeroVector).y;
      VStack_6.z = (pVVar24->zeroVector).z;
    }
    auStack_15 = (undefined1  [8])0x0;
    uStack_26 = (undefined1 *)0x0;
    pcVar27 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar27 = (code *)FUN_?(&UNK_?), pcVar27 == (code *)0x0)) {
      uVar18 = func_?(&UNK_?);
      FUN_?(uVar18,0);
code_?:
      FUN_?();
      FUN_?();
      pcVar27 = (code *)swi(3);
      (*pcVar27)();
      return;
    }
    pcRam_? = pcVar27;
    (*pcRam_?)();
    pQVar11 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                        ((Quaternion *)auStack_12,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
    fVar3 = pQVar11->x;
    fVar4 = pQVar11->y;
    fVar16 = pQVar11->z;
    fVar21 = pQVar11->w;
    if ((this->fields).parentMoverID != -1) {
      pMVar10 = (this->fields).parentMover;
      if ((pMVar10 == (MVMovable *)0x0) ||
         (pMVar8 = (pMVar10->fields)._CubeModel_k__BackingField, pMVar8 == (MVCubeModelInstance *)0x0
         )) goto code_?;
      pQVar11 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                          ((Quaternion *)auStack_12,(MVWorldObjectClient *)pMVar8,(MethodInfo *)0x0)
      ;
      fVar3 = pQVar11->x;
      fVar4 = pQVar11->y;
      fVar16 = pQVar11->z;
      fVar21 = pQVar11->w;
    }
    if ((this->fields).pausedMovement == 0) {
      pMVar8 = (this->fields)._CubeModel_k__BackingField;
      uVar28 = auStack_15._0_4_;
      uVar29 = auStack_15._4_4_;
      fVar23 = (float)auStack_15._4_4_ * fVar16;
      auStack_15._4_4_ =
           ((float)auStack_15._4_4_ * fVar21 + uStack_26._4_4_ * fVar4 +
           (float)auStack_15._0_4_ * fVar16) - (float)uStack_26 * fVar3;
      auStack_15._0_4_ =
           ((float)auStack_15._0_4_ * fVar21 + uStack_26._4_4_ * fVar3 + (float)uStack_26 * fVar4)
           - fVar23;
      uStack_26 = (undefined1 *)
                  CONCAT44(((uStack_26._4_4_ * fVar21 - (float)uVar28 * fVar3) -
                           (float)uVar29 * fVar4) - (float)uStack_26 * fVar16,
                           ((float)uStack_26 * fVar21 + uStack_26._4_4_ * fVar16 +
                           (float)uVar29 * fVar3) - (float)uVar28 * fVar4);
      if (pMVar8 == (MVCubeModelInstance *)0x0) goto code_?;
      auStack_12._0_8_ = auStack_15;
      auStack_12._8_8_ = uStack_26;
      MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                ((MVWorldObjectClient *)pMVar8,(Quaternion *)auStack_12,(MethodInfo *)0x0);
    }
    pMVar8 = (this->fields)._CubeModel_k__BackingField;
    if (pMVar8 != (MVCubeModelInstance *)0x0) {
      if (breakid != (pMVar8->fields)._._._.id) {
        auStack_30._0_8_ = (this->fields).MoveableChildren;
        if ((List_1_MVMovable_ *)auStack_30._0_8_ == (List_1_MVMovable_ *)0x0)
        goto code_?;
        if (iRam_? != 0) {
          uVar31 = (uint)((ulonglong)auStack_12 >> 0xc);
          uVar32 = (ulonglong)((uVar31 & 0x1fffff) >> 6);
          do {
            uVar33 = *(ulonglong *)(uVar32 * 8 + 0xADDR);
            puVar34 = (ulonglong *)(uVar32 * 8 + 0xADDR);
            LOCK();
            bVar35 = uVar33 == *puVar34;
            if (bVar35) {
              *puVar34 = uVar33 | 1L << (uVar31 & 0x3f);
            }
            UNLOCK();
          } while (!bVar35);
        }
        auStack_12._8_8_ =
             (ulonglong)(uint)(((List_1_MVMovable_ *)auStack_30._0_8_)->fields)._version << 0x20;
        uStack_36 = 0;
        auStack_30._8_8_ = auStack_12._8_8_;
        pMStack_37 = (MVMovable *)0x0;
        auStack_15 = (undefined1  [8])0x0;
        uStack_26 = auStack_30;
        auStack_12._0_8_ = auStack_30._0_8_;
        while (bVar38 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  ((List_1_T_Enumerator_System_Object_ *)auStack_30,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__MoveNext__
                                  ), bVar38 != 0) {
          if (pMStack_37 == (MVMovable *)0x0) goto code_?;
          MVMovable_Move(pMStack_37,directionFactor,breakid,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVMovable::MVMovable_OnDataUpdate(MVMovable *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_MapDataToFields((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pMStackX_20 = this;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVMovable>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVMovable____c__DisplayClass64_0___ReadWOData_b__0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovable____c__DisplayClass64_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AngularDirection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Movable_still_deprecated_data_An);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ParentID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AngularVelocity);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__init___Could_not_find_child_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChildrenMap);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Distance);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AngularSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_movable);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Rotation);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Movable_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Velocity);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__to_move__If_this_is_a_new_movab);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.blueprintData;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
              ((MethodInfo *)0x0);
    pOVar2 = extraout_RAX;
code_?:
    FUN_?(pOVar2,in_R8);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
code_?:
    FUN_?();
code_?:
    pOVar2 = (Object *)FUN_?(in_R8);
code_?:
    FUN_?(pOVar2,in_R8);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_5 = 0;
  uStack_6 = 0;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
    uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar12 = uVar10 == *puVar11;
      if (bVar12) {
        *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar12);
  }
  fVar13 = _UNK_?;
  uStack_14 = (ulonglong)(uint)(pDVar1->fields)._version;
  uStack_15 = 2;
  DStack_16._version = (undefined4)uStack_14;
  DStack_16._index = uStack_14._4_4_;
  DStack_16._current.key = (Object *)0x0;
  DStack_16._current.value = (Object *)0x0;
  DStack_16._getEnumeratorRetType = 2;
  DStack_16._36_4_ = 0;
  uStack_17 = 0;
  pDStack_18 = &DStack_16;
  pDStack_8 = pDVar1;
  DStack_16._dictionary = pDVar1;
code_?:
  do {
    do {
      bVar19 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
               Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                         (&DStack_16,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                         );
      pOVar2 = DStack_16._current.key;
      if (bVar19 == 0) {
        puVar20 = (undefined8 *)
                  (*(this->klass->vtable).get_WorldVelocity.methodPtr)
                            (&uStack_21,this,(this->klass->vtable).get_WorldVelocity.method);
        uStack_22 = *puVar20;
        fStack_23 = *(float *)(puVar20 + 1);
        fVar13 = (float)FUN_?(&uStack_22);
        (this->fields).timeToEnd = 0.0;
        if (_UNK_? < fVar13) {
          (this->fields).timeToEnd = (this->fields).distance / fVar13;
        }
        return;
      }
      if (DStack_16._current.value == (Object *)0x0) goto code_?;
      pSVar24 = (String *)
                (*((DStack_16._current.value)->klass->vtable).ToString.methodPtr)
                          (DStack_16._current.value,
                           ((DStack_16._current.value)->klass->vtable).ToString.method);
      object = (Object *)FUN_?(TypeInfo__MVMovable____c__DisplayClass64_0);
      if (pOVar2 == (Object *)0x0) goto code_?;
      pSVar25 = (String *)
                (*(pOVar2->klass->vtable).ToString.methodPtr)
                          (pOVar2,(pOVar2->klass->vtable).ToString.method);
      key = StringLiteral_AngularSpeed;
    } while (pSVar25 == (String *)0x0);
    uVar7 = 0x811c9dc5;
    iVar26 = (pSVar25->fields)._stringLength;
    puVar27 = &(pSVar25->fields)._firstChar;
    for (in_R8 = (MVCubeModelInstance *)0x0; (int)in_R8 < iVar26;
        in_R8 = (MVCubeModelInstance *)(ulonglong)((int)in_R8 + 1)) {
      if ((longlong)(pSVar25->fields)._stringLength <= (longlong)in_R8) goto code_?;
      uVar7 = (*puVar27 ^ uVar7) * 0x1000193;
      puVar27 = puVar27 + 1;
    }
    if (uVar7 < 0x6742174f) {
      if (uVar7 < 0xe39723d) {
        if (uVar7 == 0x232777f) {
          if ((pSVar25 == StringLiteral_Rotation) ||
             (((StringLiteral_Rotation != (String *)0x0 &&
               (iVar26 == (StringLiteral_Rotation->fields)._stringLength)) &&
              (bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                  ((uint8_t *)&(pSVar25->fields)._firstChar,
                                   (uint8_t *)&(StringLiteral_Rotation->fields)._firstChar,
                                   (longlong)(pSVar25->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar19 != 0)))) {
            if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
              FUN_?();
            }
            in_R8 = (MVCubeModelInstance *)0x0;
            pVVar28 = Extensions::Extensions_ToVector3FromSerializeString
                                (aVStack_29,pSVar24,(MethodInfo *)0x0);
            uVar30 = pVVar28->x;
            uVar31 = pVVar28->y;
            fStack_23 = pVVar28->z * fVar13;
            uStack_22 = CONCAT44((float)uVar31 * fVar13,(float)uVar30 * fVar13);
            uStack_21 = 0;
            uStack_32 = 0;
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0))
            goto code_?;
            pcRam_? = pcVar4;
            (*pcRam_?)(&uStack_22,&uStack_21);
            (this->fields).orgRotation.x = (float)(undefined4)uStack_21;
            (this->fields).orgRotation.y = (float)uStack_21._4_4_;
            (this->fields).orgRotation.z = (float)(undefined4)uStack_32;
            (this->fields).orgRotation.w = (float)uStack_32._4_4_;
          }
        }
        else if ((uVar7 == 0xe39723c) &&
                ((pSVar25 == StringLiteral_ChildrenMap ||
                 (((StringLiteral_ChildrenMap != (String *)0x0 &&
                   (iVar26 == (StringLiteral_ChildrenMap->fields)._stringLength)) &&
                  (bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                      ((uint8_t *)&(pSVar25->fields)._firstChar,
                                       (uint8_t *)&(StringLiteral_ChildrenMap->fields)._firstChar,
                                       (longlong)(pSVar25->fields)._stringLength * 2,
                                       (MethodInfo *)0x0), bVar19 != 0)))))) {
          this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)(this->fields)._.childIdMap;
          if (this_01 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
          iVar33 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                             (this_01,(Object *)StringLiteral_movable,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              ->klass->rgctx_data[0x21].method);
          if (-1 < iVar33) {
            pDVar1 = (this->fields)._.childIdMap;
            if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0)
            goto code_?;
            pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (pDVar1,(Object *)StringLiteral_movable,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if (pOVar2 == (Object *)0x0) goto code_?;
            in_R8 = pMRam0000000182dc5078;
            if ((pOVar2->klass->_0).element_class !=
                (Il2CppClass *)
                ((_union_155 *)&(pMRam0000000182dc5078->fields)._._._.position)->genericMethod)
            goto code_?;
            aIStackX_18[0].m_value = *(int32_t *)&pOVar2[1].klass;
            in_R8 = (MVCubeModelInstance *)
                    MVGroup::MVGroup_GetChild
                              ((MVGroup *)this,aIStackX_18[0].m_value,(MethodInfo *)0x0);
            if (in_R8 != (MVCubeModelInstance *)0x0) {
              bVar34 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
              if (((in_R8->klass->_1).naturalAligment < bVar34) ||
                 ((MVCubeModelInstance__Class *)
                  (in_R8->klass->_1).typeHierarchy[(ulonglong)bVar34 - 1] !=
                  TypeInfo__MVCubeModelInstance)) goto code_?;
            }
            (this->fields)._CubeModel_k__BackingField = in_R8;
            func_?(&(this->fields)._CubeModel_k__BackingField);
            if ((this->fields)._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0) {
              values = (String__Array *)FUN_?(TypeInfo__System__String);
              if (values == (String__Array *)0x0) goto code_?;
              FUN_?(values,0,StringLiteral_Movable_);
              pSVar24 = mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&this->fields,(MethodInfo *)0x0);
              FUN_?(values,1,pSVar24);
              FUN_?(values,2,StringLiteral__init___Could_not_find_child_);
              pSVar24 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
              FUN_?(values,3,pSVar24);
              FUN_?(values,4,StringLiteral__to_move__If_this_is_a_new_movab);
              pSVar24 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)pSVar24,(MethodInfo *)0x0);
            }
          }
        }
        goto code_?;
      }
      if (uVar7 != 0x4ae426e8) {
        if ((uVar7 == 0x6742174e) &&
           ((pSVar25 == StringLiteral_AngularDirection ||
            (((StringLiteral_AngularDirection != (String *)0x0 &&
              (iVar26 == (StringLiteral_AngularDirection->fields)._stringLength)) &&
             (bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar25->fields)._firstChar,
                                  (uint8_t *)&(StringLiteral_AngularDirection->fields)._firstChar,
                                  (longlong)(pSVar25->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar19 != 0)))))) {
          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
            FUN_?();
          }
          pVVar28 = Extensions::Extensions_ToVector3FromSerializeString
                              (&VStack_35,pSVar24,(MethodInfo *)0x0);
          fVar36 = pVVar28->z;
          fVar37 = pVVar28->y;
          (this->fields).angularDirection.x = pVVar28->x;
          (this->fields).angularDirection.y = fVar37;
          (this->fields).angularDirection.z = fVar36;
        }
        goto code_?;
      }
      if (pSVar25 != StringLiteral_ParentID) {
        if ((StringLiteral_ParentID == (String *)0x0) ||
           (iVar26 != (StringLiteral_ParentID->fields)._stringLength)) goto code_?;
        in_R8 = (MVCubeModelInstance *)((longlong)(pSVar25->fields)._stringLength * 2);
        bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar25->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_ParentID->fields)._firstChar,(uint64_t)in_R8,
                            (MethodInfo *)0x0);
        if (bVar19 == 0) goto code_?;
      }
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar33 = mscorlib.dll::System::Convert::Convert_ToInt32_14(pSVar24,(MethodInfo *)0x0);
      if (object == (Object *)0x0) goto code_?;
      *(int32_t *)&object[1].klass = iVar33;
      if ((this->fields).parentMoverID != iVar33) {
        pMVar38 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar38 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar39 = (pMVar38->fields)._MoveableController_k__BackingField;
        if (pMVar39 == (MoveableController *)0x0) goto code_?;
        source = (pMVar39->fields).MoveControllers;
        this_02 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                  FUN_?(
                               TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
                               );
        mscorlib.dll::System::Predicate`1[System::Xml::Schema::
        XmlSchemaObjectTable+XmlSchemaObjectEntry]::
        Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
                  (this_02,object,
                   MethodInfo__MVMovable____c__DisplayClass64_0___ReadWOData_b__0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                   ,(MethodInfo *)0x0);
        source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where
                              ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)source,
                               (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                                *)this_02,
                               System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                              );
        in_R8 = (MVCubeModelInstance *)
                System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
        ;
        System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault
                  (&KStack_40,source_00,
                   System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                  );
        pOVar2 = KStack_40.value;
        if ((MVMovable *)KStack_40.value == (MVMovable *)0x0) {
          pSVar24 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_Couldn_t_find_parent_,pSVar24,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar24,(MethodInfo *)0x0);
        }
        else {
          if ((this->fields).parentMover != (MVMovable *)0x0) {
            in_R8 = (MVCubeModelInstance *)0x0;
            MVMovable_RemoveMovableChild((this->fields).parentMover,this,(MethodInfo *)0x0);
          }
          (this->fields).parentMoverID = *(int32_t *)&object[1].klass;
          (this->fields).parentMover = (MVMovable *)pOVar2;
          func_?(&(this->fields).parentMover);
          this_00 = (this->fields).parentMover;
          if (this_00 == (MVMovable *)0x0) goto code_?;
          MVMovable_AddMovableChild(this_00,this,(MethodInfo *)0x0);
        }
      }
      goto code_?;
    }
    if (uVar7 < 0x7c2c901f) {
      if (uVar7 != 0x6f661c94) {
        if ((uVar7 == 0x7c2c901e) &&
           ((pSVar25 == StringLiteral_AngularVelocity ||
            (((StringLiteral_AngularVelocity != (String *)0x0 &&
              (iVar26 == (StringLiteral_AngularVelocity->fields)._stringLength)) &&
             (bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar25->fields)._firstChar,
                                  (uint8_t *)&(StringLiteral_AngularVelocity->fields)._firstChar,
                                  (longlong)(pSVar25->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar19 != 0)))))) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Movable_still_deprecated_data_An,(MethodInfo *)0x0);
        }
        goto code_?;
      }
      if (pSVar25 != StringLiteral_AngularSpeed) {
        if ((StringLiteral_AngularSpeed == (String *)0x0) ||
           (iVar26 != (StringLiteral_AngularSpeed->fields)._stringLength)) goto code_?;
        in_R8 = (MVCubeModelInstance *)((longlong)(pSVar25->fields)._stringLength * 2);
        bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar25->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_AngularSpeed->fields)._firstChar,
                            (uint64_t)in_R8,(MethodInfo *)0x0);
        if (bVar19 == 0) goto code_?;
      }
      pDVar1 = (this->fields)._.blueprintData;
      if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar1,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      in_R8 = pMRam0000000182dc50a8;
      if (pOVar2 == (Object *)0x0) goto code_?;
      if ((pOVar2->klass->_0).element_class !=
          (Il2CppClass *)
          ((_union_155 *)&(pMRam0000000182dc50a8->fields)._._._.position)->genericMethod)
      goto code_?;
      (this->fields).angularSpeed = *(float *)&pOVar2[1].klass;
      goto code_?;
    }
    if (uVar7 == 0xba408252) {
      if ((pSVar25 == StringLiteral_Velocity) ||
         (((StringLiteral_Velocity != (String *)0x0 &&
           (iVar26 == (StringLiteral_Velocity->fields)._stringLength)) &&
          (bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar25->fields)._firstChar,
                               (uint8_t *)&(StringLiteral_Velocity->fields)._firstChar,
                               (longlong)(pSVar25->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar19 != 0)))) {
        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
          FUN_?();
        }
        pVVar28 = Extensions::Extensions_ToVector3FromSerializeString
                            (&VStack_41,pSVar24,(MethodInfo *)0x0);
        fVar36 = pVVar28->z;
        fVar37 = pVVar28->y;
        (this->fields).velocity.x = pVVar28->x;
        (this->fields).velocity.y = fVar37;
        (this->fields).velocity.z = fVar36;
      }
    }
    else if ((uVar7 == 0xd3d96082) &&
            ((pSVar25 == StringLiteral_Distance ||
             (((StringLiteral_Distance != (String *)0x0 &&
               (iVar26 == (StringLiteral_Distance->fields)._stringLength)) &&
              (bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                  ((uint8_t *)&(pSVar25->fields)._firstChar,
                                   (uint8_t *)&(StringLiteral_Distance->fields)._firstChar,
                                   (longlong)(pSVar25->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar19 != 0)))))) {
      if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
        FUN_?();
      }
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pSVar24 == (String *)0x0) {
        (this->fields).distance = 0.0;
      }
      else {
        fVar36 = mscorlib.dll::System::Single::Single_Parse_2
                           (pSVar24,NumberStyles__Enum_AllowExponent|
                                    NumberStyles__Enum_AllowThousands|
                                    NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,
                            (IFormatProvider *)provider,(MethodInfo *)0x0);
        (this->fields).distance = fVar36;
      }
    }
  } while( true );
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVMovable::MVMovable_OnEnterObject
               (MVMovable *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (((pMVar1 != (MainCameraManager *)0x0) &&
      (pMVar2 = (pMVar1->fields).cameraController, pMVar2 != (MVCameraController *)0x0)) &&
     (this_00 = (pMVar2->fields).cameraStack, this_00 != (MVCameraController_CameraStack *)0x0)) {
    pMVar3 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                        (this_00,(MethodInfo *)0x0);
    uStack_4 = 0;
    if (pMVar3 != (MVCameraBase *)0x0) {
      uStack_5 = 0;
      uStack_6 = 0;
      uStack_7 = 0;
      uStack_4 = 0;
      (*(pMVar3->klass->vtable).FocusOnObject.methodPtr)
                (pMVar3,(this->fields)._CubeModel_k__BackingField,
                 TypeRef__System__Activator__T._0_4_,&uStack_4,&uStack_7,
                 (pMVar3->klass->vtable).FocusOnObject.method);
      if ((e != (EditorStateMachine *)0x0) &&
         (pSVar8 = (e->fields).selectionController, pSVar8 != (SelectionController *)0x0)) {
        SelectionController::SelectionController_DeSelectAll(pSVar8,(MethodInfo *)0x0);
        SelectionController::SelectionController_PushWOParents
                  (pSVar8,(MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
        pMVar9 = (this->fields)._CubeModel_k__BackingField;
        if ((pMVar9 != (MVCubeModelInstance *)0x0) &&
           (pSVar8 = (e->fields).selectionController, pSVar8 != (SelectionController *)0x0)) {
          value = (Object *)0x0;
          SelectionController::SelectionController_SelectWO
                    (pSVar8,(pMVar9->fields)._._._.id,0,1,(MethodInfo *)0x0);
          uStackX_20 = 0;
          iVar10._0_2_ = (TypeInfo__EditorEvent->_0).byval_arg.attrs;
          iVar10._2_1_ = (TypeInfo__EditorEvent->_0).byval_arg.type;
          iVar10._3_1_ = (TypeInfo__EditorEvent->_0).byval_arg.field_0xb;
          if (iVar10 < 0) {
            if (((TypeInfo__EditorEvent->_0).generic_class == (Il2CppGenericClass *)0x0) ||
               (((TypeInfo__EditorEvent->_1).field_0x6d & 8) == 0)) {
              value = (Object *)FUN_?(TypeInfo__EditorEvent);
              FUN_?(value + 1,&uStackX_20);
              if (iRam_? != 0) {
                uVar11 = (uint)((ulonglong)(value + 1) >> 0xc);
                uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                do {
                  uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
                  puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
                  LOCK();
                  bVar15 = uVar13 == *puVar14;
                  if (bVar15) {
                    *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar15);
              }
            }
          }
          else {
            value = (Object *)((ulonglong)uStackX_24 << 0x20);
          }
          FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
          pMVar9 = (this->fields)._CubeModel_k__BackingField;
          if (pMVar9 != (MVCubeModelInstance *)0x0) {
            (*(pMVar9->klass->vtable).set_Visible.methodPtr)
                      (pMVar9,CONCAT71((int7)((ulonglong)value >> 8),1),
                       (pMVar9->klass->vtable).set_Visible.method);
            return 1;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  bVar17 = (*pcVar16)();
  return bVar17;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVMovable::MVMovable_OnExitObject
               (MVMovable *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_ExitGroupToRoot(e,(MethodInfo *)0x0);
    auStackX_10[0] = 0x2f;
    value = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_10);
    FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._CubeModel_k__BackingField;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      (*(pMVar1->klass->vtable).set_Visible.methodPtr)
                (pMVar1,0,(pMVar1->klass->vtable).set_Visible.method);
      return 1;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void ReadWOData() */

void Assembly-CSharp.dll::MVMovable::MVMovable_ReadWOData(MVMovable *this,MethodInfo *method)

{
  pMStackX_20 = this;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVMovable>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVMovable____c__DisplayClass64_0___ReadWOData_b__0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovable____c__DisplayClass64_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AngularDirection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Movable_still_deprecated_data_An);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ParentID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AngularVelocity);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__init___Could_not_find_child_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChildrenMap);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Distance);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AngularSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_movable);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Rotation);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Movable_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Velocity);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__to_move__If_this_is_a_new_movab);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.blueprintData;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
              ((MethodInfo *)0x0);
    pOVar2 = extraout_RAX;
code_?:
    FUN_?(pOVar2,in_R8);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
code_?:
    FUN_?();
code_?:
    pOVar2 = (Object *)FUN_?(in_R8);
code_?:
    FUN_?(pOVar2,in_R8);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_5 = 0;
  uStack_6 = 0;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
    uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar12 = uVar10 == *puVar11;
      if (bVar12) {
        *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar12);
  }
  fVar13 = _UNK_?;
  uStack_14 = (ulonglong)(uint)(pDVar1->fields)._version;
  uStack_15 = 2;
  DStack_16._version = (undefined4)uStack_14;
  DStack_16._index = uStack_14._4_4_;
  DStack_16._current.key = (Object *)0x0;
  DStack_16._current.value = (Object *)0x0;
  DStack_16._getEnumeratorRetType = 2;
  DStack_16._36_4_ = 0;
  uStack_17 = 0;
  pDStack_18 = &DStack_16;
  pDStack_8 = pDVar1;
  DStack_16._dictionary = pDVar1;
code_?:
  do {
    do {
      bVar19 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
               Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                         (&DStack_16,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                         );
      pOVar2 = DStack_16._current.key;
      if (bVar19 == 0) {
        puVar20 = (undefined8 *)
                  (*(this->klass->vtable).get_WorldVelocity.methodPtr)
                            (&uStack_21,this,(this->klass->vtable).get_WorldVelocity.method);
        uStack_22 = *puVar20;
        fStack_23 = *(float *)(puVar20 + 1);
        fVar13 = (float)FUN_?(&uStack_22);
        (this->fields).timeToEnd = 0.0;
        if (_UNK_? < fVar13) {
          (this->fields).timeToEnd = (this->fields).distance / fVar13;
        }
        return;
      }
      if (DStack_16._current.value == (Object *)0x0) goto code_?;
      pSVar24 = (String *)
                (*((DStack_16._current.value)->klass->vtable).ToString.methodPtr)
                          (DStack_16._current.value,
                           ((DStack_16._current.value)->klass->vtable).ToString.method);
      object = (Object *)FUN_?(TypeInfo__MVMovable____c__DisplayClass64_0);
      if (pOVar2 == (Object *)0x0) goto code_?;
      pSVar25 = (String *)
                (*(pOVar2->klass->vtable).ToString.methodPtr)
                          (pOVar2,(pOVar2->klass->vtable).ToString.method);
      key = StringLiteral_AngularSpeed;
    } while (pSVar25 == (String *)0x0);
    uVar7 = 0x811c9dc5;
    iVar26 = (pSVar25->fields)._stringLength;
    puVar27 = &(pSVar25->fields)._firstChar;
    for (in_R8 = (MVCubeModelInstance *)0x0; (int)in_R8 < iVar26;
        in_R8 = (MVCubeModelInstance *)(ulonglong)((int)in_R8 + 1)) {
      if ((longlong)(pSVar25->fields)._stringLength <= (longlong)in_R8) goto code_?;
      uVar7 = (*puVar27 ^ uVar7) * 0x1000193;
      puVar27 = puVar27 + 1;
    }
    if (uVar7 < 0x6742174f) {
      if (uVar7 < 0xe39723d) {
        if (uVar7 == 0x232777f) {
          if ((pSVar25 == StringLiteral_Rotation) ||
             (((StringLiteral_Rotation != (String *)0x0 &&
               (iVar26 == (StringLiteral_Rotation->fields)._stringLength)) &&
              (bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                  ((uint8_t *)&(pSVar25->fields)._firstChar,
                                   (uint8_t *)&(StringLiteral_Rotation->fields)._firstChar,
                                   (longlong)(pSVar25->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar19 != 0)))) {
            if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
              FUN_?();
            }
            in_R8 = (MVCubeModelInstance *)0x0;
            pVVar28 = Extensions::Extensions_ToVector3FromSerializeString
                                (aVStack_29,pSVar24,(MethodInfo *)0x0);
            uVar30 = pVVar28->x;
            uVar31 = pVVar28->y;
            fStack_23 = pVVar28->z * fVar13;
            uStack_22 = CONCAT44((float)uVar31 * fVar13,(float)uVar30 * fVar13);
            uStack_21 = 0;
            uStack_32 = 0;
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0))
            goto code_?;
            pcRam_? = pcVar4;
            (*pcRam_?)(&uStack_22,&uStack_21);
            (this->fields).orgRotation.x = (float)(undefined4)uStack_21;
            (this->fields).orgRotation.y = (float)uStack_21._4_4_;
            (this->fields).orgRotation.z = (float)(undefined4)uStack_32;
            (this->fields).orgRotation.w = (float)uStack_32._4_4_;
          }
        }
        else if ((uVar7 == 0xe39723c) &&
                ((pSVar25 == StringLiteral_ChildrenMap ||
                 (((StringLiteral_ChildrenMap != (String *)0x0 &&
                   (iVar26 == (StringLiteral_ChildrenMap->fields)._stringLength)) &&
                  (bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                      ((uint8_t *)&(pSVar25->fields)._firstChar,
                                       (uint8_t *)&(StringLiteral_ChildrenMap->fields)._firstChar,
                                       (longlong)(pSVar25->fields)._stringLength * 2,
                                       (MethodInfo *)0x0), bVar19 != 0)))))) {
          this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)(this->fields)._.childIdMap;
          if (this_01 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
          iVar33 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                             (this_01,(Object *)StringLiteral_movable,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              ->klass->rgctx_data[0x21].method);
          if (-1 < iVar33) {
            pDVar1 = (this->fields)._.childIdMap;
            if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0)
            goto code_?;
            pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (pDVar1,(Object *)StringLiteral_movable,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if (pOVar2 == (Object *)0x0) goto code_?;
            in_R8 = pMRam0000000182dc5078;
            if ((pOVar2->klass->_0).element_class !=
                (Il2CppClass *)
                ((_union_155 *)&(pMRam0000000182dc5078->fields)._._._.position)->genericMethod)
            goto code_?;
            aIStackX_18[0].m_value = *(int32_t *)&pOVar2[1].klass;
            in_R8 = (MVCubeModelInstance *)
                    MVGroup::MVGroup_GetChild
                              ((MVGroup *)this,aIStackX_18[0].m_value,(MethodInfo *)0x0);
            if (in_R8 != (MVCubeModelInstance *)0x0) {
              bVar34 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
              if (((in_R8->klass->_1).naturalAligment < bVar34) ||
                 ((MVCubeModelInstance__Class *)
                  (in_R8->klass->_1).typeHierarchy[(ulonglong)bVar34 - 1] !=
                  TypeInfo__MVCubeModelInstance)) goto code_?;
            }
            (this->fields)._CubeModel_k__BackingField = in_R8;
            func_?(&(this->fields)._CubeModel_k__BackingField);
            if ((this->fields)._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0) {
              values = (String__Array *)FUN_?(TypeInfo__System__String);
              if (values == (String__Array *)0x0) goto code_?;
              FUN_?(values,0,StringLiteral_Movable_);
              pSVar24 = mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&this->fields,(MethodInfo *)0x0);
              FUN_?(values,1,pSVar24);
              FUN_?(values,2,StringLiteral__init___Could_not_find_child_);
              pSVar24 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
              FUN_?(values,3,pSVar24);
              FUN_?(values,4,StringLiteral__to_move__If_this_is_a_new_movab);
              pSVar24 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)pSVar24,(MethodInfo *)0x0);
            }
          }
        }
        goto code_?;
      }
      if (uVar7 != 0x4ae426e8) {
        if ((uVar7 == 0x6742174e) &&
           ((pSVar25 == StringLiteral_AngularDirection ||
            (((StringLiteral_AngularDirection != (String *)0x0 &&
              (iVar26 == (StringLiteral_AngularDirection->fields)._stringLength)) &&
             (bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar25->fields)._firstChar,
                                  (uint8_t *)&(StringLiteral_AngularDirection->fields)._firstChar,
                                  (longlong)(pSVar25->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar19 != 0)))))) {
          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
            FUN_?();
          }
          pVVar28 = Extensions::Extensions_ToVector3FromSerializeString
                              (&VStack_35,pSVar24,(MethodInfo *)0x0);
          fVar36 = pVVar28->z;
          fVar37 = pVVar28->y;
          (this->fields).angularDirection.x = pVVar28->x;
          (this->fields).angularDirection.y = fVar37;
          (this->fields).angularDirection.z = fVar36;
        }
        goto code_?;
      }
      if (pSVar25 != StringLiteral_ParentID) {
        if ((StringLiteral_ParentID == (String *)0x0) ||
           (iVar26 != (StringLiteral_ParentID->fields)._stringLength)) goto code_?;
        in_R8 = (MVCubeModelInstance *)((longlong)(pSVar25->fields)._stringLength * 2);
        bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar25->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_ParentID->fields)._firstChar,(uint64_t)in_R8,
                            (MethodInfo *)0x0);
        if (bVar19 == 0) goto code_?;
      }
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar33 = mscorlib.dll::System::Convert::Convert_ToInt32_14(pSVar24,(MethodInfo *)0x0);
      if (object == (Object *)0x0) goto code_?;
      *(int32_t *)&object[1].klass = iVar33;
      if ((this->fields).parentMoverID != iVar33) {
        pMVar38 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar38 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar39 = (pMVar38->fields)._MoveableController_k__BackingField;
        if (pMVar39 == (MoveableController *)0x0) goto code_?;
        source = (pMVar39->fields).MoveControllers;
        this_02 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                  FUN_?(
                               TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
                               );
        mscorlib.dll::System::Predicate`1[System::Xml::Schema::
        XmlSchemaObjectTable+XmlSchemaObjectEntry]::
        Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
                  (this_02,object,
                   MethodInfo__MVMovable____c__DisplayClass64_0___ReadWOData_b__0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                   ,(MethodInfo *)0x0);
        source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where
                              ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)source,
                               (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                                *)this_02,
                               System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                              );
        in_R8 = (MVCubeModelInstance *)
                System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
        ;
        System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault
                  (&KStack_40,source_00,
                   System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                  );
        pOVar2 = KStack_40.value;
        if ((MVMovable *)KStack_40.value == (MVMovable *)0x0) {
          pSVar24 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_Couldn_t_find_parent_,pSVar24,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar24,(MethodInfo *)0x0);
        }
        else {
          if ((this->fields).parentMover != (MVMovable *)0x0) {
            in_R8 = (MVCubeModelInstance *)0x0;
            MVMovable_RemoveMovableChild((this->fields).parentMover,this,(MethodInfo *)0x0);
          }
          (this->fields).parentMoverID = *(int32_t *)&object[1].klass;
          (this->fields).parentMover = (MVMovable *)pOVar2;
          func_?(&(this->fields).parentMover);
          this_00 = (this->fields).parentMover;
          if (this_00 == (MVMovable *)0x0) goto code_?;
          MVMovable_AddMovableChild(this_00,this,(MethodInfo *)0x0);
        }
      }
      goto code_?;
    }
    if (uVar7 < 0x7c2c901f) {
      if (uVar7 != 0x6f661c94) {
        if ((uVar7 == 0x7c2c901e) &&
           ((pSVar25 == StringLiteral_AngularVelocity ||
            (((StringLiteral_AngularVelocity != (String *)0x0 &&
              (iVar26 == (StringLiteral_AngularVelocity->fields)._stringLength)) &&
             (bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar25->fields)._firstChar,
                                  (uint8_t *)&(StringLiteral_AngularVelocity->fields)._firstChar,
                                  (longlong)(pSVar25->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar19 != 0)))))) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Movable_still_deprecated_data_An,(MethodInfo *)0x0);
        }
        goto code_?;
      }
      if (pSVar25 != StringLiteral_AngularSpeed) {
        if ((StringLiteral_AngularSpeed == (String *)0x0) ||
           (iVar26 != (StringLiteral_AngularSpeed->fields)._stringLength)) goto code_?;
        in_R8 = (MVCubeModelInstance *)((longlong)(pSVar25->fields)._stringLength * 2);
        bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar25->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_AngularSpeed->fields)._firstChar,
                            (uint64_t)in_R8,(MethodInfo *)0x0);
        if (bVar19 == 0) goto code_?;
      }
      pDVar1 = (this->fields)._.blueprintData;
      if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar1,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      in_R8 = pMRam0000000182dc50a8;
      if (pOVar2 == (Object *)0x0) goto code_?;
      if ((pOVar2->klass->_0).element_class !=
          (Il2CppClass *)
          ((_union_155 *)&(pMRam0000000182dc50a8->fields)._._._.position)->genericMethod)
      goto code_?;
      (this->fields).angularSpeed = *(float *)&pOVar2[1].klass;
      goto code_?;
    }
    if (uVar7 == 0xba408252) {
      if ((pSVar25 == StringLiteral_Velocity) ||
         (((StringLiteral_Velocity != (String *)0x0 &&
           (iVar26 == (StringLiteral_Velocity->fields)._stringLength)) &&
          (bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar25->fields)._firstChar,
                               (uint8_t *)&(StringLiteral_Velocity->fields)._firstChar,
                               (longlong)(pSVar25->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar19 != 0)))) {
        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
          FUN_?();
        }
        pVVar28 = Extensions::Extensions_ToVector3FromSerializeString
                            (&VStack_41,pSVar24,(MethodInfo *)0x0);
        fVar36 = pVVar28->z;
        fVar37 = pVVar28->y;
        (this->fields).velocity.x = pVVar28->x;
        (this->fields).velocity.y = fVar37;
        (this->fields).velocity.z = fVar36;
      }
    }
    else if ((uVar7 == 0xd3d96082) &&
            ((pSVar25 == StringLiteral_Distance ||
             (((StringLiteral_Distance != (String *)0x0 &&
               (iVar26 == (StringLiteral_Distance->fields)._stringLength)) &&
              (bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                  ((uint8_t *)&(pSVar25->fields)._firstChar,
                                   (uint8_t *)&(StringLiteral_Distance->fields)._firstChar,
                                   (longlong)(pSVar25->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar19 != 0)))))) {
      if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
        FUN_?();
      }
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pSVar24 == (String *)0x0) {
        (this->fields).distance = 0.0;
      }
      else {
        fVar36 = mscorlib.dll::System::Single::Single_Parse_2
                           (pSVar24,NumberStyles__Enum_AllowExponent|
                                    NumberStyles__Enum_AllowThousands|
                                    NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,
                            (IFormatProvider *)provider,(MethodInfo *)0x0);
        (this->fields).distance = fVar36;
      }
    }
  } while( true );
}


/* Void RecalcTimeToEnd() */

void Assembly-CSharp.dll::MVMovable::MVMovable_RecalcTimeToEnd(MVMovable *this,MethodInfo *method)

{
  puVar1 = (undefined8 *)
           (*(this->klass->vtable).get_WorldVelocity.methodPtr)
                     (auStack_2,this,(this->klass->vtable).get_WorldVelocity.method);
  uStack_3 = *puVar1;
  uStack_4 = *(undefined4 *)(puVar1 + 1);
  fVar5 = (float)FUN_?(&uStack_3);
  fVar6 = _UNK_?;
  (this->fields).timeToEnd = 0.0;
  if (fVar6 < fVar5) {
    (this->fields).timeToEnd = (this->fields).distance / fVar5;
  }
  return;
}


/* Void RemoveMovableChild(MVMovable) */

void Assembly-CSharp.dll::MVMovable::MVMovable_RemoveMovableChild
               (MVMovable *this,MVMovable *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMovable>__Remove_MVMovable_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<MVMovable>__Remove_MVMovable_;
  this_00 = (this->fields).MoveableChildren;
  if (this_00 != (List_1_MVMovable_ *)0x0) {
    index = mscorlib.dll::System::Array::Array_IndexOf_69
                      ((Object__Array *)(this_00->fields)._items,(Object *)child,0,
                       (this_00->fields)._size,
                       (MethodInfo__System__Collections__Generic__List<MVMovable>__Remove_MVMovable_
                        ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
    if (index < 0) {
      return;
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__RemoveAt
              ((List_1_System_Object_ *)this_00,index,pMVar1->klass->rgctx_data[0x2b].method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAngularDirection(Vector3, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetAngularDirection
               (MVMovable *this,Vector3 *angularDirection,bool updateWOData,bool syncServer,
               MethodInfo *method)

{
  uVar1 = CONCAT71(in_register_00000089,syncServer);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AngularDirection);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar2 = angularDirection->y;
  fVar3 = angularDirection->z;
  (this->fields).angularDirection.x = angularDirection->x;
  (this->fields).angularDirection.y = fVar2;
  (this->fields).angularDirection.z = fVar3;
  if (updateWOData == 0) {
    return;
  }
  this_00 = (this->fields)._.blueprintData;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_4.x = angularDirection->x;
  VStack_4.y = angularDirection->y;
  VStack_4.z = angularDirection->z;
  pSVar5 = Extensions::Extensions_ToSerializeString(&VStack_4,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (this_00,(Object *)StringLiteral_AngularDirection,(Object *)pSVar5,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (syncServer == 0) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pSVar5 = StringLiteral_AngularDirection;
    worldObjectID = (this->fields)._._._._.id;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_BlueprintData_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pSVar5 != (String *)0x0) {
      pSVar5 = (String *)
               (*(pSVar5->klass->vtable).ToString.methodPtr)
                         (pSVar5,(pSVar5->klass->vtable).ToString.method);
      pSVar5 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_BlueprintData_,pSVar5,(MethodInfo *)0x0);
      VStack_4.z = angularDirection->z;
      VStack_4.x = angularDirection->x;
      VStack_4.y = angularDirection->y;
      value = (Object *)FUN_?(TypeInfo__UnityEngine__Vector3,&VStack_4);
      if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                  (this_01,worldObjectID,pSVar5,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetAngularSpeed(Single, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetAngularSpeed
               (MVMovable *this,float angularSpeed,bool updateWOData,bool syncServer,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AngularSpeed);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).angularSpeed = angularSpeed;
  if (updateWOData == 0) {
    return;
  }
  this_00 = (this->fields)._.blueprintData;
  afStackX_18[0] = angularSpeed;
  pOVar1 = (Object *)FUN_?(uRam_?,afStackX_18);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (this_00,(Object *)StringLiteral_AngularSpeed,pOVar1,
               (InsertionBehavior__Enum)CONCAT71(in_register_00000089,1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (syncServer == 0) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pSVar2 = StringLiteral_AngularSpeed;
    worldObjectID = (this->fields)._._._._.id;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_BlueprintData_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pSVar2 != (String *)0x0) {
      pSVar2 = (String *)
               (*(pSVar2->klass->vtable).ToString.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable).ToString.method);
      pSVar2 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_BlueprintData_,pSVar2,(MethodInfo *)0x0);
      afStackX_18[0] = angularSpeed;
      pOVar1 = (Object *)FUN_?(uRam_?,afStackX_18);
      if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                  (this_01,worldObjectID,pSVar2,pOVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetDistance(Single, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetDistance
               (MVMovable *this,float distance,bool updateWOData,bool syncServer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Distance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).distance = distance;
  if (updateWOData != 0) {
    this_00 = (this->fields)._.blueprintData;
    afStackX_18[0] = distance;
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_18);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (this_00,(Object *)StringLiteral_Distance,pOVar1,
                 (InsertionBehavior__Enum)CONCAT71(in_register_00000089,1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      if (syncServer == 0) goto code_?;
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pSVar2 = StringLiteral_Distance;
      worldObjectID = (this->fields)._._._._.id;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_BlueprintData_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pSVar2 != (String *)0x0) {
        pSVar2 = (String *)
                 (*(pSVar2->klass->vtable).ToString.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable).ToString.method);
        pSVar2 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_BlueprintData_,pSVar2,(MethodInfo *)0x0);
        afStackX_18[0] = distance;
        pOVar1 = (Object *)FUN_?(uRam_?,afStackX_18);
        if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                    (this_01,worldObjectID,pSVar2,pOVar1,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
code_?:
  (*(this->klass->vtable).get_WorldVelocity.methodPtr)
            (auStack_4,this,(this->klass->vtable).get_WorldVelocity.method);
  fVar5 = (float)FUN_?(&stack0xffffffffffffffd8);
  fVar6 = _UNK_?;
  (this->fields).timeToEnd = 0.0;
  if (fVar6 < fVar5) {
    (this->fields).timeToEnd = (this->fields).distance / fVar5;
  }
  return;
}


/* Void SetOrgRotation(Quaternion, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetOrgRotation
               (MVMovable *this,Quaternion *orgRotation,bool updateWOData,bool syncServer,
               MethodInfo *method)

{
  uVar1 = CONCAT71(in_register_00000089,syncServer);
  method_00 = (MethodInfo *)CONCAT71(in_register_00000081,updateWOData);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Rotation);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar2 = orgRotation->y;
  fVar3 = orgRotation->z;
  fVar4 = orgRotation->w;
  (this->fields).orgRotation.x = orgRotation->x;
  (this->fields).orgRotation.y = fVar2;
  (this->fields).orgRotation.z = fVar3;
  (this->fields).orgRotation.w = fVar4;
  if (updateWOData != 0) {
    this_00 = (this->fields)._.blueprintData;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       (&VStack_6,orgRotation,method_00);
    VStack_6.x = pVVar5->x;
    VStack_6.y = pVVar5->y;
    VStack_6.z = pVVar5->z;
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar7 = Extensions::Extensions_ToSerializeString(&VStack_6,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (this_00,(Object *)StringLiteral_Rotation,(Object *)pSVar7,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      if (syncServer == 0) {
        return;
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pSVar7 = StringLiteral_Rotation;
      worldObjectID = (this->fields)._._._._.id;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_BlueprintData_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pSVar7 != (String *)0x0) {
        pSVar7 = (String *)
                 (*(pSVar7->klass->vtable).ToString.methodPtr)
                           (pSVar7,(pSVar7->klass->vtable).ToString.method);
        pSVar7 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_BlueprintData_,pSVar7,(MethodInfo *)0x0);
        VStack_6.x = orgRotation->x;
        VStack_6.y = orgRotation->y;
        VStack_6.z = orgRotation->z;
        fStack_8 = orgRotation->w;
        value = (Object *)FUN_?(TypeInfo__UnityEngine__Quaternion,&VStack_6);
        if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                    (this_01,worldObjectID,pSVar7,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  return;
}


/* Void SetParentMoverID(Int32, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetParentMoverID
               (MVMovable *this,int32_t parentMoverID,bool updateWOData,bool syncServer,
               MethodInfo *method)

{
  uVar1 = CONCAT71(in_register_00000089,syncServer);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVMovable>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVMovable____c__DisplayClass62_0___SetParentMoverID_b__0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovable____c__DisplayClass62_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ParentMoverID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Couldn_t_find_parent_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = (Object *)FUN_?();
  if (pOVar2 != (Object *)0x0) {
    *(int32_t *)&pOVar2[1].klass = parentMoverID;
    if ((this->fields).parentMoverID != parentMoverID) {
      pMVar3 = (MVMovable *)0x0;
      if (parentMoverID != -1) {
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((pMVar4 == (MVWorldObjectClientManager *)0x0) ||
           (pMVar5 = (pMVar4->fields)._MoveableController_k__BackingField,
           pMVar5 == (MoveableController *)0x0)) goto code_?;
        source = (pMVar5->fields).MoveControllers;
        this_01 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                  FUN_?(
                               TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
                               );
        uVar1 = 0;
        mscorlib.dll::System::Predicate`1[System::Xml::Schema::
        XmlSchemaObjectTable+XmlSchemaObjectEntry]::
        Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
                  (this_01,pOVar2,
                   MethodInfo__MVMovable____c__DisplayClass62_0___SetParentMoverID_b__0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                   ,(MethodInfo *)0x0);
        source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where
                              ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)source,
                               (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                                *)this_01,
                               System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                              );
        System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault
                  (&KStack_6,source_00,
                   System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                  );
        pMVar3 = (MVMovable *)KStack_6.value;
        if ((MVMovable *)KStack_6.value == (MVMovable *)0x0) {
          pSVar7 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)(pOVar2 + 1),(MethodInfo *)0x0);
          pSVar7 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral_Couldn_t_find_parent_,pSVar7,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar7,(MethodInfo *)0x0);
          return;
        }
      }
      if ((this->fields).parentMover != (MVMovable *)0x0) {
        MVMovable_RemoveMovableChild((this->fields).parentMover,this,(MethodInfo *)0x0);
      }
      bVar8 = iRam_? != 0;
      (this->fields).parentMoverID = *(int32_t *)&pOVar2[1].klass;
      (this->fields).parentMover = pMVar3;
      if (bVar8) {
        uVar9 = (uint)((ulonglong)&(this->fields).parentMover >> 0xc);
        puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar10;
          LOCK();
          uVar12 = *puVar10;
          if (uVar11 == uVar12) {
            *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar12);
      }
      if ((this->fields).parentMover != (MVMovable *)0x0) {
        MVMovable_AddMovableChild((this->fields).parentMover,this,(MethodInfo *)0x0);
      }
    }
    if (updateWOData == 0) {
      return;
    }
    auStackX_10[0] = *(undefined4 *)&pOVar2[1].klass;
    this_00 = (this->fields)._.blueprintData;
    value = (Object *)FUN_?(uRam_?,auStackX_10);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (this_00,(Object *)StringLiteral_ParentMoverID,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      if (syncServer == 0) {
        return;
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pSVar7 = StringLiteral_ParentMoverID;
      worldObjectID = (this->fields)._._._._.id;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_BlueprintData_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pSVar7 != (String *)0x0) {
        pSVar7 = (String *)
                 (*(pSVar7->klass->vtable).ToString.methodPtr)
                           (pSVar7,(pSVar7->klass->vtable).ToString.method);
        pSVar7 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_BlueprintData_,pSVar7,(MethodInfo *)0x0);
        auStackX_10[0] = *(undefined4 *)&pOVar2[1].klass;
        pOVar2 = (Object *)FUN_?(uRam_?,auStackX_10);
        if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                    (this_02,worldObjectID,pSVar7,pOVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SetVelocity(Vector3, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetVelocity
               (MVMovable *this,Vector3 *velocity,bool updateWOData,bool syncServer,
               MethodInfo *method)

{
  uVar1 = CONCAT71(in_register_00000089,syncServer);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Velocity);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar2 = velocity->y;
  fVar3 = velocity->z;
  (this->fields).velocity.x = velocity->x;
  (this->fields).velocity.y = fVar2;
  (this->fields).velocity.z = fVar3;
  if (updateWOData != 0) {
    this_00 = (this->fields)._.blueprintData;
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_4.x = velocity->x;
    VStack_4.y = velocity->y;
    VStack_4.z = velocity->z;
    pSVar5 = Extensions::Extensions_ToSerializeString(&VStack_4,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (this_00,(Object *)StringLiteral_Velocity,(Object *)pSVar5,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      if (syncServer == 0) goto code_?;
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pSVar5 = StringLiteral_Velocity;
      worldObjectID = (this->fields)._._._._.id;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_BlueprintData_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pSVar5 != (String *)0x0) {
        pSVar5 = (String *)
                 (*(pSVar5->klass->vtable).ToString.methodPtr)
                           (pSVar5,(pSVar5->klass->vtable).ToString.method);
        pSVar5 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_BlueprintData_,pSVar5,(MethodInfo *)0x0);
        VStack_4.z = velocity->z;
        VStack_4.x = velocity->x;
        VStack_4.y = velocity->y;
        value = (Object *)FUN_?(TypeInfo__UnityEngine__Vector3,&VStack_4);
        if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                    (this_01,worldObjectID,pSVar5,value,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
code_?:
  (*(this->klass->vtable).get_WorldVelocity.methodPtr)
            (&VStack_4,this,(this->klass->vtable).get_WorldVelocity.method);
  fVar2 = (float)FUN_?(&stack0xffffffffffffffd8);
  fVar3 = _UNK_?;
  (this->fields).timeToEnd = 0.0;
  if (fVar3 < fVar2) {
    (this->fields).timeToEnd = (this->fields).distance / fVar2;
  }
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetVisible
               (MVMovable *this,bool newVisible,MethodInfo *method)

{
  pMVar1 = (this->fields).movableVisualization;
  if (pMVar1 == (MovableVisualization *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (newVisible == 0) {
    if ((pMVar1->fields).isVisible == 0) {
      return;
    }
    this_00 = (pMVar1->fields).cmbClone;
    uVar3 = 0;
  }
  else {
    if ((pMVar1->fields).isVisible != 0) {
      return;
    }
    if ((pMVar1->fields).canBeVisible == 0) {
      return;
    }
    this_00 = (pMVar1->fields).cmbClone;
    uVar3 = CONCAT71(in_register_00000011,1);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                  ,uVar3,this_00,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = 
  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
  ;
  if (this_00 != (GameObject *)0x0) {
    if ((
        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    }
    p_Var4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (this_00,0,((pMVar4->field7_0x38).rgctx_data)->method);
    uVar5 = 0;
    if (p_Var4 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      pp_Var8 = p_Var4->vector;
      while( true ) {
        if ((int)p_Var4->max_length <= (int)uVar5) {
          (pMVar1->fields).isVisible = (bool)uVar3;
          return;
        }
        if ((uint)p_Var4->max_length <= uVar5) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        obj = (Object *)*pp_Var8;
        if (obj == (Object *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar6 = obj[1].klass;
        if (pOVar6 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pOVar6);
        uVar5 = uVar5 + 1;
        pp_Var8 = pp_Var8 + 1;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SyncProperties() */

void Assembly-CSharp.dll::MVMovable::MVMovable_SyncProperties(MVMovable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_BlueprintData,(Object *)(this->fields)._.blueprintData,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pMVar3 = (pMVar2->fields).operationRequests,
       pMVar3 != (MVNetworkGame_OperationRequests *)0x0)) {
      iVar4 = (this->fields)._._._._.id;
      uVar5 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ,iVar4,this_00,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      aiStackX_10[0] = iVar4;
      value = (Object *)FUN_?(uRam_?,aiStackX_10);
      if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        uVar6 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar7 = (undefined7)((ulonglong)method_00 >> 8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_01,0x17,value,(InsertionBehavior__Enum)uVar6,method_00);
        uVar5 = CONCAT71(uVar7,0x13);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_01,0x13,(Object *)this_00,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pPVar8 = (pMVar3->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar8 != (PhotonPeer *)0x0) {
          (*(pPVar8->klass->vtable).SendOperation.methodPtr)
                    (pPVar8,CONCAT71((int7)((ulonglong)uVar5 >> 8),4),this_01,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar8->klass->vtable).SendOperation.method);
          return;
        }
      }
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateMoverSubTree(Single, Int32) */

void Assembly-CSharp.dll::MVMovable::MVMovable_UpdateMoverSubTree
               (MVMovable *this,float directionFactor,int32_t breakid,MethodInfo *method)

{
  pMVar1 = (this->fields).parentMover;
  while (pMVar1 != (MVMovable *)0x0) {
    this = (this->fields).parentMover;
    if (this == (MVMovable *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pMVar1 = (this->fields).parentMover;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMovable>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0) {
    return;
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar3 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar4 = (pMVar3->fields)._MoveableController_k__BackingField,
     pMVar4 == (MoveableController *)0x0)) goto code_?;
  fVar5 = (pMVar4->fields).time;
  if ((this->fields).pausedMovement == 0) {
    if (directionFactor < 0.0) {
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      fVar5 = fVar5 - fVar6;
    }
    (this->fields).linearTime = 0.0;
    (this->fields).fraction = 0.0;
    if ((this->fields).timeToEnd != 0.0) {
      fVar6 = (float)FUN_?();
      (this->fields).linearTime = fVar6;
      fVar6 = fVar6 / (this->fields).timeToEnd;
      (this->fields).fraction = fVar6;
      if (_UNK_? < (this->fields).timeToEnd) {
        (this->fields).fraction = TypeRef__System__Activator__T._0_4_ - fVar6;
      }
    }
  }
  else {
    (this->fields).linearTime = (this->fields).fraction * (this->fields).timeToEnd;
  }
  puVar7 = (undefined8 *)
            (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                      (&VStack_8,this,(this->klass->vtable).get_WorldPosition_1.method);
  uStack_9 = *puVar7;
  fVar6 = *(float *)(puVar7 + 1);
  if ((this->fields).parentMover != (MVMovable *)0x0) {
    pMVar10 = (((this->fields).parentMover)->fields)._CubeModel_k__BackingField;
    if (pMVar10 == (MVCubeModelInstance *)0x0) goto code_?;
    puVar7 = (undefined8 *)(*(pMVar10->klass->vtable).get_WorldPosition_1.methodPtr)(&VStack_11);
    VStack_8._0_8_ = *puVar7;
    fVar6 = *(float *)(puVar7 + 1);
    pMVar1 = (this->fields).parentMover;
    if ((pMVar1 == (MVMovable *)0x0) ||
       (pMVar10 = (pMVar1->fields)._CubeModel_k__BackingField, pMVar10 == (MVCubeModelInstance *)0x0))
    goto code_?;
    pQVar12 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                        ((Quaternion *)auStack_13,(MVWorldObjectClient *)pMVar10,(MethodInfo *)0x0);
    pLVar14 = *(List_1_MVMovable_ **)pQVar12;
    puVar15 = *(undefined1 **)&pQVar12->z;
    puVar7 = (undefined8 *)
              (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                        (auStack_16,this,(this->klass->vtable).get_WorldPosition_1.method);
    VStack_11._0_8_ = *puVar7;
    fVar17 = *(float *)(puVar7 + 1);
    pMVar1 = (this->fields).parentMover;
    if (pMVar1 == (MVMovable *)0x0) goto code_?;
    puVar7 = (undefined8 *)
              (*(pMVar1->klass->vtable).get_WorldPosition_1.methodPtr)
                        (auStack_16,pMVar1,(pMVar1->klass->vtable).get_WorldPosition_1.method);
    VStack_11.z = fVar17 - *(float *)(puVar7 + 1);
    VStack_11.y = VStack_11.y - (float)((ulonglong)*puVar7 >> 0x20);
    VStack_11.x = VStack_11.x - (float)*puVar7;
    auStack_13._0_8_ = pLVar14;
    auStack_13._8_8_ = puVar15;
    pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)auStack_16,(Quaternion *)auStack_13,&VStack_11,(MethodInfo *)0x0
                        );
    uVar19._0_4_ = pVVar18->x;
    uVar19._4_4_ = pVVar18->y;
    fVar6 = fVar6 + pVVar18->z;
    uStack_9 = CONCAT44(VStack_8.y + uVar19._4_4_,VStack_8.x + (float)uVar19);
    VStack_8._0_8_ = uVar19;
  }
  if (_UNK_? < (this->fields).timeToEnd) {
    if (*(int *)&(TypeInfo__MVMovable->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MVMovable);
    }
    TypeInfo__MVMovable->static_fields->direction = 1.0;
    pIVar20 = (this->klass->vtable).get_WorldVelocity.methodPtr;
    fVar17 = (this->fields).timeToEnd;
    pfVar21 = &(this->fields).linearTime;
    if (*pfVar21 <= fVar17 && fVar17 != *pfVar21) {
      puVar7 = (undefined8 *)
                (*pIVar20)(auStack_16,this,(this->klass->vtable).get_WorldVelocity.method);
      fVar17 = (this->fields).linearTime;
      VStack_8._0_8_ = *puVar7;
      fVar22 = *(float *)(puVar7 + 1);
      (this->fields).localPos.x = VStack_8.x * fVar17;
      (this->fields).localPos.y = VStack_8.y * fVar17;
      (this->fields).localPos.z = fVar22 * fVar17;
    }
    else {
      puVar7 = (undefined8 *)(*pIVar20)();
      fVar17 = (this->fields).timeToEnd;
      VStack_8._0_8_ = *puVar7;
      fVar22 = (fVar17 + fVar17) - (this->fields).linearTime;
      fVar17 = *(float *)(puVar7 + 1);
      (this->fields).localPos.x = fVar22 * VStack_8.x;
      (this->fields).localPos.y = fVar22 * VStack_8.y;
      (this->fields).localPos.z = fVar22 * fVar17;
      if (*(int *)&(TypeInfo__MVMovable->_1).field_0x1c == 0) {
        FUN_?();
      }
      TypeInfo__MVMovable->static_fields->direction = -1.0;
    }
    if (0.0 < directionFactor) {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar3 == (MVWorldObjectClientManager *)0x0) ||
         (pMVar4 = (pMVar3->fields)._MoveableController_k__BackingField,
         pMVar4 == (MoveableController *)0x0)) goto code_?;
      this_00 = (pMVar4->fields).Velocities;
      key = (this->fields)._._._.goId;
      if (*(int *)&(TypeInfo__MVMovable->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MVMovable);
      }
      fVar17 = TypeInfo__MVMovable->static_fields->direction;
      plVar23 = (longlong *)
                (*(this->klass->vtable).get_WorldVelocity.methodPtr)
                          (auStack_16,this,(this->klass->vtable).get_WorldVelocity.method);
      pLVar14 = (List_1_MVMovable_ *)*plVar23;
      fVar22 = *(float *)(plVar23 + 1);
      fVar24 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      auStack_16 = (undefined1  [8])pLVar14;
      if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      VStack_8.y = fVar17 * (float)((ulonglong)pLVar14 >> 0x20) * directionFactor * fVar24;
      VStack_8.x = fVar17 * SUB84(pLVar14,0) * directionFactor * fVar24;
      VStack_8.z = fVar17 * fVar22 * directionFactor * fVar24;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]::
      Dictionary_2_System_Int32_UnityEngine_Vector3__TryInsert
                (this_00,key,&VStack_8,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar20 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                 ->klass->rgctx_data[0x22].method);
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar17 = (pVVar25->zeroVector).z;
    fVar22 = (pVVar25->zeroVector).y;
    (this->fields).localPos.x = (pVVar25->zeroVector).x;
    (this->fields).localPos.y = fVar22;
    (this->fields).localPos.z = fVar17;
  }
  pMVar10 = (this->fields)._CubeModel_k__BackingField;
  auStack_16 = *(undefined1 (*) [8])&(this->fields).localPos;
  uVar26._0_4_ = (float)uStack_9 + SUB84(auStack_16,0);
  if (pMVar10 != (MVCubeModelInstance *)0x0) {
    uVar26._4_4_ = uStack_9._4_4_ + (float)((ulonglong)auStack_16 >> 0x20);
    VStack_8._0_8_ = uVar26;
    VStack_8.z = fVar6 + (this->fields).localPos.z;
    (*(pMVar10->klass->vtable).set_WorldPosition.methodPtr)
              (pMVar10,&VStack_8,(pMVar10->klass->vtable).set_WorldPosition.method);
    fVar6 = (this->fields).angularSpeed;
    auStack_16._0_4_ = (this->fields).angularDirection.x;
    auStack_16._4_4_ = (this->fields).angularDirection.y;
    VStack_8.z = fVar6 * (this->fields).angularDirection.z * fVar5;
    VStack_8.y = fVar6 * (float)auStack_16._4_4_ * fVar5;
    VStack_8.x = fVar6 * (float)auStack_16._0_4_ * fVar5;
    FUN_?(&VStack_8);
    fVar5 = (this->fields).angularSpeed;
    auStack_16._0_4_ = (this->fields).angularDirection.x;
    auStack_16._4_4_ = (this->fields).angularDirection.y;
    fVar22 = fVar5 * (this->fields).angularDirection.z;
    fVar17 = fVar5 * (float)auStack_16._4_4_;
    fVar5 = fVar5 * (float)auStack_16._0_4_;
    VStack_8.y = fVar17;
    VStack_8.x = fVar5;
    VStack_8.z = fVar22;
    fVar6 = (float)FUN_?(&VStack_8);
    if (_UNK_? < fVar6) {
      VStack_8.z = fVar22 / fVar6;
      VStack_8.y = fVar17 / fVar6;
      VStack_8.x = fVar5 / fVar6;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_8.x = (pVVar25->zeroVector).x;
      VStack_8.y = (pVVar25->zeroVector).y;
      VStack_8.z = (pVVar25->zeroVector).z;
    }
    auStack_16 = (undefined1  [8])0x0;
    uStack_27 = (undefined1 *)0x0;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar19 = func_?(&UNK_?);
      FUN_?(uVar19,0);
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    pQVar12 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                        ((Quaternion *)auStack_13,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
    fVar5 = pQVar12->x;
    fVar6 = pQVar12->y;
    fVar17 = pQVar12->z;
    fVar22 = pQVar12->w;
    if ((this->fields).parentMoverID != -1) {
      pMVar1 = (this->fields).parentMover;
      if ((pMVar1 == (MVMovable *)0x0) ||
         (pMVar10 = (pMVar1->fields)._CubeModel_k__BackingField, pMVar10 == (MVCubeModelInstance *)0x0
         )) goto code_?;
      pQVar12 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                          ((Quaternion *)auStack_13,(MVWorldObjectClient *)pMVar10,(MethodInfo *)0x0)
      ;
      fVar5 = pQVar12->x;
      fVar6 = pQVar12->y;
      fVar17 = pQVar12->z;
      fVar22 = pQVar12->w;
    }
    if ((this->fields).pausedMovement == 0) {
      pMVar10 = (this->fields)._CubeModel_k__BackingField;
      uVar28 = auStack_16._0_4_;
      uVar29 = auStack_16._4_4_;
      fVar24 = (float)auStack_16._4_4_ * fVar17;
      auStack_16._4_4_ =
           ((float)auStack_16._4_4_ * fVar22 + uStack_27._4_4_ * fVar6 +
           (float)auStack_16._0_4_ * fVar17) - (float)uStack_27 * fVar5;
      auStack_16._0_4_ =
           ((float)auStack_16._0_4_ * fVar22 + uStack_27._4_4_ * fVar5 + (float)uStack_27 * fVar6)
           - fVar24;
      uStack_27 = (undefined1 *)
                  CONCAT44(((uStack_27._4_4_ * fVar22 - (float)uVar28 * fVar5) -
                           (float)uVar29 * fVar6) - (float)uStack_27 * fVar17,
                           ((float)uStack_27 * fVar22 + uStack_27._4_4_ * fVar17 +
                           (float)uVar29 * fVar5) - (float)uVar28 * fVar6);
      if (pMVar10 == (MVCubeModelInstance *)0x0) goto code_?;
      auStack_13._0_8_ = auStack_16;
      auStack_13._8_8_ = uStack_27;
      MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                ((MVWorldObjectClient *)pMVar10,(Quaternion *)auStack_13,(MethodInfo *)0x0);
    }
    pMVar10 = (this->fields)._CubeModel_k__BackingField;
    if (pMVar10 != (MVCubeModelInstance *)0x0) {
      if (breakid != (pMVar10->fields)._._._.id) {
        auStack_30._0_8_ = (this->fields).MoveableChildren;
        if ((List_1_MVMovable_ *)auStack_30._0_8_ == (List_1_MVMovable_ *)0x0)
        goto code_?;
        if (iRam_? != 0) {
          uVar31 = (uint)((ulonglong)auStack_13 >> 0xc);
          uVar32 = (ulonglong)((uVar31 & 0x1fffff) >> 6);
          do {
            uVar33 = *(ulonglong *)(uVar32 * 8 + 0xADDR);
            puVar34 = (ulonglong *)(uVar32 * 8 + 0xADDR);
            LOCK();
            bVar35 = uVar33 == *puVar34;
            if (bVar35) {
              *puVar34 = uVar33 | 1L << (uVar31 & 0x3f);
            }
            UNLOCK();
          } while (!bVar35);
        }
        auStack_13._8_8_ =
             (ulonglong)(uint)(((List_1_MVMovable_ *)auStack_30._0_8_)->fields)._version << 0x20;
        uStack_36 = 0;
        auStack_30._8_8_ = auStack_13._8_8_;
        pMStack_37 = (MVMovable *)0x0;
        auStack_16 = (undefined1  [8])0x0;
        uStack_27 = auStack_30;
        auStack_13._0_8_ = auStack_30._0_8_;
        while (bVar38 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  ((List_1_T_Enumerator_System_Object_ *)auStack_30,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__MoveNext__
                                  ), bVar38 != 0) {
          if (pMStack_37 == (MVMovable *)0x0) goto code_?;
          MVMovable_Move(pMStack_37,directionFactor,breakid,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateMoverTree(Single) */

void Assembly-CSharp.dll::MVMovable::MVMovable_UpdateMoverTree
               (MVMovable *this,float directionFactor,MethodInfo *method)

{
  pMVar1 = (this->fields).parentMover;
  while (pMVar1 != (MVMovable *)0x0) {
    this = (this->fields).parentMover;
    if (this == (MVMovable *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pMVar1 = (this->fields).parentMover;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMovable>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0) {
    return;
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar3 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar4 = (pMVar3->fields)._MoveableController_k__BackingField,
     pMVar4 == (MoveableController *)0x0)) goto code_?;
  fVar5 = (pMVar4->fields).time;
  if ((this->fields).pausedMovement == 0) {
    if (directionFactor < 0.0) {
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      fVar5 = fVar5 - fVar6;
    }
    (this->fields).linearTime = 0.0;
    (this->fields).fraction = 0.0;
    if ((this->fields).timeToEnd != 0.0) {
      fVar6 = (float)FUN_?();
      (this->fields).linearTime = fVar6;
      fVar6 = fVar6 / (this->fields).timeToEnd;
      (this->fields).fraction = fVar6;
      if (_UNK_? < (this->fields).timeToEnd) {
        (this->fields).fraction = TypeRef__System__Activator__T._0_4_ - fVar6;
      }
    }
  }
  else {
    (this->fields).linearTime = (this->fields).fraction * (this->fields).timeToEnd;
  }
  puVar7 = (undefined8 *)
            (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                      (&VStack_8,this,(this->klass->vtable).get_WorldPosition_1.method);
  uStack_9 = *puVar7;
  fVar6 = *(float *)(puVar7 + 1);
  if ((this->fields).parentMover != (MVMovable *)0x0) {
    pMVar10 = (((this->fields).parentMover)->fields)._CubeModel_k__BackingField;
    if (pMVar10 == (MVCubeModelInstance *)0x0) goto code_?;
    puVar7 = (undefined8 *)(*(pMVar10->klass->vtable).get_WorldPosition_1.methodPtr)(&VStack_11);
    VStack_8._0_8_ = *puVar7;
    fVar6 = *(float *)(puVar7 + 1);
    pMVar1 = (this->fields).parentMover;
    if ((pMVar1 == (MVMovable *)0x0) ||
       (pMVar10 = (pMVar1->fields)._CubeModel_k__BackingField, pMVar10 == (MVCubeModelInstance *)0x0))
    goto code_?;
    pQVar12 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                        ((Quaternion *)auStack_13,(MVWorldObjectClient *)pMVar10,(MethodInfo *)0x0);
    pLVar14 = *(List_1_MVMovable_ **)pQVar12;
    puVar15 = *(undefined1 **)&pQVar12->z;
    puVar7 = (undefined8 *)
              (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                        (auStack_16,this,(this->klass->vtable).get_WorldPosition_1.method);
    VStack_11._0_8_ = *puVar7;
    fVar17 = *(float *)(puVar7 + 1);
    pMVar1 = (this->fields).parentMover;
    if (pMVar1 == (MVMovable *)0x0) goto code_?;
    puVar7 = (undefined8 *)
              (*(pMVar1->klass->vtable).get_WorldPosition_1.methodPtr)
                        (auStack_16,pMVar1,(pMVar1->klass->vtable).get_WorldPosition_1.method);
    VStack_11.z = fVar17 - *(float *)(puVar7 + 1);
    VStack_11.y = VStack_11.y - (float)((ulonglong)*puVar7 >> 0x20);
    VStack_11.x = VStack_11.x - (float)*puVar7;
    auStack_13._0_8_ = pLVar14;
    auStack_13._8_8_ = puVar15;
    pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)auStack_16,(Quaternion *)auStack_13,&VStack_11,(MethodInfo *)0x0
                        );
    uVar19._0_4_ = pVVar18->x;
    uVar19._4_4_ = pVVar18->y;
    fVar6 = fVar6 + pVVar18->z;
    uStack_9 = CONCAT44(VStack_8.y + uVar19._4_4_,VStack_8.x + (float)uVar19);
    VStack_8._0_8_ = uVar19;
  }
  if (_UNK_? < (this->fields).timeToEnd) {
    if (*(int *)&(TypeInfo__MVMovable->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MVMovable);
    }
    TypeInfo__MVMovable->static_fields->direction = 1.0;
    pIVar20 = (this->klass->vtable).get_WorldVelocity.methodPtr;
    fVar17 = (this->fields).timeToEnd;
    pfVar21 = &(this->fields).linearTime;
    if (*pfVar21 <= fVar17 && fVar17 != *pfVar21) {
      puVar7 = (undefined8 *)
                (*pIVar20)(auStack_16,this,(this->klass->vtable).get_WorldVelocity.method);
      fVar17 = (this->fields).linearTime;
      VStack_8._0_8_ = *puVar7;
      fVar22 = *(float *)(puVar7 + 1);
      (this->fields).localPos.x = VStack_8.x * fVar17;
      (this->fields).localPos.y = VStack_8.y * fVar17;
      (this->fields).localPos.z = fVar22 * fVar17;
    }
    else {
      puVar7 = (undefined8 *)(*pIVar20)();
      fVar17 = (this->fields).timeToEnd;
      VStack_8._0_8_ = *puVar7;
      fVar22 = (fVar17 + fVar17) - (this->fields).linearTime;
      fVar17 = *(float *)(puVar7 + 1);
      (this->fields).localPos.x = fVar22 * VStack_8.x;
      (this->fields).localPos.y = fVar22 * VStack_8.y;
      (this->fields).localPos.z = fVar22 * fVar17;
      if (*(int *)&(TypeInfo__MVMovable->_1).field_0x1c == 0) {
        FUN_?();
      }
      TypeInfo__MVMovable->static_fields->direction = -1.0;
    }
    if (0.0 < directionFactor) {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar3 == (MVWorldObjectClientManager *)0x0) ||
         (pMVar4 = (pMVar3->fields)._MoveableController_k__BackingField,
         pMVar4 == (MoveableController *)0x0)) goto code_?;
      this_00 = (pMVar4->fields).Velocities;
      key = (this->fields)._._._.goId;
      if (*(int *)&(TypeInfo__MVMovable->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MVMovable);
      }
      fVar17 = TypeInfo__MVMovable->static_fields->direction;
      plVar23 = (longlong *)
                (*(this->klass->vtable).get_WorldVelocity.methodPtr)
                          (auStack_16,this,(this->klass->vtable).get_WorldVelocity.method);
      pLVar14 = (List_1_MVMovable_ *)*plVar23;
      fVar22 = *(float *)(plVar23 + 1);
      fVar24 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      auStack_16 = (undefined1  [8])pLVar14;
      if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      VStack_8.y = fVar17 * (float)((ulonglong)pLVar14 >> 0x20) * directionFactor * fVar24;
      VStack_8.x = fVar17 * SUB84(pLVar14,0) * directionFactor * fVar24;
      VStack_8.z = fVar17 * fVar22 * directionFactor * fVar24;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]::
      Dictionary_2_System_Int32_UnityEngine_Vector3__TryInsert
                (this_00,key,&VStack_8,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar20 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                 ->klass->rgctx_data[0x22].method);
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar17 = (pVVar25->zeroVector).z;
    fVar22 = (pVVar25->zeroVector).y;
    (this->fields).localPos.x = (pVVar25->zeroVector).x;
    (this->fields).localPos.y = fVar22;
    (this->fields).localPos.z = fVar17;
  }
  pMVar10 = (this->fields)._CubeModel_k__BackingField;
  auStack_16 = *(undefined1 (*) [8])&(this->fields).localPos;
  uVar26._0_4_ = (float)uStack_9 + SUB84(auStack_16,0);
  if (pMVar10 != (MVCubeModelInstance *)0x0) {
    uVar26._4_4_ = uStack_9._4_4_ + (float)((ulonglong)auStack_16 >> 0x20);
    VStack_8._0_8_ = uVar26;
    VStack_8.z = fVar6 + (this->fields).localPos.z;
    (*(pMVar10->klass->vtable).set_WorldPosition.methodPtr)
              (pMVar10,&VStack_8,(pMVar10->klass->vtable).set_WorldPosition.method);
    fVar6 = (this->fields).angularSpeed;
    auStack_16._0_4_ = (this->fields).angularDirection.x;
    auStack_16._4_4_ = (this->fields).angularDirection.y;
    VStack_8.z = fVar6 * (this->fields).angularDirection.z * fVar5;
    VStack_8.y = fVar6 * (float)auStack_16._4_4_ * fVar5;
    VStack_8.x = fVar6 * (float)auStack_16._0_4_ * fVar5;
    FUN_?(&VStack_8);
    fVar5 = (this->fields).angularSpeed;
    auStack_16._0_4_ = (this->fields).angularDirection.x;
    auStack_16._4_4_ = (this->fields).angularDirection.y;
    fVar22 = fVar5 * (this->fields).angularDirection.z;
    fVar17 = fVar5 * (float)auStack_16._4_4_;
    fVar5 = fVar5 * (float)auStack_16._0_4_;
    VStack_8.y = fVar17;
    VStack_8.x = fVar5;
    VStack_8.z = fVar22;
    fVar6 = (float)FUN_?(&VStack_8);
    if (_UNK_? < fVar6) {
      VStack_8.z = fVar22 / fVar6;
      VStack_8.y = fVar17 / fVar6;
      VStack_8.x = fVar5 / fVar6;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_8.x = (pVVar25->zeroVector).x;
      VStack_8.y = (pVVar25->zeroVector).y;
      VStack_8.z = (pVVar25->zeroVector).z;
    }
    auStack_16 = (undefined1  [8])0x0;
    uStack_27 = (undefined1 *)0x0;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar19 = func_?(&UNK_?);
      FUN_?(uVar19,0);
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    pQVar12 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                        ((Quaternion *)auStack_13,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
    fVar5 = pQVar12->x;
    fVar6 = pQVar12->y;
    fVar17 = pQVar12->z;
    fVar22 = pQVar12->w;
    if ((this->fields).parentMoverID != -1) {
      pMVar1 = (this->fields).parentMover;
      if ((pMVar1 == (MVMovable *)0x0) ||
         (pMVar10 = (pMVar1->fields)._CubeModel_k__BackingField, pMVar10 == (MVCubeModelInstance *)0x0
         )) goto code_?;
      pQVar12 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                          ((Quaternion *)auStack_13,(MVWorldObjectClient *)pMVar10,(MethodInfo *)0x0)
      ;
      fVar5 = pQVar12->x;
      fVar6 = pQVar12->y;
      fVar17 = pQVar12->z;
      fVar22 = pQVar12->w;
    }
    if ((this->fields).pausedMovement == 0) {
      pMVar10 = (this->fields)._CubeModel_k__BackingField;
      uVar28 = auStack_16._0_4_;
      uVar29 = auStack_16._4_4_;
      fVar24 = (float)auStack_16._4_4_ * fVar17;
      auStack_16._4_4_ =
           ((float)auStack_16._4_4_ * fVar22 + uStack_27._4_4_ * fVar6 +
           (float)auStack_16._0_4_ * fVar17) - (float)uStack_27 * fVar5;
      auStack_16._0_4_ =
           ((float)auStack_16._0_4_ * fVar22 + uStack_27._4_4_ * fVar5 + (float)uStack_27 * fVar6)
           - fVar24;
      uStack_27 = (undefined1 *)
                  CONCAT44(((uStack_27._4_4_ * fVar22 - (float)uVar28 * fVar5) -
                           (float)uVar29 * fVar6) - (float)uStack_27 * fVar17,
                           ((float)uStack_27 * fVar22 + uStack_27._4_4_ * fVar17 +
                           (float)uVar29 * fVar5) - (float)uVar28 * fVar6);
      if (pMVar10 == (MVCubeModelInstance *)0x0) goto code_?;
      auStack_13._0_8_ = auStack_16;
      auStack_13._8_8_ = uStack_27;
      MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                ((MVWorldObjectClient *)pMVar10,(Quaternion *)auStack_13,(MethodInfo *)0x0);
    }
    pMVar10 = (this->fields)._CubeModel_k__BackingField;
    if (pMVar10 != (MVCubeModelInstance *)0x0) {
      if ((pMVar10->fields)._._._.id != 0) {
        auStack_30._0_8_ = (this->fields).MoveableChildren;
        if ((List_1_MVMovable_ *)auStack_30._0_8_ == (List_1_MVMovable_ *)0x0)
        goto code_?;
        if (iRam_? != 0) {
          uVar31 = (uint)((ulonglong)auStack_13 >> 0xc);
          uVar32 = (ulonglong)((uVar31 & 0x1fffff) >> 6);
          do {
            uVar33 = *(ulonglong *)(uVar32 * 8 + 0xADDR);
            puVar34 = (ulonglong *)(uVar32 * 8 + 0xADDR);
            LOCK();
            bVar35 = uVar33 == *puVar34;
            if (bVar35) {
              *puVar34 = uVar33 | 1L << (uVar31 & 0x3f);
            }
            UNLOCK();
          } while (!bVar35);
        }
        auStack_13._8_8_ =
             (ulonglong)(uint)(((List_1_MVMovable_ *)auStack_30._0_8_)->fields)._version << 0x20;
        uStack_36 = 0;
        auStack_30._8_8_ = auStack_13._8_8_;
        pMStack_37 = (MVMovable *)0x0;
        auStack_16 = (undefined1  [8])0x0;
        uStack_27 = auStack_30;
        auStack_13._0_8_ = auStack_30._0_8_;
        while (bVar38 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  ((List_1_T_Enumerator_System_Object_ *)auStack_30,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__MoveNext__
                                  ), bVar38 != 0) {
          if (pMStack_37 == (MVMovable *)0x0) goto code_?;
          MVMovable_Move(pMStack_37,directionFactor,0,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVMovable() */

void Assembly-CSharp.dll::MVMovable::MVMovable__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVMovable);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVMovable->static_fields->direction = 1.0;
  return;
}


/* MVMovable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVMovable::MVMovable__ctor
               (MVMovable *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMovable>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVMovable>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_MVMovable_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVMovable>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVMovable>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).MoveableChildren = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).MoveableChildren >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar6->zeroVector).y;
  fVar8 = (pVVar6->zeroVector).z;
  (this->fields).localPos.x = (pVVar6->zeroVector).x;
  (this->fields).localPos.y = fVar7;
  (this->fields).localPos.z = fVar8;
  (this->fields).distance = 5.0;
  (this->fields).parentMoverID = -1;
  (this->fields).isVisible = 1;
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  piVar9 = &(this->fields)._._._.interactionFlags;
  *piVar9 = *piVar9 | 0x2000;
  return;
}


/* Vector3 get_AngularDirection() */

Vector3 * Assembly-CSharp.dll::MVMovable::MVMovable_get_AngularDirection
                    (Vector3 *__return_storage_ptr__,MVMovable *this,MethodInfo *method)

{
  fVar1 = (this->fields).angularDirection.z;
  fVar2 = (this->fields).angularDirection.y;
  __return_storage_ptr__->x = (this->fields).angularDirection.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Vector3 get_AngularVelocity() */

Vector3 * Assembly-CSharp.dll::MVMovable::MVMovable_get_AngularVelocity
                    (Vector3 *__return_storage_ptr__,MVMovable *this,MethodInfo *method)

{
  fVar1 = (this->fields).angularSpeed;
  uVar2 = (this->fields).angularDirection.x;
  uVar3 = (this->fields).angularDirection.y;
  fVar4 = (this->fields).angularDirection.z;
  __return_storage_ptr__->x = fVar1 * (float)uVar2;
  __return_storage_ptr__->y = fVar1 * (float)uVar3;
  __return_storage_ptr__->z = fVar1 * fVar4;
  return __return_storage_ptr__;
}


/* Int32 get_CubeModelID() */

int32_t Assembly-CSharp.dll::MVMovable::MVMovable_get_CubeModelID
                  (MVMovable *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._CubeModel_k__BackingField;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    return (pMVar1->fields)._._._.id;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Boolean get_IsRoot() */

bool Assembly-CSharp.dll::MVMovable::MVMovable_get_IsRoot(MVMovable *this,MethodInfo *method)

{
  return (this->fields).parentMover == (MVMovable *)0x0;
}


/* Quaternion get_OrgRotation() */

Quaternion *
Assembly-CSharp.dll::MVMovable::MVMovable_get_OrgRotation
          (Quaternion *__return_storage_ptr__,MVMovable *this,MethodInfo *method)

{
  fVar1 = (this->fields).orgRotation.y;
  fVar2 = (this->fields).orgRotation.z;
  fVar3 = (this->fields).orgRotation.w;
  __return_storage_ptr__->x = (this->fields).orgRotation.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}


/* Int32 get_ParentMoverID() */

int32_t Assembly-CSharp.dll::MVMovable::MVMovable_get_ParentMoverID
                  (MVMovable *this,MethodInfo *method)

{
  return (this->fields).parentMoverID;
}


/* Boolean get_PausedMovement() */

bool Assembly-CSharp.dll::MVMovable::MVMovable_get_PausedMovement
               (MVMovable *this,MethodInfo *method)

{
  return (this->fields).pausedMovement;
}


/* MVMovable get_RootMover() */

MVMovable *
Assembly-CSharp.dll::MVMovable::MVMovable_get_RootMover(MVMovable *this,MethodInfo *method)

{
  for (; (this->fields).parentMover != (MVMovable *)0x0; this = (this->fields).parentMover) {
  }
  return this;
}


/* Vector3 get_Velocity() */

Vector3 * Assembly-CSharp.dll::MVMovable::MVMovable_get_Velocity
                    (Vector3 *__return_storage_ptr__,MVMovable *this,MethodInfo *method)

{
  fVar1 = (this->fields).velocity.z;
  fVar2 = (this->fields).velocity.y;
  __return_storage_ptr__->x = (this->fields).velocity.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::MVMovable::MVMovable_get_Visible(MVMovable *this,MethodInfo *method)

{
  pMVar1 = (this->fields).movableVisualization;
  if (pMVar1 == (MovableVisualization *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pMVar1->fields).isVisible == 0) {
    return 0;
  }
  return (pMVar1->fields).canBeVisible;
}


/* Vector3 get_WorldVelocity() */

Vector3 * Assembly-CSharp.dll::MVMovable::MVMovable_get_WorldVelocity
                    (Vector3 *__return_storage_ptr__,MVMovable *this,MethodInfo *method)

{
  obj = (this->fields)._._._.transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  pvVar11 = (obj->fields)._._.m_CachedPtr;
  if (pvVar11 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar11,&uStack_3);
  uVar13 = (this->fields).velocity.x;
  uVar14 = (this->fields).velocity.y;
  fVar15 = (this->fields).velocity.z;
  __return_storage_ptr__->x =
       (float)uStack_5 * (float)uVar14 + (float)uStack_3 * (float)uVar13 + (float)uStack_7 * fVar15
       + (float)uStack_9 * 0.0;
  __return_storage_ptr__->y =
       uStack_5._4_4_ * (float)uVar14 + uStack_3._4_4_ * (float)uVar13 + uStack_7._4_4_ * fVar15 +
       uStack_9._4_4_ * 0.0;
  __return_storage_ptr__->z =
       (float)uStack_6 * (float)uVar14 + (float)uStack_4 * (float)uVar13 + (float)uStack_8 * fVar15
       + (float)uStack_10 * 0.0;
  return __return_storage_ptr__;
}


/* Void set_PausedMovement(Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_set_PausedMovement
               (MVMovable *this,bool value,MethodInfo *method)

{
  (this->fields).pausedMovement = value;
  return;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_set_Visible
               (MVMovable *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).movableVisualization;
  (this->fields).isVisible = value;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar1 != (MovableVisualization *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pMVar1 = (this->fields).movableVisualization;
      if (pMVar1 == (MovableVisualization *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (pMVar1->fields).canBeVisible = value;
      MovableVisualization::MovableVisualization_SetMeshRenderers
                (pMVar1,value,(pMVar1->fields).cmbClone,(MethodInfo *)0x0);
    }
  }
  return;
}

