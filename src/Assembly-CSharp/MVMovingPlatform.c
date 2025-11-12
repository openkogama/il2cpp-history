
/* Void Initialize() */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_Initialize
               (MVMovingPlatform *this,MethodInfo *method)

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
                  MethodInfo__MVMovingPlatform__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVMovingPlatform__OnStateChanged_UnityEngine__CullingGroupEvent_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVMovingPlatform____c__DisplayClass7_0___Initialize_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovingPlatform____c__DisplayClass7_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Moving_platform_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__init___movable_s_cube_model_is_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVMovingPlatform____c__DisplayClass7_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    MVMovable::MVMovable_Initialize((MVMovable *)this,(MethodInfo *)0x0);
    if ((this->fields)._._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0) {
      pSVar6 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this->fields,(MethodInfo *)0x0)
      ;
      pSVar6 = mscorlib.dll::System::String::String_Concat_5
                         (StringLiteral_Moving_platform_,pSVar6,
                          StringLiteral__init___movable_s_cube_model_is_,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar6,(MethodInfo *)0x0);
      return;
    }
    *(undefined4 *)&object[1].monitor = 0xfffefffb;
    *(undefined2 *)((longlong)&object[1].monitor + 4) = 0xfffb;
    *(undefined4 *)((longlong)&object[1].monitor + 6) = 0x20005;
    *(undefined2 *)((longlong)&object[2].klass + 2) = 5;
    pMVar7 = (this->fields)._._CubeModel_k__BackingField;
    this_00 = (Func_1_UnityEngine_Vector2Int_ *)
              FUN_?(TypeInfo__System__Func<IModelingConstraint>);
    mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::Func_1_UnityEngine_Vector2Int___ctor
              (this_00,object,MethodInfo__MVMovingPlatform____c__DisplayClass7_0___Initialize_b__0__
               ,(MethodInfo *)0x0);
    if (pMVar7 != (MVCubeModelInstance *)0x0) {
      bVar1 = iRam_? != 0;
      (pMVar7->fields)._._ModelingConstraintBuilder_k__BackingField =
           (Func_1_IModelingConstraint_ *)this_00;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(pMVar7->fields)._._ModelingConstraintBuilder_k__BackingField >>
                      0xc);
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
      pMVar7 = (this->fields)._._CubeModel_k__BackingField;
      if (pMVar7 != (MVCubeModelInstance *)0x0) {
        piVar8 = &(pMVar7->fields)._._.interactionFlags;
        *piVar8 = *piVar8 & 0xfffffffffffffff7;
        pMVar7 = (this->fields)._._CubeModel_k__BackingField;
        this_01 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<EditStateEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVMovingPlatform__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
                   ,(MethodInfo *)0x0);
        if (pMVar7 != (MVCubeModelInstance *)0x0) {
          MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
                    ((MVCubeModelBase *)pMVar7,(EventHandler_1_EditStateEventArgs_ *)this_01,
                     (MethodInfo *)0x0);
          pMVar7 = (this->fields)._._CubeModel_k__BackingField;
          onStateChanged =
               (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
               FUN_?(
                            TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                            );
          FUN_?(onStateChanged,this);
          if (pMVar7 != (MVCubeModelInstance *)0x0) {
            MVCubeModelInstance::MVCubeModelInstance_SetupCulling
                      (pMVar7,onStateChanged,(MethodInfo *)0x0);
            pMVar7 = (this->fields)._._CubeModel_k__BackingField;
            if ((pMVar7 != (MVCubeModelInstance *)0x0) &&
               (pCVar9 = (pMVar7->fields).cullingSubscriberBase,
               pCVar9 != (CullingSubscriberBase *)0x0)) {
              (pCVar9->fields)._DistanceBandIndex_k__BackingField = 2;
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void MVCubeModelBase_BeingEditedChanged(Object, EditStateEventArgs) */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_MVCubeModelBase_BeingEditedChanged
               (MVMovingPlatform *this,Object *sender,EditStateEventArgs *e,MethodInfo *method)

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


/* Void MoveBetweenNodes(MVMovingPlatformNode, MVMovingPlatformNode) */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_MoveBetweenNodes
               (MVMovingPlatform *this,MVMovingPlatformNode *start,MVMovingPlatformNode *end,
               MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields).start = start;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).start >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (longlong)method;
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).end = end;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).end >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pMVar7 = (this->fields).end;
  QStack_8.x = 0.0;
  QStack_8.y = 0.0;
  QStack_8.z = 0.0;
  if (pMVar7 != (MVMovingPlatformNode *)0x0) {
    puVar9 = (undefined8 *)
              (*(pMVar7->klass->vtable).get_WorldPosition_1.methodPtr)
                        (&uStack_10,pMVar7,(pMVar7->klass->vtable).get_WorldPosition_1.method,method
                        );
    pMVar7 = (this->fields).start;
    uStack_11 = *puVar9;
    fVar12 = *(float *)(puVar9 + 1);
    if (pMVar7 != (MVMovingPlatformNode *)0x0) {
      puVar9 = (undefined8 *)
                (*(pMVar7->klass->vtable).get_WorldPosition_1.methodPtr)
                          (&uStack_10,pMVar7,(pMVar7->klass->vtable).get_WorldPosition_1.method);
      uVar13 = *puVar9;
      fVar12 = fVar12 - *(float *)(puVar9 + 1);
      fVar14 = (float)uStack_11 - (float)uVar13;
      fVar15 = uStack_11._4_4_ - (float)((ulonglong)uVar13 >> 0x20);
      pMVar7 = (this->fields).start;
      uStack_10 = CONCAT44(fVar15,fVar14);
      uStack_11 = uVar13;
      fStack_16 = fVar12;
      if (pMVar7 != (MVMovingPlatformNode *)0x0) {
        puVar9 = (undefined8 *)
                  (*(pMVar7->klass->vtable).get_WorldPosition_1.methodPtr)
                            (aQStack_17,pMVar7,(pMVar7->klass->vtable).get_WorldPosition_1.method);
        uStack_11 = *puVar9;
        fStack_18 = *(float *)(puVar9 + 1);
        (*(this->klass->vtable).set_WorldPosition.methodPtr)
                  (this,&uStack_11,(this->klass->vtable).set_WorldPosition.method);
        QStack_8._0_8_ = ZEXT48((uint)fVar14);
        uStack_11 = (ulonglong)(uint)fVar14;
        fStack_18 = fVar12;
        fVar19 = (float)FUN_?(&uStack_11);
        fVar20 = _UNK_?;
        if (_UNK_? < fVar19) {
          uVar13._0_4_ = fVar14 / fVar19;
          uVar13._4_4_ = 0.0 / fVar19;
          QStack_8.y = uVar13._4_4_;
          QStack_8.x = (float)uVar13;
          fVar19 = fVar12 / fVar19;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar13._0_4_ = (pVVar21->zeroVector).x;
          uVar13._4_4_ = (pVVar21->zeroVector).y;
          fVar19 = (pVVar21->zeroVector).z;
          QStack_8._0_8_ = uVar13;
          aQStack_17[0]._0_8_ = uVar13;
        }
        QStack_8.z = fVar19;
        fVar22 = (float)FUN_?(&QStack_8);
        if (_UNK_? < fVar22) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          QStack_8.y = uVar13._4_4_;
          QStack_8.x = (float)uVar13;
          pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_11._0_4_ = (pVVar21->upVector).x;
          uStack_11._4_4_ = (pVVar21->upVector).y;
          fStack_18 = (pVVar21->upVector).z;
          aQStack_17[0].x = 0.0;
          aQStack_17[0].y = 0.0;
          aQStack_17[0].z = 0.0;
          aQStack_17[0].w = 0.0;
          pcVar23 = pcRam_?;
          QStack_8.z = fVar19;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar23 = (code *)swi(3);
            (*pcVar23)();
            return;
          }
          pcRam_? = pcVar23;
          (*pcRam_?)(&QStack_8,&uStack_11);
          MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                    ((MVWorldObjectClient *)this,aQStack_17,(MethodInfo *)0x0);
        }
        uStack_11._0_4_ = (this->fields)._.velocity.x;
        uStack_11._4_4_ = (this->fields)._.velocity.y;
        fStack_18 = (this->fields)._.velocity.z;
        uVar13._0_4_ = (float)FUN_?(&uStack_11);
        uStack_11 = CONCAT44(fVar15,fVar14);
        fStack_18 = fVar12;
        fVar19 = (float)FUN_?(&uStack_11);
        if ((float)uVar13 <= 0.0) {
          if (fVar20 < fVar19) {
            fVar22 = fVar14 / fVar19;
            fVar24 = fVar15 / fVar19;
            fVar19 = fVar12 / fVar19;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
            fVar22 = (pVVar21->zeroVector).x;
            fVar24 = (pVVar21->zeroVector).y;
            fVar19 = (pVVar21->zeroVector).z;
          }
          QStack_8.y = fVar24;
          QStack_8.x = fVar22;
        }
        else {
          if (fVar20 < fVar19) {
            fVar25 = fVar14 / fVar19;
            fVar26 = fVar15 / fVar19;
            fVar19 = fVar12 / fVar19;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
            fVar25 = (pVVar21->zeroVector).x;
            fVar26 = (pVVar21->zeroVector).y;
            fVar19 = (pVVar21->zeroVector).z;
          }
          QStack_8.y = fVar26;
          QStack_8.x = fVar25;
          fVar22 = fVar25 * (float)uVar13;
          fVar24 = fVar26 * (float)uVar13;
          fVar19 = fVar19 * (float)uVar13;
        }
        uVar13._0_4_ = (float)FUN_?(&uStack_10);
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
        (this->fields)._.distance = (float)uVar13;
        MVMovable::MVMovable_RecalcTimeToEnd((MVMovable *)this,(MethodInfo *)0x0);
        uStack_10 = CONCAT44(fVar15,fVar14);
        fStack_16 = fVar12;
        uVar13._0_4_ = (float)FUN_?(&uStack_10);
        if (fVar20 < (float)uVar13) {
          QStack_8.x = fVar14 / (float)uVar13;
          fVar12 = fVar12 / (float)uVar13;
          QStack_8.y = fVar15 / (float)uVar13;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
          QStack_8.x = (pVVar21->zeroVector).x;
          QStack_8.y = (pVVar21->zeroVector).y;
          fVar12 = (pVVar21->zeroVector).z;
        }
        fVar14 = QStack_8.y;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_10._0_4_ = (pVVar21->upVector).x;
        uStack_10._4_4_ = (pVVar21->upVector).y;
        fStack_16 = (pVVar21->upVector).z;
        uStack_11 = CONCAT44(fVar14,QStack_8.x);
        aQStack_17[0].x = 0.0;
        aQStack_17[0].y = 0.0;
        aQStack_17[0].z = 0.0;
        aQStack_17[0].w = 0.0;
        pcVar23 = pcRam_?;
        fStack_18 = fVar12;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar23 = (code *)swi(3);
          (*pcVar23)();
          return;
        }
        pcRam_? = pcVar23;
        (*pcRam_?)(&uStack_11,&uStack_10,aQStack_17);
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
        (this->fields)._.orgRotation.x = aQStack_17[0].x;
        (this->fields)._.orgRotation.y = aQStack_17[0].y;
        (this->fields)._.orgRotation.z = aQStack_17[0].z;
        (this->fields)._.orgRotation.w = aQStack_17[0].w;
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
        (this->fields)._.velocity.x = fVar22;
        (this->fields)._.velocity.y = fVar24;
        (this->fields)._.velocity.z = fVar19;
        puVar9 = (undefined8 *)
                  (*(this->klass->vtable).get_WorldVelocity.methodPtr)
                            (auStack_27,this,(this->klass->vtable).get_WorldVelocity.method);
        uStack_28 = *puVar9;
        uStack_29 = *(undefined4 *)(puVar9 + 1);
        fVar14 = (float)FUN_?(&uStack_28);
        fVar12 = _UNK_?;
        (this->fields)._.timeToEnd = 0.0;
        if (fVar12 < fVar14) {
          (this->fields)._.timeToEnd = (this->fields)._.distance / fVar14;
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void OnSelectedChanged(Boolean) */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_OnSelectedChanged
               (MVMovingPlatform *this,bool selected,MethodInfo *method)

{
  (this->fields)._.pausedMovement = selected;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SelectedEventArgs,CONCAT71(in_register_00000011,selected),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._._._._.SelectedChanged !=
      (UnityAction_2_MVWorldObjectClient_SelectedEventArgs_ *)0x0) {
    pUVar1 = (this->fields)._._._._.SelectedChanged;
    lVar2 = FUN_?(TypeInfo__SelectedEventArgs);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    *(bool *)(lVar2 + 0x10) = selected;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,this,lVar2,(pUVar1->fields)._._.method);
  }
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_OnStateChanged
               (MVMovingPlatform *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  this_00 = (this->fields)._._CubeModel_k__BackingField;
  if (this_00 != (MVCubeModelInstance *)0x0) {
    bVar1 = MVCubeModelInstance::MVCubeModelInstance_IsLodVisible
                      (this_00,cullingGroupEvent,(MethodInfo *)0x0);
    pMVar2 = (this->fields)._.movableVisualization;
    if (pMVar2 != (MovableVisualization *)0x0) {
      bVar3 = (pMVar2->fields).isVisible;
      if (bVar1 == 0) {
        if (bVar3 == 0) {
          return;
        }
        this_01 = (pMVar2->fields).cmbClone;
        bVar1 = 0;
      }
      else {
        if (bVar3 != 0) {
          return;
        }
        if ((pMVar2->fields).canBeVisible == 0) {
          return;
        }
        this_01 = (pMVar2->fields).cmbClone;
        bVar1 = 1;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                      ,bVar1,this_01,0);
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
              (pMVar2->fields).isVisible = bVar1;
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
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RecalculateMovement() */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_RecalculateMovement
               (MVMovingPlatform *this,MethodInfo *method)

{
  pMVar1 = (this->fields).end;
  QStack_2.x = 0.0;
  QStack_2.y = 0.0;
  QStack_2.z = 0.0;
  if (pMVar1 != (MVMovingPlatformNode *)0x0) {
    puVar3 = (undefined8 *)
             (*(pMVar1->klass->vtable).get_WorldPosition_1.methodPtr)
                       (&uStack_4,pMVar1,(pMVar1->klass->vtable).get_WorldPosition_1.method);
    pMVar1 = (this->fields).start;
    uStack_5 = *puVar3;
    fVar6 = *(float *)(puVar3 + 1);
    if (pMVar1 != (MVMovingPlatformNode *)0x0) {
      puVar3 = (undefined8 *)
               (*(pMVar1->klass->vtable).get_WorldPosition_1.methodPtr)
                         (&uStack_4,pMVar1,(pMVar1->klass->vtable).get_WorldPosition_1.method);
      uVar7 = *puVar3;
      fVar6 = fVar6 - *(float *)(puVar3 + 1);
      fVar8 = (float)uStack_5 - (float)uVar7;
      fVar9 = uStack_5._4_4_ - (float)((ulonglong)uVar7 >> 0x20);
      pMVar1 = (this->fields).start;
      uStack_4 = CONCAT44(fVar9,fVar8);
      uStack_5 = uVar7;
      fStack_10 = fVar6;
      if (pMVar1 != (MVMovingPlatformNode *)0x0) {
        puVar3 = (undefined8 *)
                 (*(pMVar1->klass->vtable).get_WorldPosition_1.methodPtr)
                           (aQStack_11,pMVar1,(pMVar1->klass->vtable).get_WorldPosition_1.method);
        uStack_5 = *puVar3;
        fStack_12 = *(float *)(puVar3 + 1);
        (*(this->klass->vtable).set_WorldPosition.methodPtr)
                  (this,&uStack_5,(this->klass->vtable).set_WorldPosition.method);
        QStack_2._0_8_ = ZEXT48((uint)fVar8);
        uStack_5 = (ulonglong)(uint)fVar8;
        fStack_12 = fVar6;
        fVar13 = (float)FUN_?(&uStack_5);
        fVar14 = _UNK_?;
        if (_UNK_? < fVar13) {
          uVar7._0_4_ = fVar8 / fVar13;
          uVar7._4_4_ = 0.0 / fVar13;
          QStack_2.y = uVar7._4_4_;
          QStack_2.x = (float)uVar7;
          fVar13 = fVar6 / fVar13;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar7._0_4_ = (pVVar15->zeroVector).x;
          uVar7._4_4_ = (pVVar15->zeroVector).y;
          fVar13 = (pVVar15->zeroVector).z;
          QStack_2._0_8_ = uVar7;
          aQStack_11[0]._0_8_ = uVar7;
        }
        QStack_2.z = fVar13;
        fVar16 = (float)FUN_?(&QStack_2);
        if (_UNK_? < fVar16) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          QStack_2.y = uVar7._4_4_;
          QStack_2.x = (float)uVar7;
          pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_5._0_4_ = (pVVar15->upVector).x;
          uStack_5._4_4_ = (pVVar15->upVector).y;
          fStack_12 = (pVVar15->upVector).z;
          aQStack_11[0].x = 0.0;
          aQStack_11[0].y = 0.0;
          aQStack_11[0].z = 0.0;
          aQStack_11[0].w = 0.0;
          pcVar17 = pcRam_?;
          QStack_2.z = fVar13;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          pcRam_? = pcVar17;
          (*pcRam_?)(&QStack_2,&uStack_5);
          MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                    ((MVWorldObjectClient *)this,aQStack_11,(MethodInfo *)0x0);
        }
        uStack_5._0_4_ = (this->fields)._.velocity.x;
        uStack_5._4_4_ = (this->fields)._.velocity.y;
        fStack_12 = (this->fields)._.velocity.z;
        uVar7._0_4_ = (float)FUN_?(&uStack_5);
        uStack_5 = CONCAT44(fVar9,fVar8);
        fStack_12 = fVar6;
        fVar13 = (float)FUN_?(&uStack_5);
        if ((float)uVar7 <= 0.0) {
          if (fVar14 < fVar13) {
            fVar16 = fVar8 / fVar13;
            fVar18 = fVar9 / fVar13;
            fVar13 = fVar6 / fVar13;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
            fVar16 = (pVVar15->zeroVector).x;
            fVar18 = (pVVar15->zeroVector).y;
            fVar13 = (pVVar15->zeroVector).z;
          }
          QStack_2.y = fVar18;
          QStack_2.x = fVar16;
        }
        else {
          if (fVar14 < fVar13) {
            fVar19 = fVar8 / fVar13;
            fVar20 = fVar9 / fVar13;
            fVar13 = fVar6 / fVar13;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
            fVar19 = (pVVar15->zeroVector).x;
            fVar20 = (pVVar15->zeroVector).y;
            fVar13 = (pVVar15->zeroVector).z;
          }
          QStack_2.y = fVar20;
          QStack_2.x = fVar19;
          fVar16 = fVar19 * (float)uVar7;
          fVar18 = fVar20 * (float)uVar7;
          fVar13 = fVar13 * (float)uVar7;
        }
        uVar7._0_4_ = (float)FUN_?(&uStack_4);
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
        (this->fields)._.distance = (float)uVar7;
        MVMovable::MVMovable_RecalcTimeToEnd((MVMovable *)this,(MethodInfo *)0x0);
        uStack_4 = CONCAT44(fVar9,fVar8);
        fStack_10 = fVar6;
        uVar7._0_4_ = (float)FUN_?(&uStack_4);
        if (fVar14 < (float)uVar7) {
          QStack_2.x = fVar8 / (float)uVar7;
          fVar6 = fVar6 / (float)uVar7;
          QStack_2.y = fVar9 / (float)uVar7;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
          QStack_2.x = (pVVar15->zeroVector).x;
          QStack_2.y = (pVVar15->zeroVector).y;
          fVar6 = (pVVar15->zeroVector).z;
        }
        fVar8 = QStack_2.y;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_4._0_4_ = (pVVar15->upVector).x;
        uStack_4._4_4_ = (pVVar15->upVector).y;
        fStack_10 = (pVVar15->upVector).z;
        uStack_5 = CONCAT44(fVar8,QStack_2.x);
        aQStack_11[0].x = 0.0;
        aQStack_11[0].y = 0.0;
        aQStack_11[0].z = 0.0;
        aQStack_11[0].w = 0.0;
        pcVar17 = pcRam_?;
        fStack_12 = fVar6;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        pcRam_? = pcVar17;
        (*pcRam_?)(&uStack_5,&uStack_4,aQStack_11);
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
        (this->fields)._.orgRotation.x = aQStack_11[0].x;
        (this->fields)._.orgRotation.y = aQStack_11[0].y;
        (this->fields)._.orgRotation.z = aQStack_11[0].z;
        (this->fields)._.orgRotation.w = aQStack_11[0].w;
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
        (this->fields)._.velocity.x = fVar16;
        (this->fields)._.velocity.y = fVar18;
        (this->fields)._.velocity.z = fVar13;
        puVar3 = (undefined8 *)
                 (*(this->klass->vtable).get_WorldVelocity.methodPtr)
                           (auStack_21,this,(this->klass->vtable).get_WorldVelocity.method);
        uStack_22 = *puVar3;
        uStack_23 = *(undefined4 *)(puVar3 + 1);
        fVar8 = (float)FUN_?(&uStack_22);
        fVar6 = _UNK_?;
        (this->fields)._.timeToEnd = 0.0;
        if (fVar6 < fVar8) {
          (this->fields)._.timeToEnd = (this->fields)._.distance / fVar8;
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* MVMovingPlatform(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform__ctor
               (MVMovingPlatform *this,Dictionary_2_System_Object_System_Object_ *data,
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


/* Vector3 get_WorldVelocity() */

Vector3 * Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_get_WorldVelocity
                    (Vector3 *__return_storage_ptr__,MVMovingPlatform *this,MethodInfo *method)

{
  if (((this->fields).end == (MVMovingPlatformNode *)0x0) ||
     ((this->fields).start == (MVMovingPlatformNode *)0x0)) {
    fVar1 = (this->fields)._.velocity.z;
    fVar2 = (this->fields)._.velocity.y;
    __return_storage_ptr__->x = (this->fields)._.velocity.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar1;
    return __return_storage_ptr__;
  }
  pMVar3 = (this->fields).end;
  pMVar4 = pMVar3->klass;
  puVar5 = (undefined8 *)
           (*(pMVar4->vtable).get_Position.methodPtr)
                     (&uStack_6,pMVar3,(pMVar4->vtable).get_Position.method);
  pMVar3 = (this->fields).start;
  uStack_7 = *puVar5;
  fVar1 = *(float *)(puVar5 + 1);
  if (pMVar3 != (MVMovingPlatformNode *)0x0) {
    puVar5 = (undefined8 *)
             (*(pMVar3->klass->vtable).get_Position.methodPtr)
                       (&uStack_6,pMVar3,(pMVar3->klass->vtable).get_Position.method);
    fVar2 = *(float *)(puVar5 + 1);
    fVar8 = (float)uStack_7 - (float)*puVar5;
    fVar9 = uStack_7._4_4_ - (float)((ulonglong)*puVar5 >> 0x20);
    uStack_7 = CONCAT44(fVar9,fVar8);
    fStack_10 = fVar1 - fVar2;
    fVar11 = (float)FUN_?(&uStack_7);
    if (_UNK_? < fVar11) {
      fVar1 = (fVar1 - fVar2) / fVar11;
      uStack_7 = CONCAT44(fVar9 / fVar11,fVar8 / fVar11);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_7._0_4_ = (pVVar12->zeroVector).x;
      uStack_7._4_4_ = (pVVar12->zeroVector).y;
      fVar1 = (pVVar12->zeroVector).z;
    }
    uStack_6._0_4_ = (this->fields)._.velocity.x;
    uStack_6._4_4_ = (this->fields)._.velocity.y;
    fStack_13 = (this->fields)._.velocity.z;
    fVar2 = (float)FUN_?(&uStack_6);
    fVar11 = (float)uStack_7 * fVar2;
    fVar8 = uStack_7._4_4_ * fVar2;
    fVar1 = fVar1 * fVar2;
    pMVar3 = (this->fields).start;
    if ((pMVar3 != (MVMovingPlatformNode *)0x0) &&
       (obj = (pMVar3->fields)._.transform, obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_14 = 0;
      uStack_15 = 0;
      uStack_16 = 0;
      uStack_17 = 0;
      uStack_18 = 0;
      uStack_19 = 0;
      uStack_20 = 0;
      uStack_21 = 0;
      pvVar22 = (obj->fields)._._.m_CachedPtr;
      if (pvVar22 != (void *)0x0) {
        pcVar23 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
          uVar24 = func_?(&UNK_?);
          FUN_?(uVar24,0);
          pcVar23 = (code *)swi(3);
          pVVar25 = (Vector3 *)(*pcVar23)();
          return pVVar25;
        }
        pcRam_? = pcVar23;
        (*pcRam_?)(pvVar22,&uStack_14);
        __return_storage_ptr__->x =
             (float)uStack_16 * fVar8 + (float)uStack_14 * fVar11 + (float)uStack_18 * fVar1 +
             (float)uStack_20 * 0.0;
        __return_storage_ptr__->y =
             uStack_16._4_4_ * fVar8 + uStack_14._4_4_ * fVar11 + uStack_18._4_4_ * fVar1 +
             uStack_20._4_4_ * 0.0;
        __return_storage_ptr__->z =
             (float)uStack_17 * fVar8 + (float)uStack_15 * fVar11 + (float)uStack_19 * fVar1 +
             (float)uStack_21 * 0.0;
        return __return_storage_ptr__;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar23 = (code *)swi(3);
      pVVar25 = (Vector3 *)(*pcVar23)();
      return pVVar25;
    }
  }
  FUN_?();
  pcVar23 = (code *)swi(3);
  pVVar25 = (Vector3 *)(*pcVar23)();
  return pVVar25;
}

