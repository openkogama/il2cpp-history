
/* Void Changed(CubeModelChangedEventArgs) */

void Assembly-CSharp.dll::MVRotator::MVRotator_Changed
               (MVRotator *this,CubeModelChangedEventArgs *cubeModelChangedEventArgs,
               MethodInfo *method)

{
  this_00 = (this->fields)._._CubeModel_k__BackingField;
  if (this_00 != (MVCubeModelInstance *)0x0) {
    pBVar1 = MVCubeModelBase::MVCubeModelBase_GetWorldBounds
                       (&BStack_2,(MVCubeModelBase *)this_00,(MethodInfo *)0x0);
    fVar3 = (pBVar1->m_Center).x;
    fVar4 = (pBVar1->m_Center).y;
    fVar5 = (pBVar1->m_Center).z;
    fStack_6 = (pBVar1->m_Extents).x;
    uVar7 = (pBVar1->m_Extents).y;
    uVar8 = (pBVar1->m_Extents).z;
    fStack_9 = fVar3;
    fStack_10 = fVar4;
    fStack_11 = fVar5;
    fStack_12 = (float)uVar7;
    fStack_13 = (float)uVar8;
    puVar14 = (undefined8 *)
             (*(this->klass->vtable).get_Position.methodPtr)
                       (&VStack_15,this,(this->klass->vtable).get_Position.method);
    BStack_2.m_Center._0_8_ = *puVar14;
    VStack_15.z = *(float *)(puVar14 + 1) - fVar5;
    VStack_15.y = BStack_2.m_Center.y - fVar4;
    VStack_15.x = BStack_2.m_Center.x - fVar3;
    fVar3 = (float)FUN_?(&VStack_15);
    VStack_15.y = fStack_12;
    VStack_15.x = fStack_6;
    VStack_15.z = fStack_13;
    fVar4 = (float)FUN_?(&VStack_15);
    pCVar16 = (this->fields).cullingSubscriberBase;
    puVar14 = (undefined8 *)
             (*(this->klass->vtable).get_Position.methodPtr)
                       (&BStack_2,this,(this->klass->vtable).get_Position.method);
    if (pCVar16 != (CullingSubscriberBase *)0x0) {
      VStack_15._0_8_ = *puVar14;
      VStack_15.z = *(float *)(puVar14 + 1);
      CullingSubscriberBase::CullingSubscriberBase_Setup
                (pCVar16,fVar4 + fVar3,&VStack_15,(MethodInfo *)0x0);
      pCVar16 = (this->fields).cullingSubscriberBase;
      if (pCVar16 != (CullingSubscriberBase *)0x0) {
        (pCVar16->fields)._DistanceBandIndex_k__BackingField = 2;
        return;
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVRotator::MVRotator_Destroy(MVRotator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Remove_MVRotator_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRotator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVRotator->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVRotator);
  }
  this_00 = TypeInfo__MVRotator->static_fields->selectedRotators;
  if (this_00 != (HashSet_1_MVRotator_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Remove
              ((HashSet_1_System_Object_ *)this_00,(Object *)this,
               MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Remove_MVRotator_);
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
      if ((this != (MVRotator *)0x0) &&
         (pDVar3 = (pMVar2->fields).MoveControllers,
         pDVar3 != (Dictionary_2_System_Int32_MVMovable_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(this->fields)._._._._.goId,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Remove_int_
                  );
        this_01 = (pMVar2->fields).Velocities;
        if (this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__Remove
                    (this_01,(this->fields)._._._._.goId,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Remove_int_
                    );
          if ((this->fields)._._CubeModel_k__BackingField != (MVCubeModelInstance *)0x0) {
            pDVar3 = (pMVar2->fields).CubeModelMovableMap;
            if (pDVar3 == (Dictionary_2_System_Int32_MVMovable_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,
                       (((this->fields)._._CubeModel_k__BackingField)->fields)._._._.id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Remove_int_
                      );
          }
          MVWorldObjectClient::MVWorldObjectClient_Destroy
                    ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
          if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
            CullingSubscriberBase::CullingSubscriberBase_Destroy
                      ((this->fields).cullingSubscriberBase,(MethodInfo *)0x0);
            bVar4 = iRam_? != 0;
            (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
            if (bVar4) {
              uVar5 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
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
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVRotator::MVRotator_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVRotator *this,BoundsContext__Enum boundsContext
                   ,MethodInfo *method)

{
  method_00 = (MethodInfo *)(ulonglong)boundsContext;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = 0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  woList = MVGroup::MVGroup_get_Children((MVGroup *)this,(MethodInfo *)0x0);
  pBVar1 = MVGroup::MVGroup_ComputeBoundsForWOs(aBStack_2,woList,boundsContext,(MethodInfo *)0x0);
  fVar3 = (pBVar1->m_Center).x;
  fVar4 = (pBVar1->m_Center).y;
  fVar5 = (pBVar1->m_Center).z;
  fVar6 = (pBVar1->m_Extents).x;
  fVar7 = (pBVar1->m_Extents).y;
  fVar8 = (pBVar1->m_Extents).z;
  (__return_storage_ptr__->m_Center).x = fVar3;
  (__return_storage_ptr__->m_Center).y = fVar4;
  (__return_storage_ptr__->m_Center).z = fVar5;
  (__return_storage_ptr__->m_Extents).x = fVar6;
  (__return_storage_ptr__->m_Extents).y = fVar7;
  (__return_storage_ptr__->m_Extents).z = fVar8;
  if (boundsContext == BoundsContext__Enum_Preview) {
    uVar9 = (__return_storage_ptr__->m_Extents).x;
    uVar10 = (__return_storage_ptr__->m_Extents).y;
    aBStack_2[0].m_Center.z = (float)((uint)(__return_storage_ptr__->m_Center).z ^ _UNK_?);
    fVar5 = (__return_storage_ptr__->m_Extents).z;
    aBStack_2[0].m_Extents.x = (float)uVar9 * TypeRef__System__Activator__T._0_4_ * _UNK_?;
    aBStack_2[0].m_Center.y = (float)((uint)fVar4 ^ _UNK_?);
    aBStack_2[0].m_Center.x = (float)((uint)fVar3 ^ _UNK_?);
    aBStack_2[0].m_Extents.z = (fVar5 + fVar5) * _UNK_?;
    aBStack_2[0].m_Extents.y = ((float)uVar10 + (float)uVar10) * _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate_1
              (__return_storage_ptr__,aBStack_2,method_00);
  }
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVRotator::MVRotator_Initialize(MVRotator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<IModelingConstraint>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVRotator__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVRotator____c__DisplayClass17_0___Initialize_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRotator____c__DisplayClass17_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Rotator_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__init___movable_s_cube_model_is_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVRotator____c__DisplayClass17_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    MVMovable::MVMovable_Initialize((MVMovable *)this,(MethodInfo *)0x0);
    fVar6 = (this->fields)._.angularSpeed;
    uVar7 = (this->fields)._.angularDirection.x;
    uVar8 = (this->fields)._.angularDirection.y;
    piVar9 = &(this->fields)._._._._.interactionFlags;
    *piVar9 = *piVar9 | 0x9100;
    fVar10 = (this->fields)._.angularDirection.z;
    (this->fields)._InitAngularVelocity_k__BackingField.x = fVar6 * (float)uVar7;
    (this->fields)._InitAngularVelocity_k__BackingField.y = fVar6 * (float)uVar8;
    (this->fields)._InitAngularVelocity_k__BackingField.z = fVar6 * fVar10;
    *(undefined4 *)&object[1].monitor = 0xfff1fff1;
    *(undefined2 *)((longlong)&object[1].monitor + 4) = 0xfff1;
    *(undefined4 *)((longlong)&object[1].monitor + 6) = 0xf000f;
    *(undefined2 *)((longlong)&object[2].klass + 2) = 0xf;
    if ((this->fields)._._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0) {
      pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&this->fields,(MethodInfo *)0x0);
      pSVar11 = mscorlib.dll::System::String::String_Concat_5
                          (StringLiteral_Rotator_,pSVar11,
                           StringLiteral__init___movable_s_cube_model_is_,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
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
      pIVar12 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar12 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar12,2,pSVar11);
      return;
    }
    pMVar14 = (this->fields)._._CubeModel_k__BackingField;
    this_00 = (Func_1_UnityEngine_Vector2Int_ *)
              FUN_?(TypeInfo__System__Func<IModelingConstraint>);
    mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::Func_1_UnityEngine_Vector2Int___ctor
              (this_00,object,MethodInfo__MVRotator____c__DisplayClass17_0___Initialize_b__0__,
               (MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (pMVar14->fields)._._ModelingConstraintBuilder_k__BackingField =
         (Func_1_IModelingConstraint_ *)this_00;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(pMVar14->fields)._._ModelingConstraintBuilder_k__BackingField >>
                     0xc);
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
    pMVar14 = (this->fields)._._CubeModel_k__BackingField;
    if (pMVar14 != (MVCubeModelInstance *)0x0) {
      piVar9 = &(pMVar14->fields)._._.interactionFlags;
      *piVar9 = *piVar9 & 0xfffffffffffffff7;
      pMVar14 = (this->fields)._._CubeModel_k__BackingField;
      pUVar15 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<EditStateEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar15,(Object *)this,
                 MethodInfo__MVRotator__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar14 != (MVCubeModelInstance *)0x0) {
        MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
                  ((MVCubeModelBase *)pMVar14,(EventHandler_1_EditStateEventArgs_ *)pUVar15,
                   (MethodInfo *)0x0);
        if (((uint)(this->fields)._._._._.interactionFlags >> 0x11 & 1) == 0) {
code_?:
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__CullingSubscriberBase);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__MVRotator__Changed_CubeModelChangedEventArgs_);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__MVRotator__OnPositionChanged_System__Object__PositionChangedEventArgs_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__MVRotator__OnStateChanged_UnityEngine__CullingGroupEvent_);
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
                     FUN_?(
                                  TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                  );
          FUN_?(callback,this);
          this_01 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
          CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_01,callback,(MethodInfo *)0x0);
          bVar1 = iRam_? != 0;
          (this->fields).cullingSubscriberBase = this_01;
          if (bVar1) {
            uVar2 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
            lVar16 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar3 = *(ulonglong *)(lVar16 + 0xADDR);
              puVar5 = (ulonglong *)(lVar16 + 0xADDR);
              LOCK();
              bVar1 = uVar3 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar3 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          MVRotator_SetupCullingSphere(this,(MethodInfo *)0x0);
          pMVar14 = (this->fields)._._CubeModel_k__BackingField;
          if (pMVar14 == (MVCubeModelInstance *)0x0) {
            FUN_?();
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pAVar17 = (pMVar14->fields)._.Changed;
          this_02 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_02,(Object *)this,
                     MethodInfo__MVRotator__Changed_CubeModelChangedEventArgs_,(MethodInfo *)0x0);
          pDVar18 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar17,(Delegate *)this_02,(MethodInfo *)0x0);
          pAVar19 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
          if (pDVar18 == (Delegate *)0x0) {
            (pMVar14->fields)._.Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
          }
          else {
            pAVar17 = (Action_1_CubeModelChangedEventArgs_ *)
                      FUN_?(pDVar18,TypeInfo__System__Action<CubeModelChangedEventArgs>);
            if (pAVar17 == (Action_1_CubeModelChangedEventArgs_ *)0x0) {
              FUN_?(pDVar18,pAVar19);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            (pMVar14->fields)._.Changed = pAVar17;
            pAVar19 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
            lVar16 = FUN_?(pDVar18,TypeInfo__System__Action<CubeModelChangedEventArgs>);
            if (lVar16 == 0) {
              FUN_?(pDVar18,pAVar19);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&(pMVar14->fields)._.Changed >> 0xc);
            lVar16 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar3 = *(ulonglong *)(lVar16 + 0xADDR);
              puVar5 = (ulonglong *)(lVar16 + 0xADDR);
              LOCK();
              bVar1 = uVar3 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar3 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          pUVar20 = (this->fields)._._._._.PositionChanged;
          pUVar15 = (UnityAction_2_System_Object_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar15,(Object *)this,
                     MethodInfo__MVRotator__OnPositionChanged_System__Object__PositionChangedEventArgs_
                     ,(MethodInfo *)0x0);
          pDVar18 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pUVar20,(Delegate *)pUVar15,(MethodInfo *)0x0);
          pUVar21 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
          if (pDVar18 == (Delegate *)0x0) {
            (this->fields)._._._._.PositionChanged =
                 (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
          }
          else {
            pUVar20 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                      FUN_?(pDVar18,
                                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                   );
            if (pUVar20 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
              FUN_?(pDVar18,pUVar21);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            (this->fields)._._._._.PositionChanged = pUVar20;
            pUVar21 = 
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
            ;
            lVar16 = FUN_?(pDVar18,
                                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                  );
            if (lVar16 == 0) {
              FUN_?(pDVar18,pUVar21);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&(this->fields)._._._._.PositionChanged >> 0xc);
            lVar16 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar3 = *(ulonglong *)(lVar16 + 0xADDR);
              puVar5 = (ulonglong *)(lVar16 + 0xADDR);
              LOCK();
              bVar1 = uVar3 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar3 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          return;
        }
        pMVar14 = (this->fields)._._CubeModel_k__BackingField;
        if (pMVar14 != (MVCubeModelInstance *)0x0) {
          (*(pMVar14->klass->vtable).AddPreviewBox.methodPtr)
                    (pMVar14,(pMVar14->klass->vtable).AddPreviewBox.method);
          pMVar14 = (this->fields)._._CubeModel_k__BackingField;
          if (pMVar14 != (MVCubeModelInstance *)0x0) {
            (pMVar14->fields)._._._.previewOwnerProfileId =
                 (this->fields)._._._._._.previewOwnerProfileId;
            pMVar14 = (this->fields)._._CubeModel_k__BackingField;
            if (pMVar14 != (MVCubeModelInstance *)0x0) {
              piVar9 = &(pMVar14->fields)._._.interactionFlags;
              *piVar9 = *piVar9 | 0x20000;
              goto code_?;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void MVCubeModelBase_BeingEditedChanged(Object, EditStateEventArgs) */

void Assembly-CSharp.dll::MVRotator::MVRotator_MVCubeModelBase_BeingEditedChanged
               (MVRotator *this,Object *sender,EditStateEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (sender != (Object *)0x0) {
    bVar1 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    if ((bVar1 <= (sender->klass->_1).naturalAligment) &&
       ((MVCubeModelBase__Class *)(sender->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] ==
        TypeInfo__MVCubeModelBase)) {
      (this->fields)._.pausedMovement = *(bool *)&sender[0x15].monitor;
      return;
    }
    FUN_?(sender);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPositionChanged(Object, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVRotator::MVRotator_OnPositionChanged
               (MVRotator *this,Object *sender,PositionChangedEventArgs *positionChangedEventArgs,
               MethodInfo *method)

{
  pCVar1 = (this->fields).cullingSubscriberBase;
  puVar2 = (undefined8 *)
           (*(this->klass->vtable).get_Position.methodPtr)
                     (auStack_3,this,(this->klass->vtable).get_Position.method);
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    uVar4 = *puVar2;
    fVar5 = *(float *)(puVar2 + 1);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    pBVar6 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar6 != (BoundingSphere__Array *)0x0) {
      uVar7 = (pCVar1->fields)._CullingIndex_k__BackingField;
      if (uVar7 < (uint)pBVar6->max_length) {
        pBVar6->vector[(int)uVar7].position.x = (float)(int)uVar4;
        pBVar6->vector[(int)uVar7].position.y = (float)(int)((ulonglong)uVar4 >> 0x20);
        pBVar6->vector[(int)uVar7].position.z = fVar5;
        return;
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnSelectedChanged(Boolean) */

void Assembly-CSharp.dll::MVRotator::MVRotator_OnSelectedChanged
               (MVRotator *this,bool selected,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Add_MVRotator_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Contains_MVRotator_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Remove_MVRotator_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<MVRotator>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRotator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (selected == 0) {
    if (*(int *)&(TypeInfo__MVRotator->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MVRotator);
    }
    pHVar1 = TypeInfo__MVRotator->static_fields->selectedRotators;
    if (pHVar1 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Remove
              ((HashSet_1_System_Object_ *)pHVar1,(Object *)this,
               MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Remove_MVRotator_);
  }
  else {
    if (*(int *)&(TypeInfo__MVRotator->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MVRotator);
    }
    pHVar1 = TypeInfo__MVRotator->static_fields->selectedRotators;
    if (pHVar1 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__AddIfNotPresent
              ((HashSet_1_System_Object_ *)pHVar1,(Object *)this,
               MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Add_MVRotator_->klass->
               rgctx_data[0x15].method);
  }
  if (*(int *)&(TypeInfo__MVRotator->_1).field_0x1c == 0) {
    FUN_?();
  }
  pHVar1 = TypeInfo__MVRotator->static_fields->selectedRotators;
  if (pHVar1 != (HashSet_1_MVRotator_ *)0x0) {
    if ((pHVar1->fields)._count == 0) {
      bVar2 = 1;
    }
    else {
      if (*(int *)&(TypeInfo__MVRotator->_1).field_0x1c == 0) {
        FUN_?();
      }
      pHVar1 = TypeInfo__MVRotator->static_fields->selectedRotators;
      if (pHVar1 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
      if ((pHVar1->fields)._count == 1) {
        if (*(int *)&(TypeInfo__MVRotator->_1).field_0x1c == 0) {
          FUN_?();
        }
        pHVar1 = TypeInfo__MVRotator->static_fields->selectedRotators;
        if (pHVar1 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
        bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                HashSet_1_System_Object__Contains
                          ((HashSet_1_System_Object_ *)pHVar1,(Object *)this,
                           MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Contains_MVRotator_
                          );
      }
      else {
        bVar2 = 0;
      }
    }
    pMVar3 = (this->fields)._._CubeModel_k__BackingField;
    if (pMVar3 != (MVCubeModelInstance *)0x0) {
      bVar4 = 0;
      if ((pMVar3->fields)._.beingEdited == 0) {
        bVar4 = bVar2;
      }
      if (bVar4 != 0) {
        if (selected == 0) {
          if (*(int *)&(TypeInfo__MVRotator->_1).field_0x1c == 0) {
            FUN_?();
          }
          pHVar1 = TypeInfo__MVRotator->static_fields->selectedRotators;
          if (pHVar1 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
          bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                  HashSet_1_System_Object__Contains
                            ((HashSet_1_System_Object_ *)pHVar1,(Object *)this,
                             MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Contains_MVRotator_
                            );
        }
        else {
          bVar2 = 1;
        }
        (this->fields)._.pausedMovement = bVar2;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__SelectedEventArgs,selected,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this->fields)._._._._.SelectedChanged !=
          (UnityAction_2_MVWorldObjectClient_SelectedEventArgs_ *)0x0) {
        pUVar5 = (this->fields)._._._._.SelectedChanged;
        lVar6 = FUN_?(TypeInfo__SelectedEventArgs);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__EventArgs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
          FUN_?();
        }
        *(bool *)(lVar6 + 0x10) = selected;
        (*(pUVar5->fields)._._.invoke_impl)
                  ((pUVar5->fields)._._.method_code,this,lVar6,(pUVar5->fields)._._.method,unaff_RDI
                  );
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::MVRotator::MVRotator_OnStateChanged
               (MVRotator *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = (this->fields)._.movableVisualization;
    bVar2 = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
    if (this_00 != (MovableVisualization *)0x0) {
      bVar3 = (this_00->fields).isVisible;
      if (bVar2 == 0) {
        if (bVar3 != 0) {
          MovableVisualization::MovableVisualization_SetMeshRenderers
                    (this_00,0,(this_00->fields).cmbClone,(MethodInfo *)0x0);
        }
      }
      else if ((bVar3 == 0) && ((this_00->fields).canBeVisible != 0)) {
        this_01 = (this_00->fields).cmbClone;
        if (cRam_? == '\0') {
          FUN_?(&
                        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                        ,1,this_01,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar4 = 
        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
        ;
        if (this_01 != (GameObject *)0x0) {
          if ((
              UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(
                         UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                         );
          }
          p_Var6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren_4
                             (this_01,0,((pMVar4->field7_0x38).rgctx_data)->method);
          uVar5 = 0;
          if (p_Var6 != (_Il2CppFullySharedGenericType__Array *)0x0) {
            pp_Var10 = p_Var6->vector;
            while( true ) {
              if ((int)p_Var6->max_length <= (int)uVar5) {
                (this_00->fields).isVisible = 1;
                return;
              }
              if ((uint)p_Var6->max_length <= uVar5) {
                FUN_?();
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              obj = (Object *)*pp_Var10;
              if (obj == (Object *)0x0) break;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pOVar7 = obj[1].klass;
              if (pOVar7 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcVar6 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar8 = func_?(&UNK_?);
                FUN_?(uVar8,0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcRam_? = pcVar6;
              (*pcRam_?)(pOVar7);
              uVar5 = uVar5 + 1;
              pp_Var10 = pp_Var10 + 1;
            }
          }
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetWorldObjectToPurchased() */

void Assembly-CSharp.dll::MVRotator::MVRotator_SetWorldObjectToPurchased
               (MVRotator *this,MethodInfo *method)

{
  pMVar1 = this->klass;
  piVar2 = &(this->fields)._._._._.interactionFlags;
  *piVar2 = *piVar2 & 0xfffffffffffdffff;
  (this->fields)._._._._._.previewOwnerProfileId = 0;
  (*(pMVar1->vtable).RemovePreviewBox.methodPtr)(this,(pMVar1->vtable).RemovePreviewBox.method);
  pMVar3 = (this->fields)._._CubeModel_k__BackingField;
  if (pMVar3 != (MVCubeModelInstance *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar3->klass->vtable).SetWorldObjectToPurchased.methodPtr)
              (pMVar3,(pMVar3->klass->vtable).SetWorldObjectToPurchased.method);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::MVRotator::MVRotator_SetupCulling(MVRotator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVRotator__Changed_CubeModelChangedEventArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVRotator__OnPositionChanged_System__Object__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVRotator__OnStateChanged_UnityEngine__CullingGroupEvent_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
             FUN_?(
                          TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                          );
  FUN_?(callback,this);
  this_00 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_00,callback,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).cullingSubscriberBase = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  MVRotator_SetupCullingSphere(this,(MethodInfo *)0x0);
  pMVar6 = (this->fields)._._CubeModel_k__BackingField;
  if (pMVar6 == (MVCubeModelInstance *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pAVar8 = (pMVar6->fields)._.Changed;
  this_01 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_01,(Object *)this,MethodInfo__MVRotator__Changed_CubeModelChangedEventArgs_,
             (MethodInfo *)0x0);
  pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar8,(Delegate *)this_01,(MethodInfo *)0x0);
  pAVar10 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
  if (pDVar9 == (Delegate *)0x0) {
    (pMVar6->fields)._.Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
  }
  else {
    pAVar8 = (Action_1_CubeModelChangedEventArgs_ *)
             FUN_?(pDVar9,TypeInfo__System__Action<CubeModelChangedEventArgs>);
    if (pAVar8 == (Action_1_CubeModelChangedEventArgs_ *)0x0) {
      FUN_?(pDVar9,pAVar10);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (pMVar6->fields)._.Changed = pAVar8;
    pAVar10 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
    lVar3 = FUN_?(pDVar9,TypeInfo__System__Action<CubeModelChangedEventArgs>);
    if (lVar3 == 0) {
      FUN_?(pDVar9,pAVar10);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(pMVar6->fields)._.Changed >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pUVar11 = (this->fields)._._._._.PositionChanged;
  this_02 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_02,(Object *)this,
             MethodInfo__MVRotator__OnPositionChanged_System__Object__PositionChangedEventArgs_,
             (MethodInfo *)0x0);
  pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar11,(Delegate *)this_02,(MethodInfo *)0x0);
  pUVar12 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
  ;
  if (pDVar9 == (Delegate *)0x0) {
    (this->fields)._._._._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
  }
  else {
    pUVar11 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
             FUN_?(pDVar9,
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
    if (pUVar11 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      FUN_?(pDVar9,pUVar12);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (this->fields)._._._._.PositionChanged = pUVar11;
    pUVar12 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    lVar3 = FUN_?(pDVar9,
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
    if (lVar3 == 0) {
      FUN_?(pDVar9,pUVar12);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._._._.PositionChanged >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Void SetupCullingSphere() */

void Assembly-CSharp.dll::MVRotator::MVRotator_SetupCullingSphere
               (MVRotator *this,MethodInfo *method)

{
  this_00 = (this->fields)._._CubeModel_k__BackingField;
  if (this_00 != (MVCubeModelInstance *)0x0) {
    pBVar1 = MVCubeModelBase::MVCubeModelBase_GetWorldBounds
                       (&BStack_2,(MVCubeModelBase *)this_00,(MethodInfo *)0x0);
    fVar3 = (pBVar1->m_Center).x;
    fVar4 = (pBVar1->m_Center).y;
    fVar5 = (pBVar1->m_Center).z;
    fStack_6 = (pBVar1->m_Extents).x;
    uVar7 = (pBVar1->m_Extents).y;
    uVar8 = (pBVar1->m_Extents).z;
    fStack_9 = fVar3;
    fStack_10 = fVar4;
    fStack_11 = fVar5;
    fStack_12 = (float)uVar7;
    fStack_13 = (float)uVar8;
    puVar14 = (undefined8 *)
             (*(this->klass->vtable).get_Position.methodPtr)
                       (&VStack_15,this,(this->klass->vtable).get_Position.method);
    BStack_2.m_Center._0_8_ = *puVar14;
    VStack_15.z = *(float *)(puVar14 + 1) - fVar5;
    VStack_15.y = BStack_2.m_Center.y - fVar4;
    VStack_15.x = BStack_2.m_Center.x - fVar3;
    fVar3 = (float)FUN_?(&VStack_15);
    VStack_15.y = fStack_12;
    VStack_15.x = fStack_6;
    VStack_15.z = fStack_13;
    fVar4 = (float)FUN_?(&VStack_15);
    pCVar16 = (this->fields).cullingSubscriberBase;
    puVar14 = (undefined8 *)
             (*(this->klass->vtable).get_Position.methodPtr)
                       (&BStack_2,this,(this->klass->vtable).get_Position.method);
    if (pCVar16 != (CullingSubscriberBase *)0x0) {
      VStack_15._0_8_ = *puVar14;
      VStack_15.z = *(float *)(puVar14 + 1);
      CullingSubscriberBase::CullingSubscriberBase_Setup
                (pCVar16,fVar4 + fVar3,&VStack_15,(MethodInfo *)0x0);
      pCVar16 = (this->fields).cullingSubscriberBase;
      if (pCVar16 != (CullingSubscriberBase *)0x0) {
        (pCVar16->fields)._DistanceBandIndex_k__BackingField = 2;
        return;
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void WorldObjectClient_SelectedChangedHandler(Object, SelectedEventArgs) */

void Assembly-CSharp.dll::MVRotator::MVRotator_WorldObjectClient_SelectedChangedHandler
               (MVRotator *this,Object *sender,SelectedEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<MVRotator>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRotator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._._._._.selected != 0) {
    return;
  }
  pMVar1 = (this->fields)._._CubeModel_k__BackingField;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    if ((pMVar1->fields)._.beingEdited != 0) {
      return;
    }
    if (e != (SelectedEventArgs *)0x0) {
      if ((e->fields).Selected != 0) {
        (this->fields)._.pausedMovement = 1;
        return;
      }
      if (*(int *)&(TypeInfo__MVRotator->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MVRotator);
      }
      pHVar2 = TypeInfo__MVRotator->static_fields->selectedRotators;
      if (pHVar2 != (HashSet_1_MVRotator_ *)0x0) {
        (this->fields)._.pausedMovement = 0 < (pHVar2->fields)._count;
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVRotator() */

void Assembly-CSharp.dll::MVRotator::MVRotator__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<MVRotator>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MVRotator>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRotator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (HashSet_1_MVRotator_ *)
         FUN_?(TypeInfo__System__Collections__Generic__HashSet<MVRotator>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this,
             MethodInfo__System__Collections__Generic__HashSet<MVRotator>__HashSet__);
  TypeInfo__MVRotator->static_fields->selectedRotators = this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__MVRotator->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}


/* MVRotator(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVRotator::MVRotator__ctor
               (MVRotator *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVMovable);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVMovable->_1).field_0x1c == 0) {
    FUN_?();
  }
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
  (this->fields)._.MoveableChildren = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.MoveableChildren >> 0xc);
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
  (this->fields)._.localPos.x = (pVVar6->zeroVector).x;
  (this->fields)._.localPos.y = fVar7;
  (this->fields)._.localPos.z = fVar8;
  (this->fields)._.distance = 5.0;
  (this->fields)._.parentMoverID = -1;
  (this->fields)._.isVisible = 1;
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  piVar9 = &(this->fields)._._._._.interactionFlags;
  *piVar9 = *piVar9 | 0x2000;
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVRotator::MVRotator_get_DocumentationType(MVRotator *this,MethodInfo *method)

{
  uVar1 = (this->fields)._.angularDirection.x;
  if ((((float)uVar1 * (this->fields)._.angularSpeed == 0.0) &&
      ((this->fields)._.angularDirection.y * (this->fields)._.angularSpeed != 0.0)) &&
     ((this->fields)._.angularDirection.z * (this->fields)._.angularSpeed == 0.0)) {
    return MVWorldObjectDocumentationType__Enum_HorizontalRotator;
  }
  uVar2 = (this->fields)._.angularDirection.x;
  if ((((float)uVar2 * (this->fields)._.angularSpeed != 0.0) &&
      ((this->fields)._.angularDirection.y * (this->fields)._.angularSpeed == 0.0)) &&
     ((this->fields)._.angularDirection.z * (this->fields)._.angularSpeed == 0.0)) {
    return MVWorldObjectDocumentationType__Enum_VerticalRotator;
  }
  return MVWorldObjectDocumentationType__Enum_Missing;
}


/* Boolean get_Horizontal() */

bool Assembly-CSharp.dll::MVRotator::MVRotator_get_Horizontal(MVRotator *this,MethodInfo *method)

{
  uVar1 = (this->fields)._.angularDirection.x;
  if ((((float)uVar1 * (this->fields)._.angularSpeed == 0.0) &&
      ((this->fields)._.angularDirection.y * (this->fields)._.angularSpeed != 0.0)) &&
     ((this->fields)._.angularDirection.z * (this->fields)._.angularSpeed == 0.0)) {
    return 1;
  }
  return 0;
}


/* Vector3 get_InitAngularVelocity() */

Vector3 * Assembly-CSharp.dll::MVRotator::MVRotator_get_InitAngularVelocity
                    (Vector3 *__return_storage_ptr__,MVRotator *this,MethodInfo *method)

{
  fVar1 = (this->fields)._InitAngularVelocity_k__BackingField.z;
  fVar2 = (this->fields)._InitAngularVelocity_k__BackingField.y;
  __return_storage_ptr__->x = (this->fields)._InitAngularVelocity_k__BackingField.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Boolean get_Vertical() */

bool Assembly-CSharp.dll::MVRotator::MVRotator_get_Vertical(MVRotator *this,MethodInfo *method)

{
  uVar1 = (this->fields)._.angularDirection.x;
  if ((((float)uVar1 * (this->fields)._.angularSpeed != 0.0) &&
      ((this->fields)._.angularDirection.y * (this->fields)._.angularSpeed == 0.0)) &&
     ((this->fields)._.angularDirection.z * (this->fields)._.angularSpeed == 0.0)) {
    return 1;
  }
  return 0;
}


/* MVWorldObjectClientManager get_WOCM() */

MVWorldObjectClientManager *
Assembly-CSharp.dll::MVRotator::MVRotator_get_WOCM(MVRotator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    if ((pMVar2->fields).worldNetwork != (WorldNetwork *)0x0) {
      return (MVWorldObjectClientManager *)
             (((pMVar2->fields).worldNetwork)->fields)._.worldObjectClientManager;
    }
    return (MVWorldObjectClientManager *)0x0;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVWorldObjectClientManager *)(*pcVar3)();
  return pMVar4;
}


/* Vector3 get_WorldPivot() */

Vector3 * Assembly-CSharp.dll::MVRotator::MVRotator_get_WorldPivot
                    (Vector3 *__return_storage_ptr__,MVRotator *this,MethodInfo *method)

{
  puVar1 = (undefined8 *)
           (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                     (auStack_2,this,(this->klass->vtable).get_WorldPosition_1.method);
  uVar3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  __return_storage_ptr__->x = (float)(int)uVar3;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Void set_InitAngularVelocity(Vector3) */

void Assembly-CSharp.dll::MVRotator::MVRotator_set_InitAngularVelocity
               (MVRotator *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  (this->fields)._InitAngularVelocity_k__BackingField.x = value->x;
  (this->fields)._InitAngularVelocity_k__BackingField.y = fVar1;
  (this->fields)._InitAngularVelocity_k__BackingField.z = fVar2;
  return;
}

