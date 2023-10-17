
/* Void Changed(CubeModelChangedEventArgs) */

void Assembly-CSharp.dll::MVRotator::MVRotator_Changed
               (MVRotator *this,CubeModelChangedEventArgs *cubeModelChangedEventArgs,
               MethodInfo *method)

{
  MVRotator_SetupCullingSphere(this,(MethodInfo *)0x0);
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVRotator::MVRotator_Destroy(MVRotator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Remove_MVRotator_
                   );
    func_?(&TypeInfo__MVRotator);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVRotator->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVRotator);
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
        func_?();
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Remove_int_
                       );
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
            (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
            func_?();
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVRotator::MVRotator_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVRotator *this,BoundsContext__Enum boundsContext
                   ,MethodInfo *method)

{
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  pBVar1 = MVGroup::MVGroup_GetLocalBounds
                     ((Bounds *)&stack0xffffffb0,(MVGroup *)this,boundsContext,(MethodInfo *)0x0);
  fVar2 = (pBVar1->m_Center).y;
  fVar3 = (pBVar1->m_Center).z;
  fVar4 = (pBVar1->m_Extents).x;
  fVar5 = (pBVar1->m_Extents).y;
  fVar6 = (pBVar1->m_Extents).z;
  (__return_storage_ptr__->m_Center).x = (pBVar1->m_Center).x;
  (__return_storage_ptr__->m_Center).y = fVar2;
  (__return_storage_ptr__->m_Center).z = fVar3;
  (__return_storage_ptr__->m_Extents).x = fVar4;
  (__return_storage_ptr__->m_Extents).y = fVar5;
  (__return_storage_ptr__->m_Extents).z = fVar6;
  if (boundsContext == BoundsContext__Enum_Preview) {
    pRVar7 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                       ((Regex_CachedCodeEntryKey *)&stack0xffffffd0,
                        (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)__return_storage_ptr__,(MethodInfo *)0x0);
    uVar8 = pRVar7->_options;
    uVar9 = pRVar7->_cultureKey;
    fVar2 = (float)(uVar8 ^ __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                   );
    fVar3 = (float)(uVar9 ^ __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                   );
    fVar4 = (float)((uint)pRVar7->_pattern ^
                    __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_size
                       ((Vector3 *)&stack0xffffffd0,__return_storage_ptr__,(MethodInfo *)0x0);
    uVar11._0_4_ = pVVar10->x;
    uVar11._4_4_ = pVVar10->y;
    pBVar1 = (Bounds *)&stack0xffffff98;
    center.y = fVar3;
    center.x = fVar2;
    center.z = fVar4;
    UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
              (pBVar1,center,*pVVar10,(MethodInfo *)0x0);
    bounds.m_Center.y = fVar2;
    bounds.m_Center.x = (float)pBVar1;
    bounds.m_Center.z = fVar3;
    bounds.m_Extents.x = fVar4;
    bounds.m_Extents.y = (float)uVar11;
    bounds.m_Extents.z = SUB84(uVar11,4);
    UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate_1
              (__return_storage_ptr__,bounds,(MethodInfo *)0x0);
  }
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVRotator::MVRotator_Initialize(MVRotator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
    func_?(&TypeInfo__System__Func<IModelingConstraint>);
    func_?(&
                    MethodInfo__MVRotator__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
                   );
    func_?(&MethodInfo__MVRotator____c__DisplayClass17_0___Initialize_b__0__);
    func_?(&TypeInfo__MVRotator____c__DisplayClass17_0);
    func_?(&StringLiteral_Rotator_);
    func_?(&StringLiteral__init___movable_s_cube_model_is_);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__MVRotator____c__DisplayClass17_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    MVMovable::MVMovable_Initialize((MVMovable *)this,(MethodInfo *)0x0);
    uVar1 = *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4);
    uVar2 = (this->fields)._.angularDirection.x;
    uVar3 = (this->fields)._.angularDirection.y;
    fVar4 = (this->fields)._.angularSpeed;
    piVar5 = &(this->fields)._._._._.interactionFlags;
    *(uint *)piVar5 = (uint)*piVar5 | 0x9100;
    *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4) = uVar1;
    fVar6 = (this->fields)._.angularDirection.z;
    (this->fields)._InitAngularVelocity_k__BackingField.x = (float)uVar2 * fVar4;
    (this->fields)._InitAngularVelocity_k__BackingField.y = (float)uVar3 * fVar4;
    (this->fields)._InitAngularVelocity_k__BackingField.z = fVar6 * fVar4;
    pMStack_7 = (MonitorData *)0x0;
    iStack_8 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&pMStack_7,-0xf,-0xf,-0xf,(MethodInfo *)0x0);
    value[1].monitor = pMStack_7;
    *(int16_t *)&value[2].klass = iStack_8;
    IStack_9.x = 0;
    IStack_9.y = 0;
    IStack_9.z = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (&IStack_9,0xf,0xf,0xf,(MethodInfo *)0x0);
    *(undefined4 *)((int)&value[2].klass + 2) = IStack_9._0_4_;
    *(int16_t *)((int)&value[2].monitor + 2) = IStack_9.z;
    if ((this->fields)._._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0) {
      pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&this->fields,(MethodInfo *)0x0);
      pSVar10 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_Rotator_,pSVar10,
                           StringLiteral__init___movable_s_cube_model_is_,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar10,(MethodInfo *)0x0);
      return;
    }
    pMStack_11 = (this->fields)._._CubeModel_k__BackingField;
    this_00 = (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)func_?();
    if (this_00 != (RuntimePropertyInfo_StaticGetter_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::Object]::
      RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                (this_00,value,MethodInfo__MVRotator____c__DisplayClass17_0___Initialize_b__0__,
                 (MethodInfo *)0x0);
      (pMStack_11->fields)._._ModelingConstraintBuilder_k__BackingField =
           (Func_1_IModelingConstraint_ *)this_00;
      func_?(&(pMStack_11->fields)._._ModelingConstraintBuilder_k__BackingField,this_00);
      pMVar12 = (this->fields)._._CubeModel_k__BackingField;
      if (pMVar12 != (MVCubeModelInstance *)0x0) {
        piVar5 = &(pMVar12->fields)._._.interactionFlags;
        *(uint *)piVar5 = (uint)*piVar5 & 0xfffffff7;
        *(undefined4 *)((int)&(pMVar12->fields)._._.interactionFlags + 4) =
             *(undefined4 *)((int)&(pMVar12->fields)._._.interactionFlags + 4);
        pMVar12 = (this->fields)._._CubeModel_k__BackingField;
        this_01 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(TypeInfo__System__EventHandler<EditStateEventArgs>);
        if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_01,(Object *)this,
                     MethodInfo__MVRotator__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
                     ,(MethodInfo *)0x0);
          if (pMVar12 != (MVCubeModelInstance *)0x0) {
            MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
                      ((MVCubeModelBase *)pMVar12,(EventHandler_1_EditStateEventArgs_ *)this_01,
                       (MethodInfo *)0x0);
            bVar13 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                              ((MVWorldObjectClient *)this,InteractionFlags__Enum_IsPreview,
                               (MethodInfo *)0x0);
            if (bVar13 == 0) {
code_?:
              MVRotator_SetupCulling(this,(MethodInfo *)0x0);
              return;
            }
            pMVar12 = (this->fields)._._CubeModel_k__BackingField;
            if (pMVar12 != (MVCubeModelInstance *)0x0) {
              (*(pMVar12->klass->vtable).AddPreviewBox.methodPtr)
                        (pMVar12,(pMVar12->klass->vtable).AddPreviewBox.method);
              pMVar12 = (this->fields)._._CubeModel_k__BackingField;
              if (pMVar12 != (MVCubeModelInstance *)0x0) {
                (pMVar12->fields)._._._.previewOwnerProfileId =
                     (this->fields)._._._._._.previewOwnerProfileId;
                pMVar12 = (this->fields)._._CubeModel_k__BackingField;
                if (pMVar12 != (MVCubeModelInstance *)0x0) {
                  uVar1 = *(undefined4 *)((int)&(pMVar12->fields)._._.interactionFlags + 4);
                  piVar5 = &(pMVar12->fields)._._.interactionFlags;
                  *(uint *)piVar5 = (uint)*piVar5 | 0x20000;
                  *(undefined4 *)((int)&(pMVar12->fields)._._.interactionFlags + 4) = uVar1;
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void MVCubeModelBase_BeingEditedChanged(Object, EditStateEventArgs) */

void Assembly-CSharp.dll::MVRotator::MVRotator_MVCubeModelBase_BeingEditedChanged
               (MVRotator *this,Object *sender,EditStateEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCubeModelBase);
    cRam_? = '\x01';
  }
  if (sender == (Object *)0x0) {
    func_?();
    pMVar1 = extraout_EDX;
  }
  else {
    pMVar1 = TypeInfo__MVCubeModelBase;
    if (((TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth <=
         (sender->klass->_1).typeHierarchyDepth) &&
       ((MVCubeModelBase__Class *)
        (sender->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelBase->_1).typeHierarchyDepth - 1] ==
        TypeInfo__MVCubeModelBase)) {
      (this->fields)._.pausedMovement = *(bool *)&sender[0x1c].monitor;
      return;
    }
  }
  func_?(sender,pMVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPositionChanged(Object, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVRotator::MVRotator_OnPositionChanged
               (MVRotator *this,Object *sender,PositionChangedEventArgs *positionChangedEventArgs,
               MethodInfo *method)

{
  this_00 = (this->fields).cullingSubscriberBase;
  pVVar1 = (Vector3 *)
           (*(this->klass->vtable).get_Position.methodPtr)
                     (auStack_2,this,(this->klass->vtable).get_Position.method);
  if (this_00 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_set_Position(this_00,*pVVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSelectedChanged(Boolean) */

void Assembly-CSharp.dll::MVRotator::MVRotator_OnSelectedChanged
               (MVRotator *this,bool selected,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Add_MVRotator_);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Contains_MVRotator_
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Remove_MVRotator_
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<MVRotator>__get_Count__);
    func_?(&TypeInfo__MVRotator);
    cRam_? = '\x01';
  }
  if (selected == 0) {
    if ((TypeInfo__MVRotator->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVRotator);
    }
    pHVar1 = TypeInfo__MVRotator->static_fields->selectedRotators;
    if (pHVar1 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Remove
              ((HashSet_1_System_Object_ *)pHVar1,(Object *)this,
               MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Remove_MVRotator_);
  }
  else {
    if ((TypeInfo__MVRotator->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVRotator);
    }
    pHVar1 = TypeInfo__MVRotator->static_fields->selectedRotators;
    if (pHVar1 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Add
              ((HashSet_1_System_Object_ *)pHVar1,(Object *)this,
               MethodInfo__System__Collections__Generic__HashSet<MVRotator>__Add_MVRotator_);
  }
  if ((TypeInfo__MVRotator->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVRotator);
  }
  pHVar1 = TypeInfo__MVRotator->static_fields->selectedRotators;
  if (pHVar1 != (HashSet_1_MVRotator_ *)0x0) {
    if ((pHVar1->fields)._count == 0) {
      bVar2 = 1;
    }
    else {
      if ((TypeInfo__MVRotator->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVRotator);
      }
      pHVar1 = TypeInfo__MVRotator->static_fields->selectedRotators;
      if (pHVar1 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
      if ((pHVar1->fields)._count == 1) {
        if ((TypeInfo__MVRotator->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVRotator);
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
          if ((TypeInfo__MVRotator->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVRotator);
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
      MVWorldObjectClient::MVWorldObjectClient_OnSelectedChanged
                ((MVWorldObjectClient *)this,selected,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::MVRotator::MVRotator_OnStateChanged
               (MVRotator *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    bVar2 = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
    this_00 = (this->fields)._.movableVisualization;
    if (this_00 != (MovableVisualization *)0x0) {
      bVar3 = (this_00->fields).isVisible;
      if (bVar2 == 0) {
        if (bVar3 != 0) {
          MovableVisualization::MovableVisualization_SetMeshRenderers
                    (this_00,0,(this_00->fields).cmbClone,(MethodInfo *)0x0);
        }
      }
      else if ((bVar3 == 0) && ((this_00->fields).canBeVisible != 0)) {
        MovableVisualization::MovableVisualization_SetMeshRenderers
                  (this_00,1,(this_00->fields).cmbClone,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetWorldObjectToPurchased() */

void Assembly-CSharp.dll::MVRotator::MVRotator_SetWorldObjectToPurchased
               (MVRotator *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_SetWorldObjectToPurchased
            ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields)._._CubeModel_k__BackingField;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    (*(pMVar1->klass->vtable).SetWorldObjectToPurchased.methodPtr)(pMVar1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::MVRotator::MVRotator_SetupCulling(MVRotator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&MethodInfo__MVRotator__Changed_CubeModelChangedEventArgs_);
    func_?(&
                    MethodInfo__MVRotator__OnPositionChanged_System__Object__PositionChangedEventArgs_
                   );
    func_?(&MethodInfo__MVRotator__OnStateChanged_UnityEngine__CullingGroupEvent_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_UnityEngine_Vector2_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                           );
  if (this_00 == (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    func_?();
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (this_00,(Object *)this,
               MethodInfo__MVRotator__OnStateChanged_UnityEngine__CullingGroupEvent_,
               (MethodInfo *)0x0);
    this_01 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
    if (this_01 == (CullingSubscriberBase *)0x0) goto code_?;
    CullingSubscriberBase::CullingSubscriberBase__ctor_1
              (this_01,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = this_01;
    func_?(&(this->fields).cullingSubscriberBase,this_01);
    MVRotator_SetupCullingSphere(this,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._._CubeModel_k__BackingField;
    if (pMVar1 == (MVCubeModelInstance *)0x0) goto code_?;
    pAVar2 = (pMVar1->fields)._.Changed;
    this_02 = (Action_1_Object_ *)
              func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
    if (this_02 == (Action_1_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_02,(Object *)this,MethodInfo__MVRotator__Changed_CubeModelChangedEventArgs_,
               (MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields)._.Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
    }
    else {
      pAVar2 = (Action_1_CubeModelChangedEventArgs_ *)func_?();
      if (pAVar2 == (Action_1_CubeModelChangedEventArgs_ *)0x0) goto code_?;
      (pMVar1->fields)._.Changed = pAVar2;
      iVar4 = func_?();
      if (iVar4 == 0) goto code_?;
    }
    func_?();
    pUVar5 = (this->fields)._._._._.PositionChanged;
    this_03 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    if (this_03 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__MVRotator__OnPositionChanged_System__Object__PositionChangedEventArgs_,
               (MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar5,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (this->fields)._._._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      func_?();
      return;
    }
    pUVar5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar5 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      (this->fields)._._._._.PositionChanged = pUVar5;
      iVar4 = func_?();
      if (iVar4 != 0) {
        func_?();
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetupCullingSphere() */

void Assembly-CSharp.dll::MVRotator::MVRotator_SetupCullingSphere
               (MVRotator *this,MethodInfo *method)

{
  DStack_1._dictionary =
       (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0;
  DStack_1._index = 0;
  DStack_1._version = 0;
  DStack_1._currentKey._options = 0;
  this_00 = (this->fields)._._CubeModel_k__BackingField;
  DStack_1._currentKey._cultureKey = (String *)0x0;
  DStack_1._currentKey._pattern = (String *)0x0;
  if (this_00 != (MVCubeModelInstance *)0x0) {
    pBVar2 = MVCubeModelBase::MVCubeModelBase_GetWorldBounds
                       ((Bounds *)auStack_3,(MVCubeModelBase *)this_00,(MethodInfo *)0x0);
    DStack_1._dictionary =
         (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
         (pBVar2->m_Center).x;
    DStack_1._index = (int32_t)(pBVar2->m_Center).y;
    DStack_1._version = (int32_t)(pBVar2->m_Center).z;
    DStack_1._currentKey._options = (int32_t)(pBVar2->m_Extents).x;
    DStack_1._currentKey._cultureKey = (String *)(pBVar2->m_Extents).y;
    DStack_1._currentKey._pattern = (String *)(pBVar2->m_Extents).z;
    puVar4 = (undefined8 *)(*(this->klass->vtable).get_Position.methodPtr)();
    uStack_5 = *puVar4;
    fStack_6 = *(float *)(puVar4 + 1);
    pRVar7 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                       ((Regex_CachedCodeEntryKey *)(auStack_3 + 0xc),
                        (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)&DStack_1,(MethodInfo *)0x0);
    uVar8 = pRVar7->_options;
    uVar9 = pRVar7->_cultureKey;
    pSStack_10 = (String *)(fStack_6 - (float)pRVar7->_pattern);
    uStack_11 = CONCAT44(uStack_5._4_4_ - (float)uVar9,(float)uStack_5 - (float)uVar8);
    fStack_6 = (float)pSStack_10;
    fVar12 = (float10)func_?();
    fStack_13 = (float)fVar12;
    pRVar7 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                       ((Regex_CachedCodeEntryKey *)(auStack_3 + 0xc),&DStack_1,(MethodInfo *)0x0)
    ;
    uStack_11._0_4_ = pRVar7->_options;
    uStack_11._4_4_ = pRVar7->_cultureKey;
    pSStack_10 = pRVar7->_pattern;
    fVar12 = (float10)func_?();
    pCVar14 = (this->fields).cullingSubscriberBase;
    auStack_3._0_4_ = (this->klass->vtable).get_Position.method;
    DStack_1._currentKey._pattern = (String *)this;
    DStack_1._currentKey._cultureKey = (String *)(auStack_3 + 0xc);
    DStack_1._currentKey._options = (int32_t)&UNK_?;
    pVVar15 = (Vector3 *)(*(this->klass->vtable).get_Position.methodPtr)();
    if (pCVar14 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Setup
                (pCVar14,(float)fVar12 + fStack_13,*pVVar15,(MethodInfo *)0x0);
      pCVar14 = (this->fields).cullingSubscriberBase;
      if (pCVar14 != (CullingSubscriberBase *)0x0) {
        (pCVar14->fields)._DistanceBandIndex_k__BackingField = 2;
        return;
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void WorldObjectClient_SelectedChangedHandler(Object, SelectedEventArgs) */

void Assembly-CSharp.dll::MVRotator::MVRotator_WorldObjectClient_SelectedChangedHandler
               (MVRotator *this,Object *sender,SelectedEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<MVRotator>__get_Count__);
    func_?(&TypeInfo__MVRotator);
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
      if ((TypeInfo__MVRotator->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVRotator);
      }
      pHVar2 = TypeInfo__MVRotator->static_fields->selectedRotators;
      if (pHVar2 != (HashSet_1_MVRotator_ *)0x0) {
        (this->fields)._.pausedMovement = 0 < (pHVar2->fields)._count;
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVRotator() */

void Assembly-CSharp.dll::MVRotator::MVRotator__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<MVRotator>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MVRotator>);
    func_?(&TypeInfo__MVRotator);
    cRam_? = '\x01';
  }
  this = (HashSet_1_UnityEngine_Vector3_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<MVRotator>);
  if (this != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this,MethodInfo__System__Collections__Generic__HashSet<MVRotator>__HashSet__);
    TypeInfo__MVRotator->static_fields->selectedRotators = (HashSet_1_MVRotator_ *)this;
    func_?(TypeInfo__MVRotator->static_fields,this);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MVRotator(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVRotator::MVRotator__ctor
               (MVRotator *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVMovable);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVMovable->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVMovable);
  }
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVMovable>__List__,unaff_EBP);
    func_?(&TypeInfo__System__Collections__Generic__List<MVMovable>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_MVMovable_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVMovable>);
  if (this_00 != (List_1_MVMovable_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MVMovable>__List__);
    (this->fields)._.MoveableChildren = this_00;
    func_?(&(this->fields)._.MoveableChildren,this_00);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3,unaff_EBP);
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar2 = (pVVar1->zeroVector).y;
    fVar3 = (pVVar1->zeroVector).z;
    (this->fields)._.localPos.x = (pVVar1->zeroVector).x;
    (this->fields)._.localPos.y = fVar2;
    (this->fields)._.localPos.z = fVar3;
    (this->fields)._.distance = 5.0;
    (this->fields)._.parentMoverID = -1;
    (this->fields)._.isVisible = 1;
    MVBlueprintBase::MVBlueprintBase__ctor
              ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
    uVar4 = *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4);
    piVar5 = &(this->fields)._._._._.interactionFlags;
    *(uint *)piVar5 = (uint)*piVar5 | 0x2000;
    *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4) = uVar4;
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVRotator::MVRotator_get_DocumentationType(MVRotator *this,MethodInfo *method)

{
  uVar1 = (this->fields)._.angularDirection.x;
  if ((float)uVar1 * (this->fields)._.angularSpeed == 0.0) {
    uVar2 = (this->fields)._.angularDirection.y;
    if ((float)uVar2 * (this->fields)._.angularSpeed != 0.0) {
      if ((this->fields)._.angularDirection.z * (this->fields)._.angularSpeed == 0.0) {
        return MVWorldObjectDocumentationType__Enum_HorizontalRotator;
      }
    }
  }
  uVar3 = (this->fields)._.angularDirection.x;
  if ((float)uVar3 * (this->fields)._.angularSpeed != 0.0) {
    uVar4 = (this->fields)._.angularDirection.y;
    if ((float)uVar4 * (this->fields)._.angularSpeed == 0.0) {
      if ((this->fields)._.angularDirection.z * (this->fields)._.angularSpeed == 0.0) {
        return MVWorldObjectDocumentationType__Enum_VerticalRotator;
      }
    }
  }
  return MVWorldObjectDocumentationType__Enum_Missing;
}


/* Boolean get_Horizontal() */

bool Assembly-CSharp.dll::MVRotator::MVRotator_get_Horizontal(MVRotator *this,MethodInfo *method)

{
  uVar1 = (this->fields)._.angularDirection.x;
  if ((float)uVar1 * (this->fields)._.angularSpeed == 0.0) {
    uVar2 = (this->fields)._.angularDirection.y;
    if ((float)uVar2 * (this->fields)._.angularSpeed != 0.0) {
      if ((this->fields)._.angularDirection.z * (this->fields)._.angularSpeed == 0.0) {
        return 1;
      }
    }
  }
  return 0;
}


/* Vector3 get_InitAngularVelocity() */

Vector3 * Assembly-CSharp.dll::MVRotator::MVRotator_get_InitAngularVelocity
                    (Vector3 *__return_storage_ptr__,MVRotator *this,MethodInfo *method)

{
  fVar1 = (this->fields)._InitAngularVelocity_k__BackingField.y;
  fVar2 = (this->fields)._InitAngularVelocity_k__BackingField.z;
  __return_storage_ptr__->x = (this->fields)._InitAngularVelocity_k__BackingField.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Boolean get_Vertical() */

bool Assembly-CSharp.dll::MVRotator::MVRotator_get_Vertical(MVRotator *this,MethodInfo *method)

{
  uVar1 = (this->fields)._.angularDirection.x;
  if ((float)uVar1 * (this->fields)._.angularSpeed != 0.0) {
    uVar2 = (this->fields)._.angularDirection.y;
    if ((float)uVar2 * (this->fields)._.angularSpeed == 0.0) {
      if ((this->fields)._.angularDirection.z * (this->fields)._.angularSpeed == 0.0) {
        return 1;
      }
    }
  }
  return 0;
}


/* MVWorldObjectClientManager get_WOCM() */

MVWorldObjectClientManager *
Assembly-CSharp.dll::MVRotator::MVRotator_get_WOCM(MVRotator *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  return pMVar1;
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
               (MVRotator *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._InitAngularVelocity_k__BackingField.x = value.x;
  (this->fields)._InitAngularVelocity_k__BackingField.y = value.y;
  (this->fields)._InitAngularVelocity_k__BackingField.z = value.z;
  return;
}

