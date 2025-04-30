
/* Vector3 CalcConeBase() */

Vector3 * Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_CalcConeBase
                    (Vector3 *__return_storage_ptr__,SpotLightGizmo3D *this,MethodInfo *method)

{
  pLVar1 = (this->fields)._targetLight;
  if (pLVar1 != (Light *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pLVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                ((Vector3 *)&fStack_3,pTVar2,(MethodInfo *)0x0);
      pLVar1 = (this->fields)._targetLight;
      if (pLVar1 != (Light *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pLVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          fVar4 = 0.0;
          pVVar5 = (Vector3 *)&stack0xffffffd8;
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                             (pVVar5,pTVar2,(MethodInfo *)0x0);
          fStack_3 = pVVar6->x;
          puStack_7 = (undefined *)pVVar6->y;
          pLVar1 = (this->fields)._targetLight;
          if (pLVar1 != (Light *)0x0) {
            fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                              (pLVar1,(MethodInfo *)0x0);
            __return_storage_ptr__->x = (float)pVVar5 + fStack_3 * fVar8;
            __return_storage_ptr__->y = (float)pTVar2 + (float)puStack_7 * fVar8;
            __return_storage_ptr__->z = fVar4 + (float)pLVar1 * fVar8;
            return __return_storage_ptr__;
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar9)();
  return pVVar5;
}


/* Single CalcConeRadius() */

float Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_CalcConeRadius
                (SpotLightGizmo3D *this,MethodInfo *method)

{
  pLVar1 = (this->fields)._targetLight;
  if (pLVar1 != (Light *)0x0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_spotAngle
                      (pLVar1,(MethodInfo *)0x0);
    dVar3 = (double)(fVar2 * _UNK_? * _UNK_?);
    func_?();
    pLVar1 = (this->fields)._targetLight;
    if (pLVar1 != (Light *)0x0) {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                        (pLVar1,(MethodInfo *)0x0);
      return fVar2 * (float)dVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single CalcSpotAngleDegrees(Single) */

float Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_CalcSpotAngleDegrees
                (SpotLightGizmo3D *this,float radius,MethodInfo *method)

{
  this_00 = (this->fields)._targetLight;
  if (this_00 != (Light *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range(this_00,(MethodInfo *)0x0);
    fVar1 = (float10)func_?();
    return (float)fVar1 * _UNK_?;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  fVar1 = (float10)(*pcVar2)();
  return (float)fVar1;
}


/* Boolean IsTargetReady() */

bool Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_IsTargetReady
               (SpotLightGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._targetLight;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  pLVar1 = (this->fields)._targetLight;
  if (pLVar1 != (Light *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)pLVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    pLVar1 = (this->fields)._targetLight;
    if ((pLVar1 != (Light *)0x0) &&
       (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pLVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0))
    {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return 0;
      }
      pLVar1 = (this->fields)._targetLight;
      if (pLVar1 != (Light *)0x0) {
        LVar3 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_type
                          (pLVar1,(MethodInfo *)0x0);
        return LVar3 == LightType__Enum_Spot;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void OnAttached() */

void Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_OnAttached
               (SpotLightGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SpotLightGizmo3D__AngleTick);
    func_?(&TypeInfo__RTG__GizmoCap2D);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                   );
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  iVar2 = GizmoHandleId::GizmoHandleId_get_DirectionSnapCap((MethodInfo *)0x0);
  pGVar3 = TypeInfo__RTG__GizmoCap2D;
  pGVar4 = (GizmoCap2D *)func_?();
  GizmoCap2D::GizmoCap2D__ctor(pGVar4,pGVar1,iVar2,(MethodInfo *)0x0);
  ppGVar5 = &(this->fields)._dirSnapTick;
  *ppGVar5 = pGVar4;
  func_?(ppGVar5,pGVar4);
  if ((GizmoCap3D *)*ppGVar5 == (GizmoCap3D *)0x0) {
code_?:
    func_?();
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
  }
  else {
    GizmoCap3D::GizmoCap3D_set_DragSession
              ((GizmoCap3D *)*ppGVar5,(IGizmoDragSession *)(this->fields)._dummyDragSession,
               (MethodInfo *)0x0);
    pSVar7 = (this->fields)._angleTicks;
    pSVar8 = (SpotLightGizmo3D_AngleTick *)
              func_?(TypeInfo__RTG__SpotLightGizmo3D__AngleTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pSVar8,ExceptionArgument__Enum_obj,(MethodInfo *)pGVar3);
    if (pSVar7 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar8 != (SpotLightGizmo3D_AngleTick *)0x0) {
      iVar9 = func_?(pSVar8,(pSVar7->klass->_0).element_class);
      if (iVar9 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar7->max_length < 3) goto code_?;
    pSVar7->vector[2] = pSVar8;
    func_?(pSVar7->vector + 2,pSVar8);
    pSVar7 = (this->fields)._angleTicks;
    if (pSVar7 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar7->max_length < 3) goto code_?;
    pSVar8 = pSVar7->vector[2];
    pGVar1 = (this->fields)._._gizmo;
    iVar2 = GizmoHandleId::GizmoHandleId_get_SpotAngleCapBottom((MethodInfo *)0x0);
    pGVar4 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    GizmoCap2D::GizmoCap2D__ctor(pGVar4,pGVar1,iVar2,(MethodInfo *)0x0);
    if (pSVar8 == (SpotLightGizmo3D_AngleTick *)0x0) goto code_?;
    ppGVar5 = &(pSVar8->fields).Tick;
    *ppGVar5 = pGVar4;
    func_?(ppGVar5,pGVar4);
    pSVar7 = (this->fields)._angleTicks;
    if (pSVar7 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar7->max_length < 3) goto code_?;
    if ((pSVar7->vector[2] == (SpotLightGizmo3D_AngleTick *)0x0) ||
       (pGVar10 = (GizmoCap3D *)(pSVar7->vector[2]->fields).Tick, pGVar10 == (GizmoCap3D *)0x0))
    goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar10,(IGizmoDragSession *)(this->fields)._sglAxisDrag,(MethodInfo *)0x0);
    pSVar7 = (this->fields)._angleTicks;
    pSVar8 = (SpotLightGizmo3D_AngleTick *)
              func_?(TypeInfo__RTG__SpotLightGizmo3D__AngleTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pSVar8,ExceptionArgument__Enum_obj,(MethodInfo *)pGVar3);
    if (pSVar7 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar8 != (SpotLightGizmo3D_AngleTick *)0x0) {
      iVar9 = func_?(pSVar8,(pSVar7->klass->_0).element_class);
      if (iVar9 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar7->max_length == 0) goto code_?;
    pSVar7->vector[0] = pSVar8;
    func_?(pSVar7->vector,pSVar8);
    pSVar7 = (this->fields)._angleTicks;
    if (pSVar7 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar7->max_length == 0) goto code_?;
    pGVar1 = (this->fields)._._gizmo;
    iVar2 = GizmoHandleId::GizmoHandleId_get_SpotAngleCapTop((MethodInfo *)pSVar7->vector[0]);
    pGVar11 = TypeInfo__RTG__GizmoCap2D;
    pIVar12 = (Il2CppClass *)func_?();
    GizmoCap2D::GizmoCap2D__ctor((GizmoCap2D *)pIVar12,pGVar1,iVar2,(MethodInfo *)0x0);
    if (pGVar11 == (GizmoCap2D__Class *)0x0) goto code_?;
    ppIVar13 = &(pGVar11->_0).element_class;
    *ppIVar13 = pIVar12;
    func_?(ppIVar13,pIVar12);
    pSVar7 = (this->fields)._angleTicks;
    if (pSVar7 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar7->max_length == 0) goto code_?;
    if ((pSVar7->vector[0] == (SpotLightGizmo3D_AngleTick *)0x0) ||
       (pGVar10 = (GizmoCap3D *)(pSVar7->vector[0]->fields).Tick, pGVar10 == (GizmoCap3D *)0x0))
    goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar10,(IGizmoDragSession *)(this->fields)._sglAxisDrag,(MethodInfo *)0x0);
    pSVar7 = (this->fields)._angleTicks;
    pSVar8 = (SpotLightGizmo3D_AngleTick *)
              func_?(TypeInfo__RTG__SpotLightGizmo3D__AngleTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pSVar8,ExceptionArgument__Enum_obj,(MethodInfo *)pGVar3);
    if (pSVar7 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar8 != (SpotLightGizmo3D_AngleTick *)0x0) {
      iVar9 = func_?(pSVar8,(pSVar7->klass->_0).element_class);
      if (iVar9 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar7->max_length < 4) goto code_?;
    pSVar7->vector[3] = pSVar8;
    func_?(pSVar7->vector + 3,pSVar8);
    pSVar7 = (this->fields)._angleTicks;
    if (pSVar7 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar7->max_length < 4) goto code_?;
    pGVar1 = (this->fields)._._gizmo;
    iVar2 = GizmoHandleId::GizmoHandleId_get_SpotAngleCapLeft((MethodInfo *)pSVar7->vector[3]);
    pGVar11 = TypeInfo__RTG__GizmoCap2D;
    pIVar12 = (Il2CppClass *)func_?();
    GizmoCap2D::GizmoCap2D__ctor((GizmoCap2D *)pIVar12,pGVar1,iVar2,(MethodInfo *)0x0);
    if (pGVar11 == (GizmoCap2D__Class *)0x0) goto code_?;
    ppIVar13 = &(pGVar11->_0).element_class;
    *ppIVar13 = pIVar12;
    func_?(ppIVar13,pIVar12);
    pSVar7 = (this->fields)._angleTicks;
    if (pSVar7 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar7->max_length < 4) goto code_?;
    if ((pSVar7->vector[3] == (SpotLightGizmo3D_AngleTick *)0x0) ||
       (pGVar10 = (GizmoCap3D *)(pSVar7->vector[3]->fields).Tick, pGVar10 == (GizmoCap3D *)0x0))
    goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar10,(IGizmoDragSession *)(this->fields)._sglAxisDrag,(MethodInfo *)0x0);
    pSVar7 = (this->fields)._angleTicks;
    pSVar8 = (SpotLightGizmo3D_AngleTick *)
              func_?(TypeInfo__RTG__SpotLightGizmo3D__AngleTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pSVar8,ExceptionArgument__Enum_obj,(MethodInfo *)pGVar3);
    if (pSVar7 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar8 == (SpotLightGizmo3D_AngleTick *)0x0) {
code_?:
      if (pSVar7->max_length < 2) goto code_?;
      pSVar7->vector[1] = pSVar8;
      func_?(pSVar7->vector + 1,pSVar8);
      pSVar7 = (this->fields)._angleTicks;
      if (pSVar7 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
        if (pSVar7->max_length < 2) goto code_?;
        pGVar1 = (this->fields)._._gizmo;
        iVar2 = GizmoHandleId::GizmoHandleId_get_SpotAngleCapRight((MethodInfo *)pSVar7->vector[1])
        ;
        pGVar3 = TypeInfo__RTG__GizmoCap2D;
        pIVar12 = (Il2CppClass *)func_?();
        GizmoCap2D::GizmoCap2D__ctor((GizmoCap2D *)pIVar12,pGVar1,iVar2,(MethodInfo *)0x0);
        if (pGVar3 != (GizmoCap2D__Class *)0x0) {
          ppIVar13 = &(pGVar3->_0).element_class;
          *ppIVar13 = pIVar12;
          func_?(ppIVar13,pIVar12);
          pSVar7 = (this->fields)._angleTicks;
          if (pSVar7 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
            if (pSVar7->max_length < 2) goto code_?;
            if ((pSVar7->vector[1] != (SpotLightGizmo3D_AngleTick *)0x0) &&
               (pGVar10 = (GizmoCap3D *)(pSVar7->vector[1]->fields).Tick, pGVar10 != (GizmoCap3D *)0x0
               )) {
              GizmoCap3D::GizmoCap3D_set_DragSession
                        (pGVar10,(IGizmoDragSession *)(this->fields)._sglAxisDrag,(MethodInfo *)0x0);
              pGVar1 = (this->fields)._._gizmo;
              iVar2 = GizmoHandleId::GizmoHandleId_get_RangeTick((MethodInfo *)0x0);
              pGVar4 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
              GizmoCap2D::GizmoCap2D__ctor(pGVar4,pGVar1,iVar2,(MethodInfo *)0x0);
              ppGVar5 = &(this->fields)._rangeTick;
              *ppGVar5 = pGVar4;
              func_?(ppGVar5,pGVar4);
              if ((GizmoCap3D *)*ppGVar5 != (GizmoCap3D *)0x0) {
                GizmoCap3D::GizmoCap3D_set_DragSession
                          ((GizmoCap3D *)*ppGVar5,(IGizmoDragSession *)(this->fields)._sglAxisDrag,
                           (MethodInfo *)0x0);
                SpotLightGizmo3D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                fVar14 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
                uVar6 = (pVVar15->rightVector).x;
                uVar16 = (pVVar15->rightVector).y;
                fVar17 = (pVVar15->rightVector).z;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pVVar18 = &TypeInfo__UnityEngine__Vector3->static_fields->upVector;
                uVar19 = pVVar18->x;
                uVar20 = pVVar18->y;
                circleCenter.y = (float)uVar20;
                circleCenter.x = (float)uVar19;
                circleCenter.z = fVar14;
                circleRight.y = (float)uVar16;
                circleRight.x = (float)uVar6;
                circleRight.z = fVar17;
                pLVar21 = PrimitiveFactory::PrimitiveFactory_Generate3DCircleBorderPoints
                                    (circleCenter,1.0,circleRight,*pVVar18,100,(MethodInfo *)0x0);
                (this->fields)._coneCirclePoints = pLVar21;
                func_?();
                pMVar22 = 
                MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                ;
                pSVar23 = (this->fields)._raycastFilter;
                if ((pSVar23 != (SceneRaycastFilter *)0x0) &&
                   (pLVar24 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              (pSVar23->fields)._allowedObjectTypes,
                   pLVar24 !=
                   (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
                  piVar25 = &(pLVar24->fields)._version;
                  *piVar25 = *piVar25 + 1;
                  pRVar26 = (pLVar24->fields)._items;
                  if (pRVar26 != (RegexCharClass_SingleRange__Array *)0x0) {
                    uVar27 = (pLVar24->fields)._size;
                    if (uVar27 < pRVar26->max_length) {
                      (pLVar24->fields)._size = uVar27 + 1;
                      if (pRVar26->max_length <= uVar27) goto code_?;
                      pRVar26->vector[uVar27].First = 1;
                      pRVar26->vector[uVar27].Last = 0;
                    }
                    else {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                (pLVar24,(RegexCharClass_SingleRange)0x1,
                                 pMVar22->klass->rgctx_data[0xe].method);
                    }
                    pMVar22 = 
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                    ;
                    pSVar23 = (this->fields)._raycastFilter;
                    if ((pSVar23 != (SceneRaycastFilter *)0x0) &&
                       (pLVar24 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)(pSVar23->fields)._allowedObjectTypes,
                       pLVar24 !=
                       (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
                      piVar25 = &(pLVar24->fields)._version;
                      *piVar25 = *piVar25 + 1;
                      pRVar26 = (pLVar24->fields)._items;
                      if (pRVar26 != (RegexCharClass_SingleRange__Array *)0x0) {
                        uVar27 = (pLVar24->fields)._size;
                        if (pRVar26->max_length <= uVar27) {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                    (pLVar24,(RegexCharClass_SingleRange)0x2,
                                     pMVar22->klass->rgctx_data[0xe].method);
                          return;
                        }
                        (pLVar24->fields)._size = uVar27 + 1;
                        if (uVar27 < pRVar26->max_length) {
                          pRVar26->vector[uVar27].First = 2;
                          pRVar26->vector[uVar27].Last = 0;
                          return;
                        }
                        goto code_?;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    iVar9 = func_?(pSVar8,(pSVar7->klass->_0).element_class);
    if (iVar9 != 0) goto code_?;
  }
  uVar6 = func_?(0);
  func_?(uVar6);
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void OnGizmoAttemptHandleDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_OnGizmoAttemptHandleDragBegin
               (SpotLightGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = SpotLightGizmo3D_OwnsHandle(this,handleId,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  bVar1 = SpotLightGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields)._dirSnapTick;
  if (pGVar2 != (GizmoCap2D *)0x0) {
    pvVar3 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar2,(MethodInfo *)0x0);
    if ((void *)handleId == pvVar3) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar5 = (pVVar4->oneVector).y;
      fVar6 = (pVVar4->oneVector).z;
      (this->fields)._dummySessionWorkData.Axis.x = (pVVar4->oneVector).x;
      (this->fields)._dummySessionWorkData.Axis.y = fVar5;
      (this->fields)._dummySessionWorkData.Axis.z = fVar6;
      this_03 = (this->fields)._dummyDragSession;
      if (this_03 != (GizmoSglAxisOffsetDrag3D *)0x0) {
        fVar5 = (this->fields)._dummySessionWorkData.DragOrigin.x;
        fVar7 = (this->fields)._dummySessionWorkData.DragOrigin.y;
        fVar8 = (this->fields)._dummySessionWorkData.DragOrigin.z;
        fVar9 = (this->fields)._dummySessionWorkData.Axis.x;
        fVar6 = (this->fields)._dummySessionWorkData.SnapStep;
        uVar10._0_4_ = (this->fields)._dummySessionWorkData.Axis.y;
        uVar10._4_4_ = (this->fields)._dummySessionWorkData.Axis.z;
code_?:
        workData.DragOrigin.y = fVar7;
        workData.DragOrigin.x = fVar5;
        workData.DragOrigin.z = fVar8;
        workData.Axis.x = fVar9;
        workData.Axis.y = (float)(int)uVar10;
        workData.Axis.z = (float)(int)((ulonglong)uVar10 >> 0x20);
        workData.SnapStep = fVar6;
        GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_SetWorkData
                  (this_03,workData,(MethodInfo *)0x0);
        this_01 = (this->fields)._preChangeSnapshot;
        if (this_01 != (Light3DSnapshot *)0x0) {
          Light3DSnapshot::Light3DSnapshot_Snapshot
                    (this_01,(this->fields)._targetLight,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pSVar11 = (this->fields)._angleTicks;
      if (pSVar11 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
        if (pSVar11->max_length < 4) goto code_?;
        if ((pSVar11->vector[3] != (SpotLightGizmo3D_AngleTick *)0x0) &&
           (pGVar2 = (pSVar11->vector[3]->fields).Tick, pGVar2 != (GizmoCap2D *)0x0)) {
          pvVar3 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                   AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar2,(MethodInfo *)0x0);
          pSVar11 = (this->fields)._angleTicks;
          if ((void *)handleId == pvVar3) {
            if (pSVar11 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
              if (pSVar11->max_length < 4) goto code_?;
              pSVar12 = pSVar11->vector[3];
code_?:
              if (pSVar12 != (SpotLightGizmo3D_AngleTick *)0x0) {
                fVar5 = (pSVar12->fields).LightAxis.y;
                fVar6 = (pSVar12->fields).LightAxis.z;
                (this->fields)._sglAxisDragWorkData.Axis.x = (pSVar12->fields).LightAxis.x;
                (this->fields)._sglAxisDragWorkData.Axis.y = fVar5;
                (this->fields)._sglAxisDragWorkData.Axis.z = fVar6;
                pVVar13 = SpotLightGizmo3D_CalcConeBase
                                   ((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
                fVar5 = pVVar13->y;
                fVar6 = pVVar13->z;
                (this->fields)._sglAxisDragWorkData.DragOrigin.x = pVVar13->x;
                (this->fields)._sglAxisDragWorkData.DragOrigin.y = fVar5;
                (this->fields)._sglAxisDragWorkData.DragOrigin.z = fVar6;
                pSVar14 = (this->fields)._sharedSettings;
                if ((pSVar14 != (SpotLightGizmo3DSettings *)0x0) ||
                   (pSVar14 = (this->fields)._settings, pSVar14 != (SpotLightGizmo3DSettings *)0x0)) {
                  fVar6 = (pSVar14->fields)._radiusSnapStep;
code_?:
                  (this->fields)._sglAxisDragWorkData.SnapStep = fVar6;
code_?:
                  this_03 = (this->fields)._sglAxisDrag;
                  if (this_03 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                    fVar5 = (this->fields)._sglAxisDragWorkData.DragOrigin.x;
                    fVar7 = (this->fields)._sglAxisDragWorkData.DragOrigin.y;
                    fVar8 = (this->fields)._sglAxisDragWorkData.DragOrigin.z;
                    fVar9 = (this->fields)._sglAxisDragWorkData.Axis.x;
                    fVar6 = (this->fields)._sglAxisDragWorkData.SnapStep;
                    uVar10._0_4_ = (this->fields)._sglAxisDragWorkData.Axis.y;
                    uVar10._4_4_ = (this->fields)._sglAxisDragWorkData.Axis.z;
                    goto code_?;
                  }
                }
              }
            }
          }
          else if (pSVar11 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
            if (pSVar11->max_length < 2) goto code_?;
            if ((pSVar11->vector[1] != (SpotLightGizmo3D_AngleTick *)0x0) &&
               (pGVar2 = (pSVar11->vector[1]->fields).Tick, pGVar2 != (GizmoCap2D *)0x0)) {
              pvVar3 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                       AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar2,(MethodInfo *)0x0)
              ;
              pSVar11 = (this->fields)._angleTicks;
              if ((void *)handleId == pvVar3) {
                if (pSVar11 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                  if (pSVar11->max_length < 2) goto code_?;
                  pSVar12 = pSVar11->vector[1];
                  goto code_?;
                }
              }
              else if (pSVar11 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                if (pSVar11->max_length == 0) goto code_?;
                if ((pSVar11->vector[0] != (SpotLightGizmo3D_AngleTick *)0x0) &&
                   (pGVar2 = (pSVar11->vector[0]->fields).Tick, pGVar2 != (GizmoCap2D *)0x0)) {
                  pvVar3 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                           AndroidJavaObject__GetRawClass
                                     ((AndroidJavaObject *)pGVar2,(MethodInfo *)0x0);
                  pSVar11 = (this->fields)._angleTicks;
                  if ((void *)handleId == pvVar3) {
                    if (pSVar11 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                      if (pSVar11->max_length == 0) goto code_?;
                      pSVar12 = pSVar11->vector[0];
                      goto code_?;
                    }
                  }
                  else if (pSVar11 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                    if (pSVar11->max_length < 3) goto code_?;
                    if ((pSVar11->vector[2] != (SpotLightGizmo3D_AngleTick *)0x0) &&
                       (pGVar2 = (pSVar11->vector[2]->fields).Tick, pGVar2 != (GizmoCap2D *)0x0)) {
                      pvVar3 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                               AndroidJavaObject__GetRawClass
                                         ((AndroidJavaObject *)pGVar2,(MethodInfo *)0x0);
                      if ((void *)handleId == pvVar3) {
                        pSVar11 = (this->fields)._angleTicks;
                        if (pSVar11 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                          if (pSVar11->max_length < 3) goto code_?;
                          pSVar12 = pSVar11->vector[2];
                          goto code_?;
                        }
                      }
                      else {
                        pGVar2 = (this->fields)._rangeTick;
                        if (pGVar2 != (GizmoCap2D *)0x0) {
                          pvVar3 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject
                                   ::AndroidJavaObject__GetRawClass
                                             ((AndroidJavaObject *)pGVar2,(MethodInfo *)0x0);
                          if ((void *)handleId != pvVar3) goto code_?;
                          this_00 = (this->fields)._targetLight;
                          if ((this_00 != (Light *)0x0) &&
                             (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform
                                                  ((Component *)this_00,(MethodInfo *)0x0),
                             this_02 != (Transform *)0x0)) {
                            pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                     Transform_get_forward
                                               ((Vector3 *)&stack0xfffffff0,this_02,
                                                (MethodInfo *)0x0);
                            fVar5 = pVVar13->y;
                            fVar6 = pVVar13->z;
                            (this->fields)._sglAxisDragWorkData.Axis.x = pVVar13->x;
                            (this->fields)._sglAxisDragWorkData.Axis.y = fVar5;
                            (this->fields)._sglAxisDragWorkData.Axis.z = fVar6;
                            pVVar13 = SpotLightGizmo3D_CalcConeBase
                                               ((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
                            fVar5 = pVVar13->y;
                            fVar6 = pVVar13->z;
                            (this->fields)._sglAxisDragWorkData.DragOrigin.x = pVVar13->x;
                            (this->fields)._sglAxisDragWorkData.DragOrigin.y = fVar5;
                            (this->fields)._sglAxisDragWorkData.DragOrigin.z = fVar6;
                            pSVar14 = (this->fields)._sharedSettings;
                            if ((pSVar14 != (SpotLightGizmo3DSettings *)0x0) ||
                               (pSVar14 = (this->fields)._settings,
                               pSVar14 != (SpotLightGizmo3DSettings *)0x0)) {
                              fVar6 = (pSVar14->fields)._rangeSnapStep;
                              goto code_?;
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
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnGizmoDragEnd(Int32) */

void Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_OnGizmoDragEnd
               (SpotLightGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Light3DChangedAction);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._postChangeSnapshot;
  if (pLVar1 != (Light3DSnapshot *)0x0) {
    Light3DSnapshot::Light3DSnapshot_Snapshot(pLVar1,(this->fields)._targetLight,(MethodInfo *)0x0);
    pLVar1 = (this->fields)._preChangeSnapshot;
    postChangeSnapshot = (this->fields)._postChangeSnapshot;
    this_00 = (Light3DChangedAction *)func_?(TypeInfo__RTG__Light3DChangedAction);
    Light3DChangedAction::Light3DChangedAction__ctor
              (this_00,pLVar1,postChangeSnapshot,(MethodInfo *)0x0);
    if (this_00 != (Light3DChangedAction *)0x0) {
      Light3DChangedAction::Light3DChangedAction_Execute(this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnGizmoDragUpdate(Int32) */

void Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_OnGizmoDragUpdate
               (SpotLightGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  bVar1 = SpotLightGizmo3D_OwnsHandle(this,handleId,(MethodInfo *)0x0);
  if ((bVar1 == 0) ||
     (bVar1 = SpotLightGizmo3D_IsTargetReady(this,(MethodInfo *)0x0), bVar1 == 0)) {
    return;
  }
  pGVar2 = (this->fields)._sglAxisDrag;
  if ((this->fields)._isSnapEnabled == 0) {
    pSVar3 = (this->fields)._sharedHotkeys;
    if (((pSVar3 == (SpotLightGizmo3DHotkeys *)0x0) &&
        (pSVar3 = (this->fields)._hotkeys, pSVar3 == (SpotLightGizmo3DHotkeys *)0x0)) ||
       (pHVar4 = (pSVar3->fields)._enableSnapping, pHVar4 == (Hotkeys *)0x0))
    goto code_?;
    bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0);
  }
  else {
    bVar1 = 1;
  }
  if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
    (pGVar2->fields)._._isSnapEnabled = bVar1;
    pGVar5 = (this->fields)._dirSnapTick;
    if (pGVar5 != (GizmoCap2D *)0x0) {
      pvVar6 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar5,(MethodInfo *)0x0);
      if ((void *)handleId == pvVar6) {
        SpotLightGizmo3D_SnapDirection(this,(MethodInfo *)0x0);
code_?:
        SpotLightGizmo3D_UpdateTicks(this,(MethodInfo *)0x0);
        return;
      }
      iVar7 = GizmoHandleId::GizmoHandleId_get_SpotAngleCapTop((MethodInfo *)0x0);
      if ((handleId < iVar7) ||
         (iVar7 = GizmoHandleId::GizmoHandleId_get_SpotAngleCapRight((MethodInfo *)0x0),
         iVar7 < handleId)) {
        pGVar5 = (this->fields)._rangeTick;
        if (pGVar5 != (GizmoCap2D *)0x0) {
          pvVar6 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                    AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar5,(MethodInfo *)0x0);
          if ((void *)handleId != pvVar6) goto code_?;
          pSVar3 = (this->fields)._sharedHotkeys;
          pGVar2 = (this->fields)._sglAxisDrag;
          if ((((pSVar3 != (SpotLightGizmo3DHotkeys *)0x0) ||
               (pSVar3 = (this->fields)._hotkeys, pSVar3 != (SpotLightGizmo3DHotkeys *)0x0)) &&
              (pHVar4 = (pSVar3->fields)._enableSnapping, pHVar4 != (Hotkeys *)0x0)) &&
             (bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0),
             pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0)) {
            (pGVar2->fields)._._isSnapEnabled = bVar1;
            pLVar8 = (this->fields)._targetLight;
            if (pLVar8 != (Light *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                        (pLVar8,(MethodInfo *)0x0);
              pGVar9 = (this->fields)._._gizmo;
              if (pGVar9 != (Gizmo *)0x0) {
                Gizmo::Gizmo_get_RelativeDragOffset
                          ((Vector3 *)&stack0xffffffcc,pGVar9,(MethodInfo *)0x0);
                puVar10 = &stack0xffffffe4;
                fVar11 = (float10)func_?();
                pGVar9 = (this->fields)._._gizmo;
                if (pGVar9 != (Gizmo *)0x0) {
                  pVVar12 = Gizmo::Gizmo_get_RelativeDragOffset
                                      ((Vector3 *)&stack0xffffffcc,pGVar9,(MethodInfo *)0x0);
                  uVar13._0_4_ = pVVar12->x;
                  uVar13._4_4_ = pVVar12->y;
                  fVar14 = pVVar12->z;
                  pGVar2 = (this->fields)._sglAxisDrag;
                  if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                    pVVar12 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                        ((Vector3 *)&stack0xffffffcc,pGVar2,(MethodInfo *)0x0);
                    uVar15 = pVVar12->x;
                    uVar16 = pVVar12->y;
                    fVar17 = _UNK_?;
                    if (_UNK_? <=
                        (float)uVar16 * SUB84(uVar13,4) + (float)uVar15 * (float)uVar13 +
                        pVVar12->z * fVar14) {
                      fVar17 = _UNK_?;
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_range
                              (pLVar8,fVar17 * (float)fVar11 + (float)puVar10,(MethodInfo *)0x0);
                    SpotLightGizmo3D_UpdateTicks(this,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pSVar3 = (this->fields)._sharedHotkeys;
        pGVar2 = (this->fields)._sglAxisDrag;
        if (((pSVar3 != (SpotLightGizmo3DHotkeys *)0x0) ||
            (pSVar3 = (this->fields)._hotkeys, pSVar3 != (SpotLightGizmo3DHotkeys *)0x0)) &&
           ((pHVar4 = (pSVar3->fields)._enableSnapping, pHVar4 != (Hotkeys *)0x0 &&
            (bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0),
            pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0)))) {
          (pGVar2->fields)._._isSnapEnabled = bVar1;
          SpotLightGizmo3D_CalcConeRadius(this,(MethodInfo *)0x0);
          pGVar9 = (this->fields)._._gizmo;
          if (pGVar9 != (Gizmo *)0x0) {
            Gizmo::Gizmo_get_RelativeDragOffset
                      ((Vector3 *)&stack0xffffffd8,pGVar9,(MethodInfo *)0x0);
            func_?();
            pGVar9 = (this->fields)._._gizmo;
            if (pGVar9 != (Gizmo *)0x0) {
              pVVar12 = Gizmo::Gizmo_get_RelativeDragOffset
                                  ((Vector3 *)&stack0xffffffe4,pGVar9,(MethodInfo *)0x0);
              fVar14 = pVVar12->x;
              fVar17 = pVVar12->z;
              pGVar2 = (this->fields)._sglAxisDrag;
              if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                pVVar12 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                    ((Vector3 *)&stack0xffffffcc,pGVar2,(MethodInfo *)0x0);
                uVar18 = pVVar12->x;
                uVar19 = pVVar12->y;
                pLVar8 = (this->fields)._targetLight;
                if (pLVar8 != (Light *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Sign
                            ((float)uVar19 * 0.0 + fVar14 * (float)uVar18 + pVVar12->z * fVar17,
                             (MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                            (pLVar8,(MethodInfo *)0x0);
                  fVar11 = (float10)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_spotAngle
                            (pLVar8,(float)fVar11 * _UNK_? + (float)fVar11 * _UNK_?,
                             (MethodInfo *)0x0);
                  SpotLightGizmo3D_UpdateTicks(this,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void OnGizmoRender(Camera) */

void Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_OnGizmoRender
               (SpotLightGizmo3D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    cRam_? = '\x01';
  }
  bVar1 = SpotLightGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pLVar2 = (this->fields)._targetLight;
  if ((pLVar2 != (Light *)0x0) &&
     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pLVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_5,pTVar3,(MethodInfo *)0x0);
    uStack_6._0_4_ = pVVar4->x;
    uStack_6._4_4_ = pVVar4->y;
    ppSStack_7 = (SpotLightGizmo3D_AngleTick **)pVVar4->z;
    pVVar4 = SpotLightGizmo3D_CalcConeBase(&VStack_5,this,(MethodInfo *)0x0);
    uStack_8._0_4_ = pVVar4->x;
    uStack_8._4_4_ = pVVar4->y;
    pSStack_9 = (SpotLightGizmo3D_AngleTick__Array *)pVVar4->z;
    pLVar2 = (this->fields)._targetLight;
    pSStack_10 = pSStack_9;
    uStack_11 = uStack_8;
    if (pLVar2 != (Light *)0x0) {
      fStack_12 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_spotAngle
                            (pLVar2,(MethodInfo *)0x0);
      dVar13 = (double)(fStack_12 * _UNK_? * _UNK_?);
      func_?();
      pLVar2 = (this->fields)._targetLight;
      fStack_12 = (float)dVar13;
      if (pLVar2 != (Light *)0x0) {
        fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                           (pLVar2,(MethodInfo *)0x0);
        fStack_12 = fVar14 * fStack_12;
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        pOVar15 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
        if (pOVar15 != (Object *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pOVar15[10].klass != (Object__Class *)0x0) {
            if (1 < (int)((pOVar15[10].klass)->_0).namespaze) {
              SpotLightGizmo3D_UpdateTicks(this,(MethodInfo *)0x0);
            }
            if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor ==
                0) {
              func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
            }
            this_01 = (GizmoLineMaterial *)
                      Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                (MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__get_Get__);
            if (this_01 != (GizmoLineMaterial *)0x0) {
              GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
                        (this_01,(MethodInfo *)0x0);
              pSVar16 = (this->fields)._sharedLookAndFeel;
              if ((pSVar16 != (SpotLightGizmo3DLookAndFeel *)0x0) ||
                 (pSVar16 = (this->fields)._lookAndFeel,
                 pSVar16 != (SpotLightGizmo3DLookAndFeel *)0x0)) {
                GizmoLineMaterial::GizmoLineMaterial_SetColor
                          (this_01,(pSVar16->fields)._wireColor,(MethodInfo *)0x0);
                pMVar17 = GizmoLineMaterial::GizmoLineMaterial_get_Material
                                   (this_01,(MethodInfo *)0x0);
                if (pMVar17 != (Material *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                            (pMVar17,0,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                  pLVar2 = (this->fields)._targetLight;
                  if ((pLVar2 != (Light *)0x0) &&
                     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_transform((Component *)pLVar2,(MethodInfo *)0x0),
                     pTVar3 != (Transform *)0x0)) {
                    pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_rotation(&QStack_19,pTVar3,(MethodInfo *)0x0);
                    VStack_5.z = 1.0;
                    pos.z = (float)pSStack_10;
                    pos.x = (float)(undefined4)uStack_11;
                    pos.y = (float)uStack_11._4_4_;
                    s.y = fStack_12;
                    s.x = fStack_12;
                    s.z = 1.0;
                    pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                        ((Matrix4x4 *)&stack0xffffff50,pos,*pQVar18,s,
                                         (MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                              (*pMVar20,(MethodInfo *)0x0);
                    GLRenderer::GLRenderer_DrawLines3D
                              ((this->fields)._coneCirclePoints,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
                    pLVar2 = (this->fields)._targetLight;
                    if ((pLVar2 != (Light *)0x0) &&
                       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_transform((Component *)pLVar2,(MethodInfo *)0x0),
                       pTVar3 != (Transform *)0x0)) {
                      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                         (&VStack_5,pTVar3,(MethodInfo *)0x0);
                      uStack_11._0_4_ = pVVar4->x;
                      uStack_11._4_4_ = pVVar4->y;
                      fStack_21 = pVVar4->z;
                      QStack_19.x = (float)uStack_8;
                      QStack_19.y = 0.0;
                      QStack_19.z = 0.0;
                      QStack_19.w = 0.0;
                      VStack_5.z = (float)pSStack_9 + fStack_21 * fStack_12;
                      startPoint.z = (float)ppSStack_7;
                      startPoint.x = (float)(undefined4)uStack_6;
                      startPoint.y = (float)uStack_6._4_4_;
                      endPoint.y = uStack_8._4_4_ + (float)uStack_11._4_4_ * fStack_12;
                      endPoint.x = (float)uStack_8 + (float)(undefined4)uStack_11 * fStack_12;
                      endPoint.z = VStack_5.z;
                      GLRenderer::GLRenderer_DrawLine3D(startPoint,endPoint,(MethodInfo *)0x0);
                      pLVar2 = (this->fields)._targetLight;
                      if ((pLVar2 != (Light *)0x0) &&
                         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_transform((Component *)pLVar2,(MethodInfo *)0x0),
                         pTVar3 != (Transform *)0x0)) {
                        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                 Transform_get_right(&VStack_5,pTVar3,(MethodInfo *)0x0);
                        uStack_11._0_4_ = pVVar4->x;
                        uStack_11._4_4_ = pVVar4->y;
                        fStack_21 = pVVar4->z;
                        VStack_5.z = (float)pSStack_9 + fStack_21 * fStack_12;
                        startPoint_00.z = (float)ppSStack_7;
                        startPoint_00.x = (float)(undefined4)uStack_6;
                        startPoint_00.y = (float)uStack_6._4_4_;
                        endPoint_00.y = uStack_8._4_4_ + (float)uStack_11._4_4_ * fStack_12;
                        endPoint_00.x = QStack_19.x + (float)(undefined4)uStack_11 * fStack_12;
                        endPoint_00.z = VStack_5.z;
                        GLRenderer::GLRenderer_DrawLine3D
                                  (startPoint_00,endPoint_00,(MethodInfo *)0x0);
                        pLVar2 = (this->fields)._targetLight;
                        if ((pLVar2 != (Light *)0x0) &&
                           (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_get_transform((Component *)pLVar2,(MethodInfo *)0x0),
                           pTVar3 != (Transform *)0x0)) {
                          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                   Transform_get_up(&VStack_5,pTVar3,(MethodInfo *)0x0);
                          uStack_11._0_4_ = pVVar4->x;
                          uStack_11._4_4_ = pVVar4->y;
                          fStack_21 = pVVar4->z;
                          VStack_5.z = (float)pSStack_9 - fStack_21 * fStack_12;
                          startPoint_01.z = (float)ppSStack_7;
                          startPoint_01.x = (float)(undefined4)uStack_6;
                          startPoint_01.y = (float)uStack_6._4_4_;
                          endPoint_01.y = uStack_8._4_4_ - (float)uStack_11._4_4_ * fStack_12;
                          endPoint_01.x = QStack_19.x - (float)(undefined4)uStack_11 * fStack_12;
                          endPoint_01.z = VStack_5.z;
                          GLRenderer::GLRenderer_DrawLine3D
                                    (startPoint_01,endPoint_01,(MethodInfo *)0x0);
                          pLVar2 = (this->fields)._targetLight;
                          if ((pLVar2 != (Light *)0x0) &&
                             (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_get_transform
                                                 ((Component *)pLVar2,(MethodInfo *)0x0),
                             pTVar3 != (Transform *)0x0)) {
                            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                     Transform_get_right(&VStack_5,pTVar3,(MethodInfo *)0x0);
                            uStack_11._0_4_ = pVVar4->x;
                            uStack_11._4_4_ = pVVar4->y;
                            fStack_21 = pVVar4->z;
                            VStack_5.z = (float)pSStack_9 - fStack_21 * fStack_12;
                            startPoint_02.z = (float)ppSStack_7;
                            startPoint_02.x = (float)(undefined4)uStack_6;
                            startPoint_02.y = (float)uStack_6._4_4_;
                            endPoint_02.y = uStack_8._4_4_ - (float)uStack_11._4_4_ * fStack_12;
                            endPoint_02.x = QStack_19.x - (float)(undefined4)uStack_11 * fStack_12;
                            endPoint_02.z = VStack_5.z;
                            GLRenderer::GLRenderer_DrawLine3D
                                      (startPoint_02,endPoint_02,(MethodInfo *)0x0);
                            this_00 = (this->fields)._._gizmo;
                            if (this_00 != (Gizmo *)0x0) {
                              pSStack_10 = (SpotLightGizmo3D_AngleTick__Array *)
                                           UnityEngine.UIElementsModule.dll::UnityEngine::UIElements
                                           ::PointerEventBase`1[System::Object]::
                                           PointerEventBase_1_System_Object__get_pointerType
                                                     ((PointerEventBase_1_System_Object_ *)this_00,
                                                      (MethodInfo *)0x0);
                              pGVar22 = (this->fields)._dirSnapTick;
                              if (pGVar22 != (GizmoCap2D *)0x0) {
                                pSVar23 = UnityEngine.AndroidJNIModule.dll::UnityEngine::
                                          AndroidJavaObject::AndroidJavaObject__GetRawClass
                                                    ((AndroidJavaObject *)pGVar22,(MethodInfo *)0x0);
                                if (pSStack_10 == pSVar23) {
                                  pSVar16 = (this->fields)._sharedLookAndFeel;
                                  if ((pSVar16 == (SpotLightGizmo3DLookAndFeel *)0x0) &&
                                     (pSVar16 = (this->fields)._lookAndFeel,
                                     pSVar16 == (SpotLightGizmo3DLookAndFeel *)0x0))
                                  goto code_?;
                                  GizmoLineMaterial::GizmoLineMaterial_SetColor
                                            (this_01,(pSVar16->fields)._dirSnapSegmentColor,
                                             (MethodInfo *)0x0);
                                  pMVar17 = GizmoLineMaterial::GizmoLineMaterial_get_Material
                                                     (this_01,(MethodInfo *)0x0);
                                  if (pMVar17 == (Material *)0x0) goto code_?;
                                  UnityEngine.CoreModule.dll::UnityEngine::Material::
                                  Material_SetPass(pMVar17,0,(MethodInfo *)0x0);
                                  startPoint_03.z = (float)ppSStack_7;
                                  startPoint_03.x = (float)(undefined4)uStack_6;
                                  startPoint_03.y = (float)uStack_6._4_4_;
                                  GLRenderer::GLRenderer_DrawLine3D
                                            (startPoint_03,(this->fields)._pickedWorldSnapPoint,
                                             (MethodInfo *)0x0);
                                }
                                pSStack_10 = (this->fields)._angleTicks;
                                uVar24 = 0;
                                if (pSStack_10 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                                  ppSStack_7 = pSStack_10->vector;
                                  for (; (int)uVar24 < (int)pSStack_10->max_length;
                                      uVar24 = uVar24 + 1) {
                                    if (pSStack_10->max_length <= uVar24) goto code_?;
                                    if ((*ppSStack_7 == (SpotLightGizmo3D_AngleTick *)0x0) ||
                                       (pGVar22 = ((*ppSStack_7)->fields).Tick,
                                       pGVar22 == (GizmoCap2D *)0x0)) goto code_?;
                                    pGStack_25 = pGVar22;
                                    (*(code *)(pGVar22->klass->vtable).Render_1.method)();
                                    ppSStack_7 = ppSStack_7 + 1;
                                  }
                                  pGVar22 = (this->fields)._rangeTick;
                                  if (pGVar22 != (GizmoCap2D *)0x0) {
                                    pGStack_25 = pGVar22;
                                    (*(code *)(pGVar22->klass->vtable).Render_1.method)();
                                    pGVar22 = (this->fields)._dirSnapTick;
                                    if (pGVar22 != (GizmoCap2D *)0x0) {
                                      pGStack_25 = pGVar22;
                                      (*(code *)(pGVar22->klass->vtable).Render_1.method)();
                                      return;
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
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void OnGizmoUpdateBegin() */

void Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_OnGizmoUpdateBegin
               (SpotLightGizmo3D *this,MethodInfo *method)

{
  bVar1 = SpotLightGizmo3D_IsTargetReady(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields)._._gizmo;
  if (pGVar2 != (Gizmo *)0x0) {
    this_00 = (pGVar2->fields)._transform;
    this_01 = (this->fields)._targetLight;
    if (((this_01 != (Light *)0x0) &&
        (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_01,(MethodInfo *)0x0), this_02 != (Transform *)0x0))
       && (pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0),
          this_00 != (GizmoTransform *)0x0)) {
      GizmoTransform::GizmoTransform_set_Position3D(this_00,*pVVar3,(MethodInfo *)0x0);
      SpotLightGizmo3D_UpdateTicks(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean OwnsHandle(Int32) */

bool Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_OwnsHandle
               (SpotLightGizmo3D *this,int32_t handleId,MethodInfo *method)

{
  uVar1 = 0;
  pSVar2 = (this->fields)._angleTicks;
  if (pSVar2 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
    ppSVar3 = pSVar2->vector;
    for (; (int)uVar1 < (int)pSVar2->max_length; uVar1 = uVar1 + 1) {
      if (pSVar2->max_length <= uVar1) goto code_?;
      if ((*ppSVar3 == (SpotLightGizmo3D_AngleTick *)0x0) ||
         (pGVar4 = ((*ppSVar3)->fields).Tick, pGVar4 == (GizmoCap2D *)0x0)) goto code_?;
      pvVar5 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
               AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar4,(MethodInfo *)0x0);
      if (pvVar5 == (void *)handleId) {
        return 1;
      }
      ppSVar3 = ppSVar3 + 1;
    }
    pGVar4 = (this->fields)._dirSnapTick;
    if (pGVar4 != (GizmoCap2D *)0x0) {
      pvVar5 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
               AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar4,(MethodInfo *)0x0);
      if ((void *)handleId == pvVar5) {
        return 1;
      }
      pGVar4 = (this->fields)._rangeTick;
      if (pGVar4 != (GizmoCap2D *)0x0) {
        pvVar5 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                 AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar4,(MethodInfo *)0x0);
        return (void *)handleId == pvVar5;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void SetupSharedLookAndFeel() */

void Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_SetupSharedLookAndFeel
               (SpotLightGizmo3D *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._sharedLookAndFeel;
  if (((pSVar1 != (SpotLightGizmo3DLookAndFeel *)0x0) ||
      (pSVar1 = (this->fields)._lookAndFeel, pSVar1 != (SpotLightGizmo3DLookAndFeel *)0x0)) &&
     (pGVar2 = (this->fields)._dirSnapTick, pGVar2 != (GizmoCap2D *)0x0)) {
    pGVar3 = (pSVar1->fields)._dirSnapTickLookAndFeel;
    ppGVar4 = &(pGVar2->fields)._sharedLookAndFeel;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    pSVar1 = (this->fields)._sharedLookAndFeel;
    if (((pSVar1 != (SpotLightGizmo3DLookAndFeel *)0x0) ||
        (pSVar1 = (this->fields)._lookAndFeel, pSVar1 != (SpotLightGizmo3DLookAndFeel *)0x0)) &&
       (pGVar2 = (this->fields)._rangeTick, pGVar2 != (GizmoCap2D *)0x0)) {
      pGVar3 = (pSVar1->fields)._tickLookAndFeel;
      ppGVar4 = &(pGVar2->fields)._sharedLookAndFeel;
      *ppGVar4 = pGVar3;
      func_?(ppGVar4,pGVar3);
      pSVar5 = (this->fields)._angleTicks;
      uVar6 = 0;
      if (pSVar5 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
        ppSVar7 = pSVar5->vector;
        while( true ) {
          if ((int)pSVar5->max_length <= (int)uVar6) {
            return;
          }
          if (pSVar5->max_length <= uVar6) break;
          pSVar1 = (this->fields)._sharedLookAndFeel;
          if (pSVar1 == (SpotLightGizmo3DLookAndFeel *)0x0) {
            pSVar1 = (this->fields)._lookAndFeel;
          }
          if (((*ppSVar7 == (SpotLightGizmo3D_AngleTick *)0x0) ||
              (pSVar1 == (SpotLightGizmo3DLookAndFeel *)0x0)) ||
             (pGVar2 = ((*ppSVar7)->fields).Tick, pGVar2 == (GizmoCap2D *)0x0))
          goto code_?;
          pGVar3 = (pSVar1->fields)._tickLookAndFeel;
          ppGVar4 = &(pGVar2->fields)._sharedLookAndFeel;
          *ppGVar4 = pGVar3;
          func_?(ppGVar4,pGVar3);
          uVar6 = uVar6 + 1;
          ppSVar7 = ppSVar7 + 1;
        }
        func_?();
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SnapDirection() */

void Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_SnapDirection
               (SpotLightGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
  }
  this_01 = (RTScene *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    pOVar2 = pOVar1[2].klass;
    this_00 = (this->fields)._._gizmo;
    if ((((this_00 != (Gizmo *)0x0) &&
         (pCVar3 = Gizmo::Gizmo_GetWorkCamera(this_00,(MethodInfo *)0x0),
         pOVar2 != (Object__Class *)0x0)) &&
        (pRVar4 = (Ray *)func_?(&stack0xffffffb0,6,TypeInfo__RTG__IInputDevice,pOVar2,
                                          pCVar3), this_01 != (RTScene *)0x0)) &&
       (this_02 = (IPAddress *)
                  RTScene::RTScene_Raycast
                            (this_01,*pRVar4,SceneRaycastPrecision__Enum_BestFit,
                             (this->fields)._raycastFilter,(MethodInfo *)0x0),
       this_02 != (IPAddress *)0x0)) {
      bVar5 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::UQuery+SingleQueryMatcher
               ::UQuery_SingleQueryMatcher_IsInUse
                         ((UQuery_SingleQueryMatcher *)this_02,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        bVar5 = System.dll::System::Net::IPAddress::IPAddress_get_IsIPv6(this_02,(MethodInfo *)0x0)
        ;
        if (bVar5 == 0) {
          return;
        }
        pUVar6 = (this_02->fields)._numbers;
      }
      else {
        pUVar6 = (UInt16__Array *)(this_02->fields)._addressOrScopeId;
      }
      if (pUVar6 != (UInt16__Array *)0x0) {
        uVar7._0_4_ = pUVar6->max_length;
        uVar7._4_2_ = pUVar6->vector[0];
        uVar7._6_2_ = pUVar6->vector[1];
        fVar8 = *(float *)(pUVar6->vector + 2);
        (this->fields)._pickedWorldSnapPoint.x = (float)(undefined4)uVar7;
        (this->fields)._pickedWorldSnapPoint.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        (this->fields)._pickedWorldSnapPoint.z = fVar8;
        uVar9 = (this->fields)._pickedWorldSnapPoint.x;
        uVar10 = (this->fields)._pickedWorldSnapPoint.y;
        pLVar11 = (this->fields)._targetLight;
        if ((pLVar11 != (Light *)0x0) &&
           (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pLVar11,(MethodInfo *)0x0), pTVar12 != (Transform *)0x0
           )) {
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffb8,pTVar12,(MethodInfo *)0x0);
          uVar14 = pVVar13->x;
          uVar15 = pVVar13->y;
          fVar16 = pVVar13->z;
          fVar17 = (float)uVar9 - (float)uVar14;
          fVar18 = (float)uVar10 - (float)uVar15;
          fVar19 = (float10)func_?();
          if (_UNK_? < (float)fVar19) {
            pLVar11 = (this->fields)._targetLight;
            if (pLVar11 == (Light *)0x0) goto code_?;
            pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pLVar11,(MethodInfo *)0x0);
            value.y = fVar18;
            value.x = fVar17;
            value.z = fVar8 - fVar16;
            pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                ((Vector3 *)&stack0xffffffb8,value,(MethodInfo *)0x0);
            TransformEx::TransformEx_Align
                      ((Quaternion *)&stack0xffffffb8,pTVar12,*pVVar13,TransformAxis__Enum_PositiveZ
                       ,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void UpdateTicks() */

void Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_UpdateTicks
               (SpotLightGizmo3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    pCVar2 = Gizmo::Gizmo_GetWorkCamera(pGVar1,(MethodInfo *)0x0);
    if (pCVar2 != (Camera *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pCVar2,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0);
        uVar5 = pVVar4->x;
        uVar6 = pVVar4->y;
        fVar7 = pVVar4->z;
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pCVar2,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0);
          fVar8 = pVVar4->x;
          fVar9 = pVVar4->y;
          fVar10 = pVVar4->z;
          value_06.y = (float)uVar6;
          value_06.x = (float)uVar5;
          value_06.z = fVar7;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                             ((Vector3 *)&stack0xfffffff0,value_06,(MethodInfo *)0x0);
          fVar7 = pVVar4->x;
          fVar11 = pVVar4->y;
          fVar12 = pVVar4->z;
          pGVar1 = (this->fields)._._gizmo;
          fVar8 = (float)((uint)(fVar9 * fVar11 + fVar8 * fVar7 + fVar10 * fVar12) ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          if (pGVar1 != (Gizmo *)0x0) {
            pSVar13 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                      PointerEventBase`1[System::Object]::
                      PointerEventBase_1_System_Object__get_pointerType
                                ((PointerEventBase_1_System_Object_ *)pGVar1,(MethodInfo *)0x0);
            pGVar14 = (this->fields)._dirSnapTick;
            if (pGVar14 != (GizmoCap2D *)0x0) {
              pSVar15 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                        AndroidJavaObject__GetRawClass
                                  ((AndroidJavaObject *)pGVar14,(MethodInfo *)0x0);
              if (pSVar13 == pSVar15) {
                uVar16 = (this->fields)._pickedWorldSnapPoint.x;
                uVar17 = (this->fields)._pickedWorldSnapPoint.y;
                pGVar14 = (this->fields)._dirSnapTick;
                if (pGVar14 != (GizmoCap2D *)0x0) {
                  GizmoCap::GizmoCap_SetVisible
                            ((GizmoCap *)pGVar14,
                             _UNK_? <
                             fVar11 * (float)uVar17 + fVar7 * (float)uVar16 +
                             fVar12 * (this->fields)._pickedWorldSnapPoint.z + fVar8,
                             (MethodInfo *)0x0);
                  pGVar1 = (this->fields)._._gizmo;
                  pGVar14 = (this->fields)._dirSnapTick;
                  if (pGVar1 != (Gizmo *)0x0) {
                    pCVar2 = Gizmo::Gizmo_GetWorkCamera(pGVar1,(MethodInfo *)0x0);
                    if (pCVar2 != (Camera *)0x0) {
                      pVVar18 = &(this->fields)._pickedWorldSnapPoint;
                      pVVar4 = (Vector3 *)pVVar18->x;
                      this_01 = (Camera *)pVVar18->y;
                      this_00 = (Camera *)0x0;
                      pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                Camera_WorldToScreenPoint_1
                                          ((Vector3 *)&stack0xffffffe4,pCVar2,*pVVar18,
                                           (MethodInfo *)0x0);
                      value_00.x = pVVar18->x;
                      value_00.y = pVVar18->y;
                      if (pGVar14 != (GizmoCap2D *)0x0) {
                        GizmoCap2D::GizmoCap2D_set_Position(pGVar14,value_00,(MethodInfo *)0x0);
                        goto code_?;
                      }
                    }
                  }
                }
              }
              else {
                pLVar19 = (this->fields)._targetLight;
                if (pLVar19 != (Light *)0x0) {
                  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pLVar19,(MethodInfo *)0x0);
                  if (pTVar3 != (Transform *)0x0) {
                    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_position
                                       ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0);
                    fVar10 = pVVar4->x;
                    this_00 = (Camera *)pVVar4->y;
                    fVar7 = pVVar4->z;
                    pGVar14 = (this->fields)._dirSnapTick;
                    pGVar1 = (this->fields)._._gizmo;
                    if (pGVar1 != (Gizmo *)0x0) {
                      fVar9 = fVar10;
                      this_01 = Gizmo::Gizmo_GetWorkCamera(pGVar1,(MethodInfo *)0x0);
                      if (this_01 != (Camera *)0x0) {
                        pVVar4 = (Vector3 *)&stack0xffffffe4;
                        pCVar2 = (Camera *)&UNK_?;
                        position_00.y = (float)this_00;
                        position_00.x = fVar10;
                        position_00.z = fVar7;
                        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                  Camera_WorldToScreenPoint_1
                                            (pVVar4,this_01,position_00,(MethodInfo *)0x0);
                        value.x = pVVar18->x;
                        value.y = pVVar18->y;
                        if (pGVar14 != (GizmoCap2D *)0x0) {
                          puVar20 = &UNK_?;
                          GizmoCap2D::GizmoCap2D_set_Position(pGVar14,value,(MethodInfo *)0x0);
                          this_02 = (this->fields)._dirSnapTick;
                          if (_UNK_? <
                              (float)pCVar2 * fVar9 + (float)pVVar4 * (float)puVar20 +
                              (float)this_01 * (float)pGVar14 + fVar8) {
                            if (this_02 != (GizmoCap2D *)0x0) {
                              GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_02,1,(MethodInfo *)0x0)
                              ;
                              goto code_?;
                            }
                          }
                          else if (this_02 != (GizmoCap2D *)0x0) {
                            GizmoCap::GizmoCap_SetVisible((GizmoCap *)this_02,0,(MethodInfo *)0x0);
code_?:
                            pVVar18 = SpotLightGizmo3D_CalcConeBase
                                                ((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0)
                            ;
                            uVar21._0_4_ = pVVar18->x;
                            uVar21._4_4_ = pVVar18->y;
                            fVar7 = pVVar18->z;
                            pLVar19 = (this->fields)._targetLight;
                            if (pLVar19 != (Light *)0x0) {
                              fVar8 = (float)uVar21;
                              fVar9 = uVar21._4_4_;
                              fVar11 = fVar7;
                              fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Light::
                                      Light_get_spotAngle(pLVar19,(MethodInfo *)0x0);
                              pLVar19 = (this->fields)._targetLight;
                              if (pLVar19 != (Light *)0x0) {
                                fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Light::
                                         Light_get_range(pLVar19,(MethodInfo *)0x0);
                                dVar22 = (double)(fVar10 * _UNK_? * _UNK_?);
                                func_?();
                                pLVar19 = (this->fields)._targetLight;
                                fVar12 = (float)dVar22 * fVar12;
                                if (pLVar19 != (Light *)0x0) {
                                  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_transform
                                                      ((Component *)pLVar19,(MethodInfo *)0x0);
                                  if (pTVar3 != (Transform *)0x0) {
                                    pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_get_right((Vector3 *)&stack0xffffffe4,
                                                                  pTVar3,(MethodInfo *)0x0);
                                    uVar23._0_4_ = pVVar18->x;
                                    uVar23._4_4_ = pVVar18->y;
                                    fVar10 = pVVar18->z;
                                    pLVar19 = (this->fields)._targetLight;
                                    if (pLVar19 != (Light *)0x0) {
                                      uVar24 = uVar23;
                                      fVar25 = fVar10;
                                      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_get_transform
                                                          ((Component *)pLVar19,(MethodInfo *)0x0);
                                      if (pTVar3 != (Transform *)0x0) {
                                        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_get_up((Vector3 *)&stack0xffffff84,
                                                                     pTVar3,(MethodInfo *)0x0);
                                        uVar26._0_4_ = pVVar18->x;
                                        fStack_27 = pVVar18->y;
                                        fVar28 = pVVar18->z;
                                        pGVar14 = (this->fields)._rangeTick;
                                        position.z = fVar7;
                                        position.x = (float)uVar21;
                                        position.y = SUB84(uVar21,4);
                                        fVar7 = (float)uVar26;
                                        fVar29 = fStack_27;
                                        fVar30 = fVar28;
                                        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                                  Camera_WorldToScreenPoint_1
                                                            ((Vector3 *)&puStack_31,this_00,position
                                                             ,(MethodInfo *)0x0);
                                        value_01.x = pVVar18->x;
                                        value_01.y = pVVar18->y;
                                        if (pGVar14 != (GizmoCap2D *)0x0) {
                                          GizmoCap2D::GizmoCap2D_set_Position
                                                    (pGVar14,value_01,(MethodInfo *)0x0);
                                          pGVar14 = (this->fields)._rangeTick;
                                          if (pGVar14 != (GizmoCap2D *)0x0) {
                                            GizmoCap::GizmoCap_SetVisible
                                                      ((GizmoCap *)pGVar14,
                                                       _UNK_? <
                                                       fVar8 * (float)pCVar2 +
                                                       fVar9 * (float)pVVar4 +
                                                       fVar11 * (float)this_01 +
                                                       (float)&stack0xffffffe4,(MethodInfo *)0x0);
                                            pSVar32 = (this->fields)._angleTicks;
                                            if (pSVar32 != (SpotLightGizmo3D_AngleTick__Array *)0x0)
                                            {
                                              if (pSVar32->max_length < 3) goto code_?;
                                              pSVar33 = pSVar32->vector[2];
                                              fVar34 = fVar7 * fVar12;
                                              fVar35 = fVar29 * fVar12;
                                              fVar36 = fVar30 * fVar12;
                                              if (pSVar33 != (SpotLightGizmo3D_AngleTick *)0x0) {
                                                (pSVar33->fields).Position.x = fVar8 - fVar34;
                                                (pSVar33->fields).Position.y = fVar9 - fVar35;
                                                (pSVar33->fields).Position.z = fVar11 - fVar36;
                                                pSVar32 = (this->fields)._angleTicks;
                                                if (pSVar32 !=
                                                    (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                                                  if (pSVar32->max_length < 3)
                                                  goto code_?;
                                                  pSVar33 = pSVar32->vector[2];
                                                  uVar37 = (uint)fVar29 ^
                                                                                                                      
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ;
                                                  fVar30 = (float)((uint)fVar30 ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (pSVar33 != (SpotLightGizmo3D_AngleTick *)0x0)
                                                  {
                                                    (pSVar33->fields).LightAxis.x =
                                                         (float)((uint)fVar7 ^
                                                                                                                                
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  (pSVar33->fields).LightAxis.y = (float)uVar37;
                                                  (pSVar33->fields).LightAxis.z = fVar30;
                                                  pSVar32 = (this->fields)._angleTicks;
                                                  if (pSVar32 !=
                                                      (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                                                    if (pSVar32->max_length < 3)
                                                    goto code_?;
                                                    pSVar33 = pSVar32->vector[2];
                                                    if (pSVar33 != (SpotLightGizmo3D_AngleTick *)0x0
                                                       ) {
                                                      pGVar14 = (pSVar33->fields).Tick;
                                                      pVVar18 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Camera::
                                                                Camera_WorldToScreenPoint_1
                                                                          ((Vector3 *)
                                                                           &stack0xffffffac,this_00,
                                                                           (pSVar33->fields).
                                                                           Position,(MethodInfo *)
                                                                                    0x0);
                                                      value_02.x = pVVar18->x;
                                                      value_02.y = pVVar18->y;
                                                      if (pGVar14 != (GizmoCap2D *)0x0) {
                                                        GizmoCap2D::GizmoCap2D_set_Position
                                                                  (pGVar14,value_02,
                                                                   (MethodInfo *)0x0);
                                                        pSVar32 = (this->fields)._angleTicks;
                                                        if (pSVar32 !=
                                                            (SpotLightGizmo3D_AngleTick__Array *)0x0
                                                           ) {
                                                          if (pSVar32->max_length < 3)
                                                          goto code_?;
                                                          pSVar33 = pSVar32->vector[2];
                                                          if (pSVar33 !=
                                                              (SpotLightGizmo3D_AngleTick *)0x0) {
                                                            uVar38 = (pSVar33->fields).Position.x;
                                                            uVar39 = (pSVar33->fields).Position.y;
                                                            if (_UNK_? <
                                                                (float)pVVar4 * (float)uVar39 +
                                                                (float)pCVar2 * (float)uVar38 +
                                                                (float)this_01 *
                                                                (pSVar33->fields).Position.z +
                                                                (float)&stack0xffffffe4) {
                                                              if (pSVar32->max_length < 3)
                                                              goto code_?;
                                                              if ((pSVar32->vector[2] !=
                                                                   (SpotLightGizmo3D_AngleTick *)0x0
                                                                  ) && (pGVar14 = (pSVar32->vector
                                                                                   [2]->fields).Tick
                                                                       , pGVar14 !=
                                                                         (GizmoCap2D *)0x0)) {
                                                                bVar40 = 1;
                                                                goto code_?;
                                                              }
                                                            }
                                                            else {
                                                              if (pSVar32->max_length < 3)
                                                              goto code_?;
                                                              if ((pSVar32->vector[2] !=
                                                                   (SpotLightGizmo3D_AngleTick *)0x0
                                                                  ) && (pGVar14 = (pSVar32->vector
                                                                                   [2]->fields).Tick
                                                                       , pGVar14 !=
                                                                         (GizmoCap2D *)0x0)) {
                                                                bVar40 = 0;
code_?:
                                                                GizmoCap::GizmoCap_SetVisible
                                                                          ((GizmoCap *)pGVar14,
                                                                           bVar40,(MethodInfo *)0x0)
                                                                ;
                                                                pSVar32 = (this->fields)._angleTicks
                                                                ;
                                                                if (pSVar32 !=
                                                                    (
                                                  SpotLightGizmo3D_AngleTick__Array *)0x0) {
                                                    if (pSVar32->max_length == 0)
                                                    goto code_?;
                                                    pSVar33 = pSVar32->vector[0];
                                                    if (pSVar33 != (SpotLightGizmo3D_AngleTick *)0x0
                                                       ) {
                                                      (pSVar33->fields).Position.x = fVar8 + fVar34;
                                                      (pSVar33->fields).Position.y = fVar9 + fVar35
                                                      ;
                                                      (pSVar33->fields).Position.z = fVar11 + fVar36
                                                      ;
                                                      pSVar32 = (this->fields)._angleTicks;
                                                      if (pSVar32 !=
                                                          (SpotLightGizmo3D_AngleTick__Array *)0x0)
                                                      {
                                                        if (pSVar32->max_length == 0)
                                                        goto code_?;
                                                        pSVar33 = pSVar32->vector[0];
                                                        if (pSVar33 !=
                                                            (SpotLightGizmo3D_AngleTick *)0x0) {
                                                          (pSVar33->fields).LightAxis.x =
                                                               (float)uVar26;
                                                          (pSVar33->fields).LightAxis.y = fStack_27;
                                                          (pSVar33->fields).LightAxis.z = fVar28;
                                                          pSVar32 = (this->fields)._angleTicks;
                                                          if (pSVar32 !=
                                                              (SpotLightGizmo3D_AngleTick__Array *)
                                                              0x0) {
                                                            if (pSVar32->max_length == 0)
                                                            goto code_?;
                                                            pSVar33 = pSVar32->vector[0];
                                                            if (pSVar33 !=
                                                                (SpotLightGizmo3D_AngleTick *)0x0) {
                                                              pGVar14 = (pSVar33->fields).Tick;
                                                              pVVar18 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Camera::
                                                                        Camera_WorldToScreenPoint_1
                                                                                  ((Vector3 *)
                                                                                   &stack0xffffff6c,
                                                                                   this_00,(pSVar33
                                                  ->fields).Position,(MethodInfo *)0x0);
                                                  value_03.x = pVVar18->x;
                                                  value_03.y = pVVar18->y;
                                                  if (pGVar14 != (GizmoCap2D *)0x0) {
                                                    GizmoCap2D::GizmoCap2D_set_Position
                                                              (pGVar14,value_03,(MethodInfo *)0x0);
                                                    pSVar32 = (this->fields)._angleTicks;
                                                    if (pSVar32 !=
                                                        (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                                                      if (pSVar32->max_length == 0)
                                                      goto code_?;
                                                      pSVar33 = pSVar32->vector[0];
                                                      if (pSVar33 !=
                                                          (SpotLightGizmo3D_AngleTick *)0x0) {
                                                        uVar41 = (pSVar33->fields).Position.x;
                                                        uVar42 = (pSVar33->fields).Position.y;
                                                        if (_UNK_? <
                                                            (float)pVVar4 * (float)uVar42 +
                                                            (float)pCVar2 * (float)uVar41 +
                                                            (float)this_01 *
                                                            (pSVar33->fields).Position.z +
                                                            (float)&stack0xffffffe4) {
                                                          if (pSVar32->max_length == 0)
                                                          goto code_?;
                                                          if ((pSVar32->vector[0] !=
                                                               (SpotLightGizmo3D_AngleTick *)0x0) &&
                                                             (pGVar14 = (pSVar32->vector[0]->fields)
                                                                        .Tick,
                                                             pGVar14 != (GizmoCap2D *)0x0)) {
                                                            bVar40 = 1;
                                                            goto code_?;
                                                          }
                                                        }
                                                        else {
                                                          if (pSVar32->max_length == 0)
                                                          goto code_?;
                                                          if ((pSVar32->vector[0] !=
                                                               (SpotLightGizmo3D_AngleTick *)0x0) &&
                                                             (pGVar14 = (pSVar32->vector[0]->fields)
                                                                        .Tick,
                                                             pGVar14 != (GizmoCap2D *)0x0)) {
                                                            bVar40 = 0;
code_?:
                                                            GizmoCap::GizmoCap_SetVisible
                                                                      ((GizmoCap *)pGVar14,bVar40,
                                                                       (MethodInfo *)0x0);
                                                            pSVar32 = (this->fields)._angleTicks;
                                                            if (pSVar32 !=
                                                                (SpotLightGizmo3D_AngleTick__Array *
                                                                )0x0) {
                                                              if (pSVar32->max_length < 4)
                                                              goto code_?;
                                                              pSVar33 = pSVar32->vector[3];
                                                              fVar7 = (float)uVar24 * fVar12;
                                                              uVar26._0_4_ = SUB84(uVar24,4) *
                                                                             fVar12;
                                                              fVar12 = fVar25 * fVar12;
                                                              if (pSVar33 !=
                                                                  (SpotLightGizmo3D_AngleTick *)0x0)
                                                              {
                                                                (pSVar33->fields).Position.x =
                                                                     fVar8 - fVar7;
                                                                (pSVar33->fields).Position.y =
                                                                     fVar9 - (float)uVar26;
                                                                (pSVar33->fields).Position.z =
                                                                     fVar11 - fVar12;
                                                                pSVar32 = (this->fields)._angleTicks
                                                                ;
                                                                if (pSVar32 !=
                                                                    (
                                                  SpotLightGizmo3D_AngleTick__Array *)0x0) {
                                                    if (pSVar32->max_length < 4)
                                                    goto code_?;
                                                    pSVar33 = pSVar32->vector[3];
                                                    fVar28 = (float)((uint)SUB84(uVar24,4) ^
                                                                                                                                        
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  fVar25 = (float)((uint)fVar25 ^
                                                                                                                                    
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (pSVar33 != (SpotLightGizmo3D_AngleTick *)0x0)
                                                  {
                                                    (pSVar33->fields).LightAxis.x =
                                                         (float)((uint)(float)uVar24 ^
                                                                                                                                
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  (pSVar33->fields).LightAxis.y = fVar28;
                                                  (pSVar33->fields).LightAxis.z = fVar25;
                                                  pSVar32 = (this->fields)._angleTicks;
                                                  if (pSVar32 !=
                                                      (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                                                    if (pSVar32->max_length < 4)
                                                    goto code_?;
                                                    pSVar33 = pSVar32->vector[3];
                                                    if (pSVar33 != (SpotLightGizmo3D_AngleTick *)0x0
                                                       ) {
                                                      pGVar14 = (pSVar33->fields).Tick;
                                                      pVVar18 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Camera::
                                                                Camera_WorldToScreenPoint_1
                                                                          ((Vector3 *)
                                                                           &stack0xffffffe4,this_00,
                                                                           (pSVar33->fields).
                                                                           Position,(MethodInfo *)
                                                                                    0x0);
                                                      value_04.x = pVVar18->x;
                                                      value_04.y = pVVar18->y;
                                                      if (pGVar14 != (GizmoCap2D *)0x0) {
                                                        GizmoCap2D::GizmoCap2D_set_Position
                                                                  (pGVar14,value_04,
                                                                   (MethodInfo *)0x0);
                                                        pSVar32 = (this->fields)._angleTicks;
                                                        if (pSVar32 !=
                                                            (SpotLightGizmo3D_AngleTick__Array *)0x0
                                                           ) {
                                                          if (pSVar32->max_length < 4)
                                                          goto code_?;
                                                          pSVar33 = pSVar32->vector[3];
                                                          if (pSVar33 !=
                                                              (SpotLightGizmo3D_AngleTick *)0x0) {
                                                            uVar43 = (pSVar33->fields).Position.x;
                                                            uVar44 = (pSVar33->fields).Position.y;
                                                            if (_UNK_? <
                                                                (float)pVVar4 * (float)uVar44 +
                                                                (float)pCVar2 * (float)uVar43 +
                                                                (float)this_01 *
                                                                (pSVar33->fields).Position.z +
                                                                (float)&stack0xffffffe4) {
                                                              if (pSVar32->max_length < 4)
                                                              goto code_?;
                                                              if ((pSVar32->vector[3] !=
                                                                   (SpotLightGizmo3D_AngleTick *)0x0
                                                                  ) && (pGVar14 = (pSVar32->vector
                                                                                   [3]->fields).Tick
                                                                       , pGVar14 !=
                                                                         (GizmoCap2D *)0x0)) {
                                                                bVar40 = 1;
                                                                goto code_?;
                                                              }
                                                            }
                                                            else {
                                                              if (pSVar32->max_length < 4)
                                                              goto code_?;
                                                              if ((pSVar32->vector[3] !=
                                                                   (SpotLightGizmo3D_AngleTick *)0x0
                                                                  ) && (pGVar14 = (pSVar32->vector
                                                                                   [3]->fields).Tick
                                                                       , pGVar14 !=
                                                                         (GizmoCap2D *)0x0)) {
                                                                bVar40 = 0;
code_?:
                                                                GizmoCap::GizmoCap_SetVisible
                                                                          ((GizmoCap *)pGVar14,
                                                                           bVar40,(MethodInfo *)0x0)
                                                                ;
                                                                pSVar32 = (this->fields)._angleTicks
                                                                ;
                                                                if (pSVar32 !=
                                                                    (
                                                  SpotLightGizmo3D_AngleTick__Array *)0x0) {
                                                    if (pSVar32->max_length < 2)
                                                    goto code_?;
                                                    pSVar33 = pSVar32->vector[1];
                                                    if (pSVar33 != (SpotLightGizmo3D_AngleTick *)0x0
                                                       ) {
                                                      (pSVar33->fields).Position.x = fVar8 + fVar7;
                                                      (pSVar33->fields).Position.y =
                                                           fVar9 + (float)uVar26;
                                                      (pSVar33->fields).Position.z = fVar11 + fVar12
                                                      ;
                                                      pSVar32 = (this->fields)._angleTicks;
                                                      if (pSVar32 !=
                                                          (SpotLightGizmo3D_AngleTick__Array *)0x0)
                                                      {
                                                        if (pSVar32->max_length < 2)
                                                        goto code_?;
                                                        pSVar33 = pSVar32->vector[1];
                                                        if (pSVar33 !=
                                                            (SpotLightGizmo3D_AngleTick *)0x0) {
                                                          (pSVar33->fields).LightAxis.x =
                                                               (float)uVar23;
                                                          (pSVar33->fields).LightAxis.y =
                                                               uVar23._4_4_;
                                                          (pSVar33->fields).LightAxis.z = fVar10;
                                                          pSVar32 = (this->fields)._angleTicks;
                                                          if (pSVar32 !=
                                                              (SpotLightGizmo3D_AngleTick__Array *)
                                                              0x0) {
                                                            if (pSVar32->max_length < 2)
                                                            goto code_?;
                                                            pSVar33 = pSVar32->vector[1];
                                                            if (pSVar33 !=
                                                                (SpotLightGizmo3D_AngleTick *)0x0) {
                                                              pGVar14 = (pSVar33->fields).Tick;
                                                              pVVar18 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Camera::
                                                                        Camera_WorldToScreenPoint_1
                                                                                  ((Vector3 *)
                                                                                   &stack0xffffffe4,
                                                                                   this_00,(pSVar33
                                                  ->fields).Position,(MethodInfo *)0x0);
                                                  value_05.x = pVVar18->x;
                                                  value_05.y = pVVar18->y;
                                                  if (pGVar14 != (GizmoCap2D *)0x0) {
                                                    GizmoCap2D::GizmoCap2D_set_Position
                                                              (pGVar14,value_05,(MethodInfo *)0x0);
                                                    pSVar32 = (this->fields)._angleTicks;
                                                    if (pSVar32 !=
                                                        (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                                                      if (pSVar32->max_length < 2)
                                                      goto code_?;
                                                      pSVar33 = pSVar32->vector[1];
                                                      if (pSVar33 !=
                                                          (SpotLightGizmo3D_AngleTick *)0x0) {
                                                        uVar45 = (pSVar33->fields).Position.x;
                                                        uVar46 = (pSVar33->fields).Position.y;
                                                        if (_UNK_? <
                                                            (float)pVVar4 * (float)uVar46 +
                                                            (float)pCVar2 * (float)uVar45 +
                                                            (float)this_01 *
                                                            (pSVar33->fields).Position.z +
                                                            (float)&stack0xffffffe4) {
                                                          if (pSVar32->max_length < 2)
                                                          goto code_?;
                                                          if ((pSVar32->vector[1] !=
                                                               (SpotLightGizmo3D_AngleTick *)0x0) &&
                                                             (pGVar14 = (pSVar32->vector[1]->fields)
                                                                        .Tick,
                                                             pGVar14 != (GizmoCap2D *)0x0)) {
                                                            GizmoCap::GizmoCap_SetVisible
                                                                      ((GizmoCap *)pGVar14,1,
                                                                       (MethodInfo *)0x0);
                                                            return;
                                                          }
                                                        }
                                                        else {
                                                          if (pSVar32->max_length < 2)
                                                          goto code_?;
                                                          if ((pSVar32->vector[1] !=
                                                               (SpotLightGizmo3D_AngleTick *)0x0) &&
                                                             (pGVar14 = (pSVar32->vector[1]->fields)
                                                                        .Tick,
                                                             pGVar14 != (GizmoCap2D *)0x0)) {
                                                            GizmoCap::GizmoCap_SetVisible
                                                                      ((GizmoCap *)pGVar14,0,
                                                                       (MethodInfo *)0x0);
                                                            return;
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
code_?:
  func_?();
  pcVar47 = (code *)swi(3);
  (*pcVar47)();
  return;
}


/* SpotLightGizmo3D() */

void Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D__ctor
               (SpotLightGizmo3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__SpotLightGizmo3D__AngleTick);
    func_?(&TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
    func_?(&TypeInfo__RTG__Light3DSnapshot);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__RTG__SceneRaycastFilter);
    func_?(&TypeInfo__RTG__SpotLightGizmo3DHotkeys);
    func_?(&TypeInfo__RTG__SpotLightGizmo3DLookAndFeel);
    func_?(&TypeInfo__RTG__SpotLightGizmo3DSettings);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  ppLVar1 = &(this->fields)._coneCirclePoints;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  this_01 = (SceneRaycastFilter *)func_?(TypeInfo__RTG__SceneRaycastFilter);
  SceneRaycastFilter::SceneRaycastFilter__ctor(this_01,(MethodInfo *)0x0);
  ppSVar2 = &(this->fields)._raycastFilter;
  *ppSVar2 = this_01;
  func_?(ppSVar2,this_01);
  pSVar3 = (SpotLightGizmo3D_AngleTick__Array *)
           func_?(TypeInfo__RTG__SpotLightGizmo3D__AngleTick,4);
  ppSVar4 = &(this->fields)._angleTicks;
  *ppSVar4 = pSVar3;
  func_?(ppSVar4,pSVar3);
  pGVar5 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(pGVar5,(MethodInfo *)0x0);
  (this->fields)._dummyDragSession = (GizmoSglAxisOffsetDrag3D *)pGVar5;
  func_?();
  pGVar5 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(pGVar5,(MethodInfo *)0x0);
  ppGVar6 = &(this->fields)._sglAxisDrag;
  *ppGVar6 = (GizmoSglAxisOffsetDrag3D *)pGVar5;
  func_?(ppGVar6,pGVar5);
  pLVar7 = (Light3DSnapshot *)func_?(TypeInfo__RTG__Light3DSnapshot);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)pLVar7,(MethodInfo *)0x0);
  ppLVar8 = &(this->fields)._preChangeSnapshot;
  *ppLVar8 = pLVar7;
  func_?(ppLVar8,pLVar7);
  pLVar7 = (Light3DSnapshot *)func_?(TypeInfo__RTG__Light3DSnapshot);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)pLVar7,(MethodInfo *)0x0);
  ppLVar8 = &(this->fields)._postChangeSnapshot;
  *ppLVar8 = pLVar7;
  func_?(ppLVar8,pLVar7);
  this_02 = (SpotLightGizmo3DLookAndFeel *)func_?();
  SpotLightGizmo3DLookAndFeel::SpotLightGizmo3DLookAndFeel__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._lookAndFeel = this_02;
  func_?();
  method_00 = TypeInfo__RTG__SpotLightGizmo3DSettings;
  value = (SpotLightGizmo3DSettings *)func_?();
  (value->fields)._radiusSnapStep = 0.1;
  (value->fields)._rangeSnapStep = 0.1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._settings = value;
  func_?();
  value_00 = (SpotLightGizmo3DHotkeys *)func_?();
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_03 = (Hotkeys *)func_?();
  Hotkeys::Hotkeys__ctor_1
            (this_03,StringLiteral_Enable_snapping,(HotkeysStaticData)0x0,(MethodInfo *)0x0);
  if (this_03 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(this_03,KeyCode__Enum_None,(MethodInfo *)0x0);
    method_01 = (MethodInfo *)&value_00->fields;
    (this_03->fields)._lCtrl = 1;
    ((SpotLightGizmo3DHotkeys__Fields *)method_01)->_enableSnapping = this_03;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,method_01);
    (this->fields)._hotkeys = value_00;
    func_?();
    GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* SpotLightGizmo3DHotkeys get_Hotkeys() */

SpotLightGizmo3DHotkeys *
Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_get_Hotkeys
          (SpotLightGizmo3D *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._sharedHotkeys;
  if (pSVar1 == (SpotLightGizmo3DHotkeys *)0x0) {
    return (this->fields)._hotkeys;
  }
  return pSVar1;
}


/* Boolean get_IsSnapEnabled() */

bool Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_get_IsSnapEnabled
               (SpotLightGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._isSnapEnabled != 0) {
    return 1;
  }
  pSVar1 = (this->fields)._sharedHotkeys;
  if (((pSVar1 != (SpotLightGizmo3DHotkeys *)0x0) ||
      (pSVar1 = (this->fields)._hotkeys, pSVar1 != (SpotLightGizmo3DHotkeys *)0x0)) &&
     (this_00 = (pSVar1->fields)._enableSnapping, this_00 != (Hotkeys *)0x0)) {
    bVar2 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
    return bVar2;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* SpotLightGizmo3DLookAndFeel get_LookAndFeel() */

SpotLightGizmo3DLookAndFeel *
Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_get_LookAndFeel
          (SpotLightGizmo3D *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._sharedLookAndFeel;
  if (pSVar1 == (SpotLightGizmo3DLookAndFeel *)0x0) {
    return (this->fields)._lookAndFeel;
  }
  return pSVar1;
}


/* SpotLightGizmo3DSettings get_Settings() */

SpotLightGizmo3DSettings *
Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_get_Settings
          (SpotLightGizmo3D *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._sharedSettings;
  if (pSVar1 == (SpotLightGizmo3DSettings *)0x0) {
    return (this->fields)._settings;
  }
  return pSVar1;
}


/* Void set_SharedLookAndFeel(SpotLightGizmo3DLookAndFeel) */

void Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_set_SharedLookAndFeel
               (SpotLightGizmo3D *this,SpotLightGizmo3DLookAndFeel *value,MethodInfo *method)

{
  ppSVar1 = &(this->fields)._sharedLookAndFeel;
  *ppSVar1 = value;
  func_?(ppSVar1,value);
  SpotLightGizmo3D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}

