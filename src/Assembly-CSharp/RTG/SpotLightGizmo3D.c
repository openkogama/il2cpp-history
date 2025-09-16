
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
    pLVar1 = (this->fields)._targetLight;
    fVar2 = fVar2 * _UNK_? * _UNK_?;
    if (pLVar1 != (Light *)0x0) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                        (pLVar1,(MethodInfo *)0x0);
      dVar4 = (double)fVar2;
      func_?();
      return (float)dVar4 * fVar3;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
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
  pGVar2 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
  GizmoCap2D::GizmoCap2D__ctor(pGVar2,pGVar1,700,(MethodInfo *)0x0);
  (this->fields)._dirSnapTick = pGVar2;
  func_?(&(this->fields)._dirSnapTick);
  pGVar3 = (GizmoCap3D *)(this->fields)._dirSnapTick;
  if (pGVar3 == (GizmoCap3D *)0x0) {
code_?:
    func_?();
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
  }
  else {
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar3,(IGizmoDragSession *)(this->fields)._dummyDragSession,(MethodInfo *)0x0);
    pSVar5 = (this->fields)._angleTicks;
    pSVar6 = (SpotLightGizmo3D_AngleTick *)
              func_?(TypeInfo__RTG__SpotLightGizmo3D__AngleTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pSVar6,ExceptionArgument__Enum_obj,(MethodInfo *)pGVar2);
    if (pSVar5 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar6 != (SpotLightGizmo3D_AngleTick *)0x0) {
      iVar7 = func_?(pSVar6,(pSVar5->klass->_0).element_class);
      if (iVar7 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar5->max_length < 3) goto code_?;
    pSVar5->vector[2] = pSVar6;
    func_?(pSVar5->vector + 2,pSVar6);
    pSVar5 = (this->fields)._angleTicks;
    if (pSVar5 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar5->max_length < 3) goto code_?;
    pSVar6 = pSVar5->vector[2];
    pGVar1 = (this->fields)._._gizmo;
    pGVar2 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    pMVar8 = (MethodInfo *)0x0;
    GizmoCap2D::GizmoCap2D__ctor(pGVar2,pGVar1,0x2bd,(MethodInfo *)0x0);
    if (pSVar6 == (SpotLightGizmo3D_AngleTick *)0x0) goto code_?;
    (pSVar6->fields).Tick = pGVar2;
    func_?(&(pSVar6->fields).Tick,pGVar2);
    pSVar5 = (this->fields)._angleTicks;
    if (pSVar5 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar5->max_length < 3) goto code_?;
    if ((pSVar5->vector[2] == (SpotLightGizmo3D_AngleTick *)0x0) ||
       (pGVar3 = (GizmoCap3D *)(pSVar5->vector[2]->fields).Tick, pGVar3 == (GizmoCap3D *)0x0))
    goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar3,(IGizmoDragSession *)(this->fields)._sglAxisDrag,(MethodInfo *)0x0);
    pSVar5 = (this->fields)._angleTicks;
    pSVar6 = (SpotLightGizmo3D_AngleTick *)
              func_?(TypeInfo__RTG__SpotLightGizmo3D__AngleTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pSVar6,ExceptionArgument__Enum_obj,pMVar8);
    if (pSVar5 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar6 != (SpotLightGizmo3D_AngleTick *)0x0) {
      iVar7 = func_?(pSVar6,(pSVar5->klass->_0).element_class);
      if (iVar7 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar5->max_length == 0) goto code_?;
    pSVar5->vector[0] = pSVar6;
    func_?(pSVar5->vector,pSVar6);
    pSVar5 = (this->fields)._angleTicks;
    if (pSVar5 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar5->max_length == 0) goto code_?;
    pSVar6 = pSVar5->vector[0];
    pGVar1 = (this->fields)._._gizmo;
    pGVar2 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    pMVar8 = (MethodInfo *)0x0;
    GizmoCap2D::GizmoCap2D__ctor(pGVar2,pGVar1,0x2be,(MethodInfo *)0x0);
    if (pSVar6 == (SpotLightGizmo3D_AngleTick *)0x0) goto code_?;
    (pSVar6->fields).Tick = pGVar2;
    func_?(&(pSVar6->fields).Tick,pGVar2);
    pSVar5 = (this->fields)._angleTicks;
    if (pSVar5 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar5->max_length == 0) goto code_?;
    if ((pSVar5->vector[0] == (SpotLightGizmo3D_AngleTick *)0x0) ||
       (pGVar3 = (GizmoCap3D *)(pSVar5->vector[0]->fields).Tick, pGVar3 == (GizmoCap3D *)0x0))
    goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar3,(IGizmoDragSession *)(this->fields)._sglAxisDrag,(MethodInfo *)0x0);
    pSVar5 = (this->fields)._angleTicks;
    pSVar6 = (SpotLightGizmo3D_AngleTick *)
              func_?(TypeInfo__RTG__SpotLightGizmo3D__AngleTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pSVar6,ExceptionArgument__Enum_obj,pMVar8);
    if (pSVar5 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar6 != (SpotLightGizmo3D_AngleTick *)0x0) {
      iVar7 = func_?(pSVar6,(pSVar5->klass->_0).element_class);
      if (iVar7 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar5->max_length < 4) goto code_?;
    pSVar5->vector[3] = pSVar6;
    func_?(pSVar5->vector + 3,pSVar6);
    pSVar5 = (this->fields)._angleTicks;
    if (pSVar5 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar5->max_length < 4) goto code_?;
    pSVar6 = pSVar5->vector[3];
    pGVar1 = (this->fields)._._gizmo;
    pGVar2 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
    pMVar8 = (MethodInfo *)0x0;
    GizmoCap2D::GizmoCap2D__ctor(pGVar2,pGVar1,0x2bf,(MethodInfo *)0x0);
    if (pSVar6 == (SpotLightGizmo3D_AngleTick *)0x0) goto code_?;
    (pSVar6->fields).Tick = pGVar2;
    func_?(&(pSVar6->fields).Tick,pGVar2);
    pSVar5 = (this->fields)._angleTicks;
    if (pSVar5 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar5->max_length < 4) goto code_?;
    if ((pSVar5->vector[3] == (SpotLightGizmo3D_AngleTick *)0x0) ||
       (pGVar3 = (GizmoCap3D *)(pSVar5->vector[3]->fields).Tick, pGVar3 == (GizmoCap3D *)0x0))
    goto code_?;
    GizmoCap3D::GizmoCap3D_set_DragSession
              (pGVar3,(IGizmoDragSession *)(this->fields)._sglAxisDrag,(MethodInfo *)0x0);
    pSVar5 = (this->fields)._angleTicks;
    pSVar6 = (SpotLightGizmo3D_AngleTick *)
              func_?(TypeInfo__RTG__SpotLightGizmo3D__AngleTick);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pSVar6,ExceptionArgument__Enum_obj,pMVar8);
    if (pSVar5 == (SpotLightGizmo3D_AngleTick__Array *)0x0) goto code_?;
    if (pSVar6 == (SpotLightGizmo3D_AngleTick *)0x0) {
code_?:
      if (pSVar5->max_length < 2) goto code_?;
      pSVar5->vector[1] = pSVar6;
      func_?(pSVar5->vector + 1,pSVar6);
      pSVar5 = (this->fields)._angleTicks;
      if (pSVar5 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
        if (pSVar5->max_length < 2) goto code_?;
        pSVar6 = pSVar5->vector[1];
        pGVar1 = (this->fields)._._gizmo;
        pGVar2 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
        GizmoCap2D::GizmoCap2D__ctor(pGVar2,pGVar1,0x2c0,(MethodInfo *)0x0);
        if (pSVar6 != (SpotLightGizmo3D_AngleTick *)0x0) {
          (pSVar6->fields).Tick = pGVar2;
          func_?(&(pSVar6->fields).Tick,pGVar2);
          pSVar5 = (this->fields)._angleTicks;
          if (pSVar5 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
            if (pSVar5->max_length < 2) goto code_?;
            if ((pSVar5->vector[1] != (SpotLightGizmo3D_AngleTick *)0x0) &&
               (pGVar3 = (GizmoCap3D *)(pSVar5->vector[1]->fields).Tick, pGVar3 != (GizmoCap3D *)0x0
               )) {
              GizmoCap3D::GizmoCap3D_set_DragSession
                        (pGVar3,(IGizmoDragSession *)(this->fields)._sglAxisDrag,(MethodInfo *)0x0);
              pGVar1 = (this->fields)._._gizmo;
              pGVar2 = (GizmoCap2D *)func_?(TypeInfo__RTG__GizmoCap2D);
              GizmoCap2D::GizmoCap2D__ctor(pGVar2,pGVar1,0x2c1,(MethodInfo *)0x0);
              (this->fields)._rangeTick = pGVar2;
              func_?(&(this->fields)._rangeTick,pGVar2);
              pGVar3 = (GizmoCap3D *)(this->fields)._rangeTick;
              if (pGVar3 != (GizmoCap3D *)0x0) {
                GizmoCap3D::GizmoCap3D_set_DragSession
                          (pGVar3,(IGizmoDragSession *)(this->fields)._sglAxisDrag,(MethodInfo *)0x0
                          );
                SpotLightGizmo3D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                uVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
                fVar9 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                uVar10 = (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).y;
                fVar11 = (TypeInfo__UnityEngine__Vector3->static_fields->rightVector).z;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pVVar12 = &TypeInfo__UnityEngine__Vector3->static_fields->upVector;
                uVar13 = pVVar12->x;
                uVar14 = pVVar12->y;
                circleCenter.y = (float)uVar13;
                circleCenter.x = (float)uVar4;
                circleCenter.z = fVar9;
                circleRight.y = (float)uVar10;
                circleRight.x = (float)uVar14;
                circleRight.z = fVar11;
                pLVar15 = PrimitiveFactory::PrimitiveFactory_Generate3DCircleBorderPoints
                                    (circleCenter,1.0,circleRight,*pVVar12,100,(MethodInfo *)0x0);
                (this->fields)._coneCirclePoints = pLVar15;
                func_?(&(this->fields)._coneCirclePoints);
                pMVar8 = 
                MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                ;
                pSVar16 = (this->fields)._raycastFilter;
                if ((pSVar16 != (SceneRaycastFilter *)0x0) &&
                   (pLVar17 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              (pSVar16->fields)._allowedObjectTypes,
                   pLVar17 !=
                   (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
                  piVar18 = &(pLVar17->fields)._version;
                  *piVar18 = *piVar18 + 1;
                  pRVar19 = (pLVar17->fields)._items;
                  if (pRVar19 != (RegexCharClass_SingleRange__Array *)0x0) {
                    uVar20 = (pLVar17->fields)._size;
                    if (uVar20 < pRVar19->max_length) {
                      (pLVar17->fields)._size = uVar20 + 1;
                      if (pRVar19->max_length <= uVar20) goto code_?;
                      pRVar19->vector[uVar20].First = 1;
                      pRVar19->vector[uVar20].Last = 0;
                    }
                    else {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                (pLVar17,(RegexCharClass_SingleRange)0x1,
                                 pMVar8->klass->rgctx_data[0xe].method);
                    }
                    pMVar8 = 
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                    ;
                    pSVar16 = (this->fields)._raycastFilter;
                    if ((pSVar16 != (SceneRaycastFilter *)0x0) &&
                       (pLVar17 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)(pSVar16->fields)._allowedObjectTypes,
                       pLVar17 !=
                       (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
                      piVar18 = &(pLVar17->fields)._version;
                      *piVar18 = *piVar18 + 1;
                      pRVar19 = (pLVar17->fields)._items;
                      if (pRVar19 != (RegexCharClass_SingleRange__Array *)0x0) {
                        uVar20 = (pLVar17->fields)._size;
                        if (pRVar19->max_length <= uVar20) {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                    (pLVar17,(RegexCharClass_SingleRange)0x2,
                                     pMVar8->klass->rgctx_data[0xe].method);
                          return;
                        }
                        (pLVar17->fields)._size = uVar20 + 1;
                        if (uVar20 < pRVar19->max_length) {
                          pRVar19->vector[uVar20].First = 2;
                          pRVar19->vector[uVar20].Last = 0;
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
    iVar7 = func_?(pSVar6,(pSVar5->klass->_0).element_class);
    if (iVar7 != 0) goto code_?;
  }
  uVar4 = func_?(0);
  func_?(uVar4);
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
      puVar4 = (undefined8 *)func_?();
      uVar5 = *puVar4;
      fVar6 = *(float *)(puVar4 + 1);
      (this->fields)._dummySessionWorkData.Axis.x = (float)(int)uVar5;
      (this->fields)._dummySessionWorkData.Axis.y = (float)(int)((ulonglong)uVar5 >> 0x20);
      (this->fields)._dummySessionWorkData.Axis.z = fVar6;
      this_03 = (this->fields)._dummyDragSession;
      if (this_03 != (GizmoSglAxisOffsetDrag3D *)0x0) {
        fVar7 = (this->fields)._dummySessionWorkData.DragOrigin.x;
        fVar8 = (this->fields)._dummySessionWorkData.DragOrigin.y;
        fVar9 = (this->fields)._dummySessionWorkData.DragOrigin.z;
        fVar10 = (this->fields)._dummySessionWorkData.Axis.x;
        fVar6 = (this->fields)._dummySessionWorkData.SnapStep;
        uVar5._0_4_ = (this->fields)._dummySessionWorkData.Axis.y;
        uVar5._4_4_ = (this->fields)._dummySessionWorkData.Axis.z;
code_?:
        workData.DragOrigin.y = fVar8;
        workData.DragOrigin.x = fVar7;
        workData.DragOrigin.z = fVar9;
        workData.Axis.x = fVar10;
        workData.Axis.y = (float)(int)uVar5;
        workData.Axis.z = (float)(int)((ulonglong)uVar5 >> 0x20);
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
                fVar7 = (pSVar12->fields).LightAxis.y;
                fVar6 = (pSVar12->fields).LightAxis.z;
                (this->fields)._sglAxisDragWorkData.Axis.x = (pSVar12->fields).LightAxis.x;
                (this->fields)._sglAxisDragWorkData.Axis.y = fVar7;
                (this->fields)._sglAxisDragWorkData.Axis.z = fVar6;
                pVVar13 = SpotLightGizmo3D_CalcConeBase
                                   ((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
                fVar7 = pVVar13->y;
                fVar6 = pVVar13->z;
                (this->fields)._sglAxisDragWorkData.DragOrigin.x = pVVar13->x;
                (this->fields)._sglAxisDragWorkData.DragOrigin.y = fVar7;
                (this->fields)._sglAxisDragWorkData.DragOrigin.z = fVar6;
                if ((this->fields)._sharedSettings == (SpotLightGizmo3DSettings *)0x0) {
                  pSVar14 = (this->fields)._settings;
                  if (pSVar14 == (SpotLightGizmo3DSettings *)0x0) goto code_?;
                }
                else {
                  pSVar14 = (this->fields)._sharedSettings;
                }
                fVar6 = (pSVar14->fields)._radiusSnapStep;
code_?:
                (this->fields)._sglAxisDragWorkData.SnapStep = fVar6;
code_?:
                this_03 = (this->fields)._sglAxisDrag;
                if (this_03 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                  fVar7 = (this->fields)._sglAxisDragWorkData.DragOrigin.x;
                  fVar8 = (this->fields)._sglAxisDragWorkData.DragOrigin.y;
                  fVar9 = (this->fields)._sglAxisDragWorkData.DragOrigin.z;
                  fVar10 = (this->fields)._sglAxisDragWorkData.Axis.x;
                  fVar6 = (this->fields)._sglAxisDragWorkData.SnapStep;
                  uVar5._0_4_ = (this->fields)._sglAxisDragWorkData.Axis.y;
                  uVar5._4_4_ = (this->fields)._sglAxisDragWorkData.Axis.z;
                  goto code_?;
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
                          if ((void *)handleId == pvVar3) {
                            this_00 = (this->fields)._targetLight;
                            if ((this_00 == (Light *)0x0) ||
                               (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_transform
                                                    ((Component *)this_00,(MethodInfo *)0x0),
                               this_02 == (Transform *)0x0)) goto code_?;
                            pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                     Transform_get_forward
                                               ((Vector3 *)&stack0xfffffff0,this_02,
                                                (MethodInfo *)0x0);
                            fVar7 = pVVar13->y;
                            fVar6 = pVVar13->z;
                            (this->fields)._sglAxisDragWorkData.Axis.x = pVVar13->x;
                            (this->fields)._sglAxisDragWorkData.Axis.y = fVar7;
                            (this->fields)._sglAxisDragWorkData.Axis.z = fVar6;
                            pVVar13 = SpotLightGizmo3D_CalcConeBase
                                               ((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
                            fVar7 = pVVar13->y;
                            fVar6 = pVVar13->z;
                            (this->fields)._sglAxisDragWorkData.DragOrigin.x = pVVar13->x;
                            (this->fields)._sglAxisDragWorkData.DragOrigin.y = fVar7;
                            (this->fields)._sglAxisDragWorkData.DragOrigin.z = fVar6;
                            if ((this->fields)._sharedSettings == (SpotLightGizmo3DSettings *)0x0) {
                              pSVar14 = (this->fields)._settings;
                              if (pSVar14 == (SpotLightGizmo3DSettings *)0x0) goto code_?;
                            }
                            else {
                              pSVar14 = (this->fields)._sharedSettings;
                            }
                            fVar6 = (pSVar14->fields)._rangeSnapStep;
                            goto code_?;
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
      }
    }
  }
code_?:
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
    if ((this->fields)._sharedHotkeys == (SpotLightGizmo3DHotkeys *)0x0) {
      pSVar3 = (this->fields)._hotkeys;
      if (pSVar3 == (SpotLightGizmo3DHotkeys *)0x0) goto code_?;
    }
    else {
      pSVar3 = (this->fields)._sharedHotkeys;
    }
    pHVar4 = (pSVar3->fields)._enableSnapping;
    if (pHVar4 == (Hotkeys *)0x0) goto code_?;
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
      if ((handleId < 0x2be) || (0x2c0 < handleId)) {
        pGVar5 = (this->fields)._rangeTick;
        if (pGVar5 != (GizmoCap2D *)0x0) {
          pvVar6 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                    AndroidJavaObject__GetRawClass((AndroidJavaObject *)pGVar5,(MethodInfo *)0x0);
          if ((void *)handleId != pvVar6) goto code_?;
          pGVar2 = (this->fields)._sglAxisDrag;
          if ((this->fields)._sharedHotkeys == (SpotLightGizmo3DHotkeys *)0x0) {
            pSVar3 = (this->fields)._hotkeys;
            if (pSVar3 == (SpotLightGizmo3DHotkeys *)0x0) goto code_?;
          }
          else {
            pSVar3 = (this->fields)._sharedHotkeys;
          }
          pHVar4 = (pSVar3->fields)._enableSnapping;
          if ((pHVar4 != (Hotkeys *)0x0) &&
             (bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0),
             pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0)) {
            (pGVar2->fields)._._isSnapEnabled = bVar1;
            pLVar7 = (this->fields)._targetLight;
            if (pLVar7 != (Light *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                        (pLVar7,(MethodInfo *)0x0);
              pGVar8 = (this->fields)._._gizmo;
              if (pGVar8 != (Gizmo *)0x0) {
                puVar9 = &UNK_?;
                Gizmo::Gizmo_get_RelativeDragOffset
                          ((Vector3 *)&stack0xffffffcc,pGVar8,(MethodInfo *)0x0);
                fVar10 = (float10)func_?();
                pGVar8 = (this->fields)._._gizmo;
                if (pGVar8 != (Gizmo *)0x0) {
                  pVVar11 = Gizmo::Gizmo_get_RelativeDragOffset
                                      ((Vector3 *)&stack0xffffffcc,pGVar8,(MethodInfo *)0x0);
                  uVar12._0_4_ = pVVar11->x;
                  uVar12._4_4_ = pVVar11->y;
                  fVar13 = pVVar11->z;
                  pGVar2 = (this->fields)._sglAxisDrag;
                  if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                    pVVar11 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                        ((Vector3 *)&stack0xffffffcc,pGVar2,(MethodInfo *)0x0);
                    uVar14 = pVVar11->x;
                    uVar15 = pVVar11->y;
                    fVar16 = _UNK_?;
                    if (_UNK_? <=
                        (float)uVar15 * SUB84(uVar12,4) + (float)uVar14 * (float)uVar12 +
                        pVVar11->z * fVar13) {
                      fVar16 = _UNK_?;
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_range
                              (pLVar7,fVar16 * (float)fVar10 + (float)puVar9,(MethodInfo *)0x0);
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
        pGVar2 = (this->fields)._sglAxisDrag;
        if ((this->fields)._sharedHotkeys == (SpotLightGizmo3DHotkeys *)0x0) {
          pSVar3 = (this->fields)._hotkeys;
          if (pSVar3 == (SpotLightGizmo3DHotkeys *)0x0) goto code_?;
        }
        else {
          pSVar3 = (this->fields)._sharedHotkeys;
        }
        pHVar4 = (pSVar3->fields)._enableSnapping;
        if ((pHVar4 != (Hotkeys *)0x0) &&
           (bVar1 = Hotkeys::Hotkeys_IsActive(pHVar4,1,(MethodInfo *)0x0),
           pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0)) {
          (pGVar2->fields)._._isSnapEnabled = bVar1;
          SpotLightGizmo3D_CalcConeRadius(this,(MethodInfo *)0x0);
          pGVar8 = (this->fields)._._gizmo;
          if (pGVar8 != (Gizmo *)0x0) {
            Gizmo::Gizmo_get_RelativeDragOffset
                      ((Vector3 *)&stack0xffffffd8,pGVar8,(MethodInfo *)0x0);
            func_?();
            pGVar8 = (this->fields)._._gizmo;
            if (pGVar8 != (Gizmo *)0x0) {
              pVVar11 = Gizmo::Gizmo_get_RelativeDragOffset
                                  ((Vector3 *)&stack0xffffffe4,pGVar8,(MethodInfo *)0x0);
              fVar13 = pVVar11->x;
              fVar16 = pVVar11->z;
              pGVar2 = (this->fields)._sglAxisDrag;
              if (pGVar2 != (GizmoSglAxisOffsetDrag3D *)0x0) {
                pVVar11 = GizmoSglAxisOffsetDrag3D::GizmoSglAxisOffsetDrag3D_get_Axis
                                    ((Vector3 *)&stack0xffffffcc,pGVar2,(MethodInfo *)0x0);
                uVar17 = pVVar11->x;
                uVar18 = pVVar11->y;
                pLVar7 = (this->fields)._targetLight;
                if (pLVar7 != (Light *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Sign
                            ((float)uVar18 * 0.0 + (float)uVar17 * fVar13 + pVVar11->z * fVar16,
                             (MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                            (pLVar7,(MethodInfo *)0x0);
                  fVar10 = (float10)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_spotAngle
                            (pLVar7,(float)fVar10 * _UNK_? + (float)fVar10 * _UNK_?,
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
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_spotAngle
                         (pLVar2,(MethodInfo *)0x0);
      pLVar2 = (this->fields)._targetLight;
      fStack_13 = fVar12 * _UNK_? * _UNK_?;
      if (pLVar2 != (Light *)0x0) {
        fStack_14 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                              (pLVar2,(MethodInfo *)0x0);
        dVar15 = (double)fStack_13;
        func_?();
        fStack_13 = (float)dVar15 * fStack_14;
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        pOVar16 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
        if (pOVar16 != (Object *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pOVar16[10].klass != (Object__Class *)0x0) {
            if (1 < (int)((pOVar16[10].klass)->_0).namespaze) {
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
              if ((this->fields)._sharedLookAndFeel == (SpotLightGizmo3DLookAndFeel *)0x0) {
                pSVar17 = (this->fields)._lookAndFeel;
                if (pSVar17 == (SpotLightGizmo3DLookAndFeel *)0x0) goto code_?;
              }
              else {
                pSVar17 = (this->fields)._sharedLookAndFeel;
              }
              GizmoLineMaterial::GizmoLineMaterial_SetColor
                        (this_01,(pSVar17->fields)._wireColor,(MethodInfo *)0x0);
              pMVar18 = GizmoLineMaterial::GizmoLineMaterial_get_Material(this_01,(MethodInfo *)0x0);
              if (pMVar18 != (Material *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                          (pMVar18,0,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
                pLVar2 = (this->fields)._targetLight;
                if ((pLVar2 != (Light *)0x0) &&
                   (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pLVar2,(MethodInfo *)0x0),
                   pTVar3 != (Transform *)0x0)) {
                  pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_rotation(&QStack_20,pTVar3,(MethodInfo *)0x0);
                  VStack_5.z = 1.0;
                  pos.z = (float)pSStack_10;
                  pos.x = (float)(undefined4)uStack_11;
                  pos.y = (float)uStack_11._4_4_;
                  s.y = fStack_13;
                  s.x = fStack_13;
                  s.z = 1.0;
                  pMVar21 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                                      ((Matrix4x4 *)&stack0xffffff50,pos,*pQVar19,s,(MethodInfo *)0x0
                                      );
                  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_MultMatrix
                            (*pMVar21,(MethodInfo *)0x0);
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
                    fStack_22 = pVVar4->z;
                    QStack_20.x = (float)uStack_8;
                    QStack_20.y = 0.0;
                    QStack_20.z = 0.0;
                    QStack_20.w = 0.0;
                    VStack_5.z = (float)pSStack_9 + fStack_22 * fStack_13;
                    startPoint.z = (float)ppSStack_7;
                    startPoint.x = (float)(undefined4)uStack_6;
                    startPoint.y = (float)uStack_6._4_4_;
                    endPoint.y = uStack_8._4_4_ + (float)uStack_11._4_4_ * fStack_13;
                    endPoint.x = (float)uStack_8 + (float)(undefined4)uStack_11 * fStack_13;
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
                      fStack_22 = pVVar4->z;
                      VStack_5.z = (float)pSStack_9 + fStack_22 * fStack_13;
                      startPoint_00.z = (float)ppSStack_7;
                      startPoint_00.x = (float)(undefined4)uStack_6;
                      startPoint_00.y = (float)uStack_6._4_4_;
                      endPoint_00.y = uStack_8._4_4_ + (float)uStack_11._4_4_ * fStack_13;
                      endPoint_00.x = QStack_20.x + (float)(undefined4)uStack_11 * fStack_13;
                      endPoint_00.z = VStack_5.z;
                      GLRenderer::GLRenderer_DrawLine3D(startPoint_00,endPoint_00,(MethodInfo *)0x0)
                      ;
                      pLVar2 = (this->fields)._targetLight;
                      if ((pLVar2 != (Light *)0x0) &&
                         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_transform((Component *)pLVar2,(MethodInfo *)0x0),
                         pTVar3 != (Transform *)0x0)) {
                        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                 Transform_get_up(&VStack_5,pTVar3,(MethodInfo *)0x0);
                        uStack_11._0_4_ = pVVar4->x;
                        uStack_11._4_4_ = pVVar4->y;
                        fStack_22 = pVVar4->z;
                        VStack_5.z = (float)pSStack_9 - fStack_22 * fStack_13;
                        startPoint_01.z = (float)ppSStack_7;
                        startPoint_01.x = (float)(undefined4)uStack_6;
                        startPoint_01.y = (float)uStack_6._4_4_;
                        endPoint_01.y = uStack_8._4_4_ - (float)uStack_11._4_4_ * fStack_13;
                        endPoint_01.x = QStack_20.x - (float)(undefined4)uStack_11 * fStack_13;
                        endPoint_01.z = VStack_5.z;
                        GLRenderer::GLRenderer_DrawLine3D
                                  (startPoint_01,endPoint_01,(MethodInfo *)0x0);
                        pLVar2 = (this->fields)._targetLight;
                        if ((pLVar2 != (Light *)0x0) &&
                           (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_get_transform((Component *)pLVar2,(MethodInfo *)0x0),
                           pTVar3 != (Transform *)0x0)) {
                          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                   Transform_get_right(&VStack_5,pTVar3,(MethodInfo *)0x0);
                          uStack_11._0_4_ = pVVar4->x;
                          uStack_11._4_4_ = pVVar4->y;
                          fStack_22 = pVVar4->z;
                          VStack_5.z = (float)pSStack_9 - fStack_22 * fStack_13;
                          startPoint_02.z = (float)ppSStack_7;
                          startPoint_02.x = (float)(undefined4)uStack_6;
                          startPoint_02.y = (float)uStack_6._4_4_;
                          endPoint_02.y = uStack_8._4_4_ - (float)uStack_11._4_4_ * fStack_13;
                          endPoint_02.x = QStack_20.x - (float)(undefined4)uStack_11 * fStack_13;
                          endPoint_02.z = VStack_5.z;
                          GLRenderer::GLRenderer_DrawLine3D
                                    (startPoint_02,endPoint_02,(MethodInfo *)0x0);
                          this_00 = (this->fields)._._gizmo;
                          if (this_00 != (Gizmo *)0x0) {
                            pSStack_10 = (SpotLightGizmo3D_AngleTick__Array *)
                                         UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                                         PointerEventBase`1[System::Object]::
                                         PointerEventBase_1_System_Object__get_pointerType
                                                   ((PointerEventBase_1_System_Object_ *)this_00,
                                                    (MethodInfo *)0x0);
                            pGVar23 = (this->fields)._dirSnapTick;
                            if (pGVar23 != (GizmoCap2D *)0x0) {
                              pSVar24 = UnityEngine.AndroidJNIModule.dll::UnityEngine::
                                        AndroidJavaObject::AndroidJavaObject__GetRawClass
                                                  ((AndroidJavaObject *)pGVar23,(MethodInfo *)0x0);
                              if (pSStack_10 == pSVar24) {
                                if ((this->fields)._sharedLookAndFeel ==
                                    (SpotLightGizmo3DLookAndFeel *)0x0) {
                                  pSVar17 = (this->fields)._lookAndFeel;
                                  if (pSVar17 == (SpotLightGizmo3DLookAndFeel *)0x0)
                                  goto code_?;
                                }
                                else {
                                  pSVar17 = (this->fields)._sharedLookAndFeel;
                                }
                                GizmoLineMaterial::GizmoLineMaterial_SetColor
                                          (this_01,(pSVar17->fields)._dirSnapSegmentColor,
                                           (MethodInfo *)0x0);
                                pMVar18 = GizmoLineMaterial::GizmoLineMaterial_get_Material
                                                   (this_01,(MethodInfo *)0x0);
                                if (pMVar18 == (Material *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                                          (pMVar18,0,(MethodInfo *)0x0);
                                startPoint_03.z = (float)ppSStack_7;
                                startPoint_03.x = (float)(undefined4)uStack_6;
                                startPoint_03.y = (float)uStack_6._4_4_;
                                GLRenderer::GLRenderer_DrawLine3D
                                          (startPoint_03,(this->fields)._pickedWorldSnapPoint,
                                           (MethodInfo *)0x0);
                              }
                              pSStack_10 = (this->fields)._angleTicks;
                              uVar25 = 0;
                              if (pSStack_10 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                                ppSStack_7 = pSStack_10->vector;
                                for (; (int)uVar25 < (int)pSStack_10->max_length;
                                    uVar25 = uVar25 + 1) {
                                  if (pSStack_10->max_length <= uVar25) goto code_?;
                                  if ((*ppSStack_7 == (SpotLightGizmo3D_AngleTick *)0x0) ||
                                     (pGVar23 = ((*ppSStack_7)->fields).Tick,
                                     pGVar23 == (GizmoCap2D *)0x0)) goto code_?;
                                  (*(code *)(pGVar23->klass->vtable).Render_1.method)();
                                  ppSStack_7 = ppSStack_7 + 1;
                                }
                                pGVar23 = (this->fields)._rangeTick;
                                if (pGVar23 != (GizmoCap2D *)0x0) {
                                  (*(code *)(pGVar23->klass->vtable).Render_1.method)();
                                  pGVar23 = (this->fields)._dirSnapTick;
                                  if (pGVar23 != (GizmoCap2D *)0x0) {
                                    (*(code *)(pGVar23->klass->vtable).Render_1.method)();
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
  if ((this->fields)._sharedLookAndFeel == (SpotLightGizmo3DLookAndFeel *)0x0) {
    pSVar1 = (this->fields)._lookAndFeel;
    if (pSVar1 != (SpotLightGizmo3DLookAndFeel *)0x0) goto code_?;
  }
  else {
    pSVar1 = (this->fields)._sharedLookAndFeel;
code_?:
    pGVar2 = (this->fields)._dirSnapTick;
    if (pGVar2 != (GizmoCap2D *)0x0) {
      pGVar3 = (pSVar1->fields)._dirSnapTickLookAndFeel;
      (pGVar2->fields)._sharedLookAndFeel = pGVar3;
      func_?(&(pGVar2->fields)._sharedLookAndFeel,pGVar3);
      if ((this->fields)._sharedLookAndFeel == (SpotLightGizmo3DLookAndFeel *)0x0) {
        pSVar1 = (this->fields)._lookAndFeel;
        if (pSVar1 == (SpotLightGizmo3DLookAndFeel *)0x0) goto code_?;
      }
      else {
        pSVar1 = (this->fields)._sharedLookAndFeel;
      }
      pGVar2 = (this->fields)._rangeTick;
      if (pGVar2 != (GizmoCap2D *)0x0) {
        pGVar3 = (pSVar1->fields)._tickLookAndFeel;
        (pGVar2->fields)._sharedLookAndFeel = pGVar3;
        func_?(&(pGVar2->fields)._sharedLookAndFeel,pGVar3);
        pSVar4 = (this->fields)._angleTicks;
        uVar5 = 0;
        if (pSVar4 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
          ppSVar6 = pSVar4->vector;
          while( true ) {
            if ((int)pSVar4->max_length <= (int)uVar5) {
              return;
            }
            if (pSVar4->max_length <= uVar5) break;
            if ((this->fields)._sharedLookAndFeel == (SpotLightGizmo3DLookAndFeel *)0x0) {
              pSVar1 = (this->fields)._lookAndFeel;
            }
            else {
              pSVar1 = (this->fields)._sharedLookAndFeel;
            }
            if (((*ppSVar6 == (SpotLightGizmo3D_AngleTick *)0x0) ||
                (pSVar1 == (SpotLightGizmo3DLookAndFeel *)0x0)) ||
               (pGVar2 = ((*ppSVar6)->fields).Tick, pGVar2 == (GizmoCap2D *)0x0))
            goto code_?;
            pGVar3 = (pSVar1->fields)._tickLookAndFeel;
            (pGVar2->fields)._sharedLookAndFeel = pGVar3;
            func_?(&(pGVar2->fields)._sharedLookAndFeel,pGVar3);
            uVar5 = uVar5 + 1;
            ppSVar6 = ppSVar6 + 1;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
        (pRVar4 = (Ray *)func_?(&stack0xffffffa0,6,TypeInfo__RTG__IInputDevice,pOVar2,
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
                              ((Vector3 *)&stack0xffffffa8,pTVar12,(MethodInfo *)0x0);
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
                                ((Vector3 *)&stack0xffffffa8,value,(MethodInfo *)0x0);
            TransformEx::TransformEx_Align
                      ((Quaternion *)&stack0xffffffa8,pTVar12,*pVVar13,TransformAxis__Enum_PositiveZ
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
                            ((Vector3 *)&stack0xffffff98,pTVar3,(MethodInfo *)0x0);
        fVar5 = pVVar4->x;
        fVar6 = pVVar4->y;
        fVar7 = pVVar4->z;
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pCVar2,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffff98,pTVar3,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)pVVar4->z;
          value_04.y = fVar6;
          value_04.x = fVar5;
          value_04.z = fVar7;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                              ((Vector3 *)&stack0xffffff98,value_04,method_00);
          VVar8.x = pVVar4->x;
          VVar8.y = pVVar4->y;
          puVar9 = (undefined *)pVVar4->z;
          pGVar1 = (this->fields)._._gizmo;
          fVar5 = (float)((uint)(fVar7 * VVar8.y + fVar6 * VVar8.x +
                                (float)method_00 * (float)puVar9) ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          VStack_10 = VVar8;
          puStack_11 = puVar9;
          if (pGVar1 != (Gizmo *)0x0) {
            pSVar12 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                      PointerEventBase`1[System::Object]::
                      PointerEventBase_1_System_Object__get_pointerType
                                ((PointerEventBase_1_System_Object_ *)pGVar1,(MethodInfo *)0x0);
            pGVar13 = (this->fields)._dirSnapTick;
            if (pGVar13 != (GizmoCap2D *)0x0) {
              pSVar14 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
                        AndroidJavaObject__GetRawClass
                                  ((AndroidJavaObject *)pGVar13,(MethodInfo *)0x0);
              if (pSVar12 == pSVar14) {
                uVar15 = (this->fields)._pickedWorldSnapPoint.x;
                uVar16 = (this->fields)._pickedWorldSnapPoint.y;
                pGVar13 = (this->fields)._dirSnapTick;
                if (_UNK_? <
                    VVar8.y * (float)uVar16 + VVar8.x * (float)uVar15 +
                    (float)puVar9 * (this->fields)._pickedWorldSnapPoint.z + fVar5) {
                  if (pGVar13 != (GizmoCap2D *)0x0) {
                    bVar17 = 1;
                    goto code_?;
                  }
                }
                else if (pGVar13 != (GizmoCap2D *)0x0) {
                  bVar17 = 0;
code_?:
                  GizmoCap::GizmoCap_SetVisible((GizmoCap *)pGVar13,bVar17,(MethodInfo *)0x0);
                  pGVar1 = (this->fields)._._gizmo;
                  pGVar13 = (this->fields)._dirSnapTick;
                  if (pGVar1 != (Gizmo *)0x0) {
                    pCVar2 = Gizmo::Gizmo_GetWorkCamera(pGVar1,(MethodInfo *)0x0);
                    if (pCVar2 != (Camera *)0x0) {
                      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                Camera_WorldToScreenPoint_1
                                          ((Vector3 *)&stack0xffffff98,pCVar2,
                                           (this->fields)._pickedWorldSnapPoint,(MethodInfo *)0x0);
                      VVar18.x = pVVar4->x;
                      VVar18.y = pVVar4->y;
                      if (pGVar13 != (GizmoCap2D *)0x0) {
                        GizmoCap2D::GizmoCap2D_set_Position(pGVar13,VVar18,(MethodInfo *)0x0);
code_?:
                        pVVar4 = SpotLightGizmo3D_CalcConeBase
                                            ((Vector3 *)&stack0xffffff98,this,(MethodInfo *)0x0);
                        uVar19._0_4_ = pVVar4->x;
                        uVar19._4_4_ = pVVar4->y;
                        fVar5 = pVVar4->z;
                        pLVar20 = (this->fields)._targetLight;
                        if (pLVar20 != (Light *)0x0) {
                          fVar6 = fVar5;
                          fVar7 = (float)(undefined4)uVar19;
                          fVar21 = (float)uVar19._4_4_;
                          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_spotAngle
                                    (pLVar20,(MethodInfo *)0x0);
                          pLVar20 = (this->fields)._targetLight;
                          if (pLVar20 != (Light *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                                      (pLVar20,(MethodInfo *)0x0);
                            func_?();
                            pLVar20 = (this->fields)._targetLight;
                            if (pLVar20 != (Light *)0x0) {
                              puVar22 = &UNK_?;
                              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform
                                                  ((Component *)pLVar20,(MethodInfo *)0x0);
                              if (pTVar3 != (Transform *)0x0) {
                                pCVar2 = (Camera *)&UNK_?;
                                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_get_right((Vector3 *)&stack0xffffff98,pTVar3,
                                                              (MethodInfo *)0x0);
                                uVar23._0_4_ = pVVar4->x;
                                uVar23._4_4_ = pVVar4->y;
                                fVar24 = pVVar4->z;
                                pLVar20 = (this->fields)._targetLight;
                                if (pLVar20 != (Light *)0x0) {
                                  uVar25 = uVar23;
                                  fVar26 = fVar24;
                                  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_transform
                                                      ((Component *)pLVar20,(MethodInfo *)0x0);
                                  if (pTVar3 != (Transform *)0x0) {
                                    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_get_up((Vector3 *)&stack0xffffff98,pTVar3,
                                                               (MethodInfo *)0x0);
                                    VStack_10.x = pVVar4->x;
                                    VStack_10.y = pVVar4->y;
                                    puStack_11 = (undefined *)pVVar4->z;
                                    pGVar13 = (this->fields)._rangeTick;
                                    position.y = fVar21;
                                    position.x = fVar7;
                                    position.z = fVar5;
                                    VVar18 = VStack_10;
                                    puVar27 = puStack_11;
                                    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                              Camera_WorldToScreenPoint_1
                                                        ((Vector3 *)&stack0xffffffd8,pCVar2,
                                                         position,(MethodInfo *)0x0);
                                    value.x = pVVar4->x;
                                    value.y = pVVar4->y;
                                    if (pGVar13 != (GizmoCap2D *)0x0) {
                                      GizmoCap2D::GizmoCap2D_set_Position
                                                (pGVar13,value,(MethodInfo *)0x0);
                                      pGVar13 = (this->fields)._rangeTick;
                                      if (_UNK_? <
                                          (float)uVar19 * VVar8.x +
                                          (float)((ulonglong)uVar19 >> 0x20) * VVar8.y +
                                          fVar6 * (float)puVar9 + 0.0) {
                                        if (pGVar13 != (GizmoCap2D *)0x0) {
                                          bVar17 = 1;
                                          goto code_?;
                                        }
                                      }
                                      else if (pGVar13 != (GizmoCap2D *)0x0) {
                                        bVar17 = 0;
code_?:
                                        GizmoCap::GizmoCap_SetVisible
                                                  ((GizmoCap *)pGVar13,bVar17,(MethodInfo *)0x0);
                                        pSVar28 = (this->fields)._angleTicks;
                                        if (pSVar28 != (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                                          if (pSVar28->max_length < 3) goto code_?;
                                          pSVar29 = pSVar28->vector[2];
                                          if (pSVar29 != (SpotLightGizmo3D_AngleTick *)0x0) {
                                            (pSVar29->fields).Position.x =
                                                 (float)uVar19 - VStack_10.x * (float)puVar22;
                                            (pSVar29->fields).Position.y =
                                                 (float)((ulonglong)uVar19 >> 0x20) -
                                                 VStack_10.y * (float)puVar22;
                                            (pSVar29->fields).Position.z =
                                                 fVar6 - (float)puStack_11 * (float)puVar22;
                                            pSVar28 = (this->fields)._angleTicks;
                                            if (pSVar28 != (SpotLightGizmo3D_AngleTick__Array *)0x0)
                                            {
                                              if (pSVar28->max_length < 3) goto code_?;
                                              pSVar29 = pSVar28->vector[2];
                                              uVar30 = (uint)VStack_10.y ^
                                                                                                              
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                              ;
                                              fVar5 = (float)((uint)puStack_11 ^
                                                                                                                          
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                              if (pSVar29 != (SpotLightGizmo3D_AngleTick *)0x0) {
                                                (pSVar29->fields).LightAxis.x =
                                                     (float)((uint)VStack_10.x ^
                                                                                                                        
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                (pSVar29->fields).LightAxis.y = (float)uVar30;
                                                (pSVar29->fields).LightAxis.z = fVar5;
                                                pSVar28 = (this->fields)._angleTicks;
                                                if (pSVar28 !=
                                                    (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                                                  if (pSVar28->max_length < 3)
                                                  goto code_?;
                                                  if (pSVar28->vector[2] !=
                                                      (SpotLightGizmo3D_AngleTick *)0x0) {
                                                    pGVar13 = (pSVar28->vector[2]->fields).Tick;
                                                    pVVar4 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Camera::
                                                              Camera_WorldToScreenPoint_1
                                                                        ((Vector3 *)&stack0xffffffd8
                                                                         ,pCVar2,(((this->fields).
                                                                                   _angleTicks)->
                                                                                   vector[2]->fields
                                                                                  ).Position,
                                                                         (MethodInfo *)0x0);
                                                    value_00.x = pVVar4->x;
                                                    value_00.y = pVVar4->y;
                                                    if (pGVar13 != (GizmoCap2D *)0x0) {
                                                      GizmoCap2D::GizmoCap2D_set_Position
                                                                (pGVar13,value_00,(MethodInfo *)0x0)
                                                      ;
                                                      pSVar28 = (this->fields)._angleTicks;
                                                      if (pSVar28 !=
                                                          (SpotLightGizmo3D_AngleTick__Array *)0x0)
                                                      {
                                                        if (pSVar28->max_length < 3)
                                                        goto code_?;
                                                        pSVar29 = pSVar28->vector[2];
                                                        if (pSVar29 !=
                                                            (SpotLightGizmo3D_AngleTick *)0x0) {
                                                          uVar31 = (pSVar29->fields).Position.x;
                                                          uVar32 = (pSVar29->fields).Position.y;
                                                          pSVar28 = (this->fields)._angleTicks;
                                                          if (_UNK_? <
                                                              VVar8.y * (float)uVar32 +
                                                              VVar8.x * (float)uVar31 +
                                                              (float)puVar9 *
                                                              (pSVar29->fields).Position.z + 0.0) {
                                                            if (pSVar28 !=
                                                                (SpotLightGizmo3D_AngleTick__Array *
                                                                )0x0) {
                                                              if (pSVar28->max_length < 3)
                                                              goto code_?;
                                                              if ((pSVar28->vector[2] !=
                                                                   (SpotLightGizmo3D_AngleTick *)0x0
                                                                  ) && (pGVar13 = (pSVar28->vector
                                                                                   [2]->fields).Tick
                                                                       , pGVar13 !=
                                                                         (GizmoCap2D *)0x0)) {
                                                                bVar17 = 1;
                                                                goto code_?;
                                                              }
                                                            }
                                                          }
                                                          else if (pSVar28 !=
                                                                   (
                                                  SpotLightGizmo3D_AngleTick__Array *)0x0) {
                                                    if (pSVar28->max_length < 3)
                                                    goto code_?;
                                                    if ((pSVar28->vector[2] !=
                                                         (SpotLightGizmo3D_AngleTick *)0x0) &&
                                                       (pGVar13 = (pSVar28->vector[2]->fields).Tick,
                                                       pGVar13 != (GizmoCap2D *)0x0)) {
                                                      bVar17 = 0;
code_?:
                                                      GizmoCap::GizmoCap_SetVisible
                                                                ((GizmoCap *)pGVar13,bVar17,
                                                                 (MethodInfo *)0x0);
                                                      pSVar28 = (this->fields)._angleTicks;
                                                      if (pSVar28 !=
                                                          (SpotLightGizmo3D_AngleTick__Array *)0x0)
                                                      {
                                                        if (pSVar28->max_length == 0)
                                                        goto code_?;
                                                        pSVar29 = pSVar28->vector[0];
                                                        VStack_10.x = (float)uVar19 +
                                                                      VStack_10.x * (float)puVar22;
                                                        VStack_10.y = (float)((ulonglong)uVar19 >>
                                                                             0x20) +
                                                                      VStack_10.y * (float)puVar22;
                                                        puStack_11 = (undefined *)
                                                                     (fVar6 + (float)puStack_11 *
                                                                              (float)puVar22);
                                                        if (pSVar29 !=
                                                            (SpotLightGizmo3D_AngleTick *)0x0) {
                                                          (pSVar29->fields).Position.x = VStack_10.x
                                                          ;
                                                          (pSVar29->fields).Position.y = VStack_10.y
                                                          ;
                                                          (pSVar29->fields).Position.z =
                                                               (float)puStack_11;
                                                          pSVar28 = (this->fields)._angleTicks;
                                                          if (pSVar28 !=
                                                              (SpotLightGizmo3D_AngleTick__Array *)
                                                              0x0) {
                                                            if (pSVar28->max_length == 0)
                                                            goto code_?;
                                                            pSVar29 = pSVar28->vector[0];
                                                            if (pSVar29 !=
                                                                (SpotLightGizmo3D_AngleTick *)0x0) {
                                                              (pSVar29->fields).LightAxis.x =
                                                                   VVar18.x;
                                                              (pSVar29->fields).LightAxis.y =
                                                                   VVar18.y;
                                                              (pSVar29->fields).LightAxis.z =
                                                                   (float)puVar27;
                                                              pSVar28 = (this->fields)._angleTicks;
                                                              if (pSVar28 !=
                                                                  (SpotLightGizmo3D_AngleTick__Array
                                                                   *)0x0) {
                                                                if (pSVar28->max_length == 0)
                                                                goto code_?;
                                                                if (pSVar28->vector[0] !=
                                                                    (SpotLightGizmo3D_AngleTick *)
                                                                    0x0) {
                                                                  pGVar13 = (pSVar28->vector[0]->
                                                                            fields).Tick;
                                                                  pVVar4 = 
                                                  UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                                  Camera_WorldToScreenPoint_1
                                                            ((Vector3 *)&VStack_10,pCVar2,
                                                             (((this->fields)._angleTicks)->vector
                                                              [0]->fields).Position,
                                                             (MethodInfo *)0x0);
                                                  value_01.x = pVVar4->x;
                                                  value_01.y = pVVar4->y;
                                                  if (pGVar13 != (GizmoCap2D *)0x0) {
                                                    GizmoCap2D::GizmoCap2D_set_Position
                                                              (pGVar13,value_01,(MethodInfo *)0x0);
                                                    pSVar28 = (this->fields)._angleTicks;
                                                    if (pSVar28 !=
                                                        (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                                                      if (pSVar28->max_length == 0)
                                                      goto code_?;
                                                      pSVar29 = pSVar28->vector[0];
                                                      if (pSVar29 !=
                                                          (SpotLightGizmo3D_AngleTick *)0x0) {
                                                        VStack_10.x = (pSVar29->fields).Position.x;
                                                        VStack_10.y = (pSVar29->fields).Position.y;
                                                        puStack_11 = (undefined *)
                                                                     (pSVar29->fields).Position.z;
                                                        pSVar28 = (this->fields)._angleTicks;
                                                        if (_UNK_? <
                                                            VVar8.y * VStack_10.y +
                                                            VVar8.x * VStack_10.x +
                                                            (float)puVar9 * (float)puStack_11 + 0.0
                                                           ) {
                                                          if (pSVar28 !=
                                                              (SpotLightGizmo3D_AngleTick__Array *)
                                                              0x0) {
                                                            if (pSVar28->max_length == 0)
                                                            goto code_?;
                                                            if ((pSVar28->vector[0] !=
                                                                 (SpotLightGizmo3D_AngleTick *)0x0)
                                                               && (pGVar13 = (pSVar28->vector[0]->
                                                                             fields).Tick,
                                                                  pGVar13 != (GizmoCap2D *)0x0)) {
                                                              bVar17 = 1;
                                                              goto code_?;
                                                            }
                                                          }
                                                        }
                                                        else if (pSVar28 !=
                                                                 (SpotLightGizmo3D_AngleTick__Array
                                                                  *)0x0) {
                                                          if (pSVar28->max_length == 0)
                                                          goto code_?;
                                                          if ((pSVar28->vector[0] !=
                                                               (SpotLightGizmo3D_AngleTick *)0x0) &&
                                                             (pGVar13 = (pSVar28->vector[0]->fields)
                                                                        .Tick,
                                                             pGVar13 != (GizmoCap2D *)0x0)) {
                                                            bVar17 = 0;
code_?:
                                                            GizmoCap::GizmoCap_SetVisible
                                                                      ((GizmoCap *)pGVar13,bVar17,
                                                                       (MethodInfo *)0x0);
                                                            pSVar28 = (this->fields)._angleTicks;
                                                            if (pSVar28 !=
                                                                (SpotLightGizmo3D_AngleTick__Array *
                                                                )0x0) {
                                                              if (pSVar28->max_length < 4)
                                                              goto code_?;
                                                              pSVar29 = pSVar28->vector[3];
                                                              VStack_10.x = (float)uVar19 -
                                                                            (float)uVar23 *
                                                                            (float)puVar22;
                                                              VStack_10.y = (float)((ulonglong)
                                                                                    uVar19 >> 0x20)
                                                                            - uVar23._4_4_ *
                                                                              (float)puVar22;
                                                              puStack_11 = (undefined *)
                                                                           (fVar6 - fVar24 * (float)
                                                  puVar22);
                                                  if (pSVar29 != (SpotLightGizmo3D_AngleTick *)0x0)
                                                  {
                                                    (pSVar29->fields).Position.x = VStack_10.x;
                                                    (pSVar29->fields).Position.y = VStack_10.y;
                                                    (pSVar29->fields).Position.z = (float)puStack_11
                                                    ;
                                                    pSVar28 = (this->fields)._angleTicks;
                                                    if (pSVar28 !=
                                                        (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                                                      if (pSVar28->max_length < 4)
                                                      goto code_?;
                                                      pSVar29 = pSVar28->vector[3];
                                                      VStack_10.y = (float)((uint)uVar23._4_4_ ^
                                                                                                                                                      
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  puStack_11 = (undefined *)
                                                               ((uint)fVar24 ^
                                                                                                                              
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  VStack_10.x = (float)((uint)(float)uVar23 ^
                                                                                                                                              
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  if (pSVar29 != (SpotLightGizmo3D_AngleTick *)0x0)
                                                  {
                                                    (pSVar29->fields).LightAxis.x =
                                                         (float)((uint)(float)uVar23 ^
                                                                                                                                
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                                                  (pSVar29->fields).LightAxis.y = VStack_10.y;
                                                  (pSVar29->fields).LightAxis.z = (float)puStack_11;
                                                  pSVar28 = (this->fields)._angleTicks;
                                                  if (pSVar28 !=
                                                      (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                                                    if (pSVar28->max_length < 4)
                                                    goto code_?;
                                                    if (pSVar28->vector[3] !=
                                                        (SpotLightGizmo3D_AngleTick *)0x0) {
                                                      pGVar13 = (pSVar28->vector[3]->fields).Tick;
                                                      pVVar4 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Camera::
                                                                Camera_WorldToScreenPoint_1
                                                                          ((Vector3 *)&VStack_10,
                                                                           pCVar2,(((this->fields).
                                                                                    _angleTicks)->
                                                                                    vector[3]->
                                                                                   fields).Position,
                                                                           (MethodInfo *)0x0);
                                                      value_02.x = pVVar4->x;
                                                      value_02.y = pVVar4->y;
                                                      if (pGVar13 != (GizmoCap2D *)0x0) {
                                                        GizmoCap2D::GizmoCap2D_set_Position
                                                                  (pGVar13,value_02,
                                                                   (MethodInfo *)0x0);
                                                        pSVar28 = (this->fields)._angleTicks;
                                                        if (pSVar28 !=
                                                            (SpotLightGizmo3D_AngleTick__Array *)0x0
                                                           ) {
                                                          if (pSVar28->max_length < 4)
                                                          goto code_?;
                                                          pSVar29 = pSVar28->vector[3];
                                                          if (pSVar29 !=
                                                              (SpotLightGizmo3D_AngleTick *)0x0) {
                                                            VStack_10.x = (pSVar29->fields).Position
                                                                          .x;
                                                            VStack_10.y = (pSVar29->fields).Position
                                                                          .y;
                                                            puStack_11 = (undefined *)
                                                                         (pSVar29->fields).Position.
                                                                         z;
                                                            pSVar28 = (this->fields)._angleTicks;
                                                            if (_UNK_? <
                                                                VVar8.y * VStack_10.y +
                                                                VVar8.x * VStack_10.x +
                                                                (float)puVar9 * (float)puStack_11 +
                                                                0.0) {
                                                              if (pSVar28 !=
                                                                  (SpotLightGizmo3D_AngleTick__Array
                                                                   *)0x0) {
                                                                if (pSVar28->max_length < 4)
                                                                goto code_?;
                                                                if ((pSVar28->vector[3] !=
                                                                     (SpotLightGizmo3D_AngleTick *)
                                                                     0x0) && (pGVar13 = (pSVar28->
                                                  vector[3]->fields).Tick,
                                                  pGVar13 != (GizmoCap2D *)0x0)) {
                                                    bVar17 = 1;
                                                    goto code_?;
                                                  }
                                                  }
                                                  }
                                                  else if (pSVar28 !=
                                                           (SpotLightGizmo3D_AngleTick__Array *)0x0)
                                                  {
                                                    if (pSVar28->max_length < 4)
                                                    goto code_?;
                                                    if ((pSVar28->vector[3] !=
                                                         (SpotLightGizmo3D_AngleTick *)0x0) &&
                                                       (pGVar13 = (pSVar28->vector[3]->fields).Tick,
                                                       pGVar13 != (GizmoCap2D *)0x0)) {
                                                      bVar17 = 0;
code_?:
                                                      GizmoCap::GizmoCap_SetVisible
                                                                ((GizmoCap *)pGVar13,bVar17,
                                                                 (MethodInfo *)0x0);
                                                      pSVar28 = (this->fields)._angleTicks;
                                                      if (pSVar28 !=
                                                          (SpotLightGizmo3D_AngleTick__Array *)0x0)
                                                      {
                                                        if (pSVar28->max_length < 2)
                                                        goto code_?;
                                                        pSVar29 = pSVar28->vector[1];
                                                        if (pSVar29 !=
                                                            (SpotLightGizmo3D_AngleTick *)0x0) {
                                                          (pSVar29->fields).Position.x =
                                                               (float)uVar23 * (float)puVar22 +
                                                               (float)uVar19;
                                                          (pSVar29->fields).Position.y =
                                                               uVar23._4_4_ * (float)puVar22 +
                                                               (float)((ulonglong)uVar19 >> 0x20);
                                                          (pSVar29->fields).Position.z =
                                                               fVar24 * (float)puVar22 + fVar6;
                                                          pSVar28 = (this->fields)._angleTicks;
                                                          if (pSVar28 !=
                                                              (SpotLightGizmo3D_AngleTick__Array *)
                                                              0x0) {
                                                            if (pSVar28->max_length < 2)
                                                            goto code_?;
                                                            pSVar29 = pSVar28->vector[1];
                                                            if (pSVar29 !=
                                                                (SpotLightGizmo3D_AngleTick *)0x0) {
                                                              (pSVar29->fields).LightAxis.x =
                                                                   (float)(int)uVar25;
                                                              (pSVar29->fields).LightAxis.y =
                                                                   (float)(int)((ulonglong)uVar25 >>
                                                                               0x20);
                                                              (pSVar29->fields).LightAxis.z = fVar26
                                                              ;
                                                              pSVar28 = (this->fields)._angleTicks;
                                                              if (pSVar28 !=
                                                                  (SpotLightGizmo3D_AngleTick__Array
                                                                   *)0x0) {
                                                                if (pSVar28->max_length < 2)
                                                                goto code_?;
                                                                if (pSVar28->vector[1] !=
                                                                    (SpotLightGizmo3D_AngleTick *)
                                                                    0x0) {
                                                                  pGVar13 = (pSVar28->vector[1]->
                                                                            fields).Tick;
                                                                  pVVar4 = 
                                                  UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                                  Camera_WorldToScreenPoint_1
                                                            ((Vector3 *)&stack0xffffffa4,pCVar2,
                                                             (((this->fields)._angleTicks)->vector
                                                              [1]->fields).Position,
                                                             (MethodInfo *)0x0);
                                                  value_03.x = pVVar4->x;
                                                  value_03.y = pVVar4->y;
                                                  if (pGVar13 != (GizmoCap2D *)0x0) {
                                                    GizmoCap2D::GizmoCap2D_set_Position
                                                              (pGVar13,value_03,(MethodInfo *)0x0);
                                                    pSVar28 = (this->fields)._angleTicks;
                                                    if (pSVar28 !=
                                                        (SpotLightGizmo3D_AngleTick__Array *)0x0) {
                                                      if (pSVar28->max_length < 2)
                                                      goto code_?;
                                                      pSVar29 = pSVar28->vector[1];
                                                      if (pSVar29 !=
                                                          (SpotLightGizmo3D_AngleTick *)0x0) {
                                                        uVar33 = (pSVar29->fields).Position.x;
                                                        uVar34 = (pSVar29->fields).Position.y;
                                                        pSVar28 = (this->fields)._angleTicks;
                                                        if (_UNK_? <
                                                            VVar8.y * (float)uVar34 +
                                                            VVar8.x * (float)uVar33 +
                                                            (float)puVar9 *
                                                            (pSVar29->fields).Position.z + 0.0) {
                                                          if (pSVar28 !=
                                                              (SpotLightGizmo3D_AngleTick__Array *)
                                                              0x0) {
                                                            if (pSVar28->max_length < 2)
                                                            goto code_?;
                                                            if ((pSVar28->vector[1] !=
                                                                 (SpotLightGizmo3D_AngleTick *)0x0)
                                                               && (pGVar13 = (pSVar28->vector[1]->
                                                                             fields).Tick,
                                                                  pGVar13 != (GizmoCap2D *)0x0)) {
                                                              GizmoCap::GizmoCap_SetVisible
                                                                        ((GizmoCap *)pGVar13,1,
                                                                         (MethodInfo *)0x0);
                                                              return;
                                                            }
                                                          }
                                                        }
                                                        else if (pSVar28 !=
                                                                 (SpotLightGizmo3D_AngleTick__Array
                                                                  *)0x0) {
                                                          if (pSVar28->max_length < 2)
                                                          goto code_?;
                                                          if ((pSVar28->vector[1] !=
                                                               (SpotLightGizmo3D_AngleTick *)0x0) &&
                                                             (pGVar13 = (pSVar28->vector[1]->fields)
                                                                        .Tick,
                                                             pGVar13 != (GizmoCap2D *)0x0)) {
                                                            GizmoCap::GizmoCap_SetVisible
                                                                      ((GizmoCap *)pGVar13,0,
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
              else {
                pLVar20 = (this->fields)._targetLight;
                if (pLVar20 != (Light *)0x0) {
                  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pLVar20,(MethodInfo *)0x0);
                  if (pTVar3 != (Transform *)0x0) {
                    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xffffff98,pTVar3,(MethodInfo *)0x0);
                    fVar7 = pVVar4->x;
                    fVar21 = pVVar4->y;
                    fVar5 = pVVar4->z;
                    pGVar13 = (this->fields)._dirSnapTick;
                    pGVar1 = (this->fields)._._gizmo;
                    if (pGVar1 != (Gizmo *)0x0) {
                      puVar22 = &UNK_?;
                      fVar6 = fVar5;
                      pCVar2 = Gizmo::Gizmo_GetWorkCamera(pGVar1,(MethodInfo *)0x0);
                      if (pCVar2 != (Camera *)0x0) {
                        position_00.y = (float)pGVar1;
                        position_00.x = (float)puVar22;
                        position_00.z = fVar5;
                        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                  Camera_WorldToScreenPoint_1
                                            ((Vector3 *)&stack0xffffff98,pCVar2,position_00,
                                             (MethodInfo *)0x0);
                        VStack_10.x = pVVar4->x;
                        VStack_10.y = pVVar4->y;
                        puStack_11 = (undefined *)pVVar4->z;
                        if (pGVar13 != (GizmoCap2D *)0x0) {
                          GizmoCap2D::GizmoCap2D_set_Position(pGVar13,VStack_10,(MethodInfo *)0x0);
                          pGVar13 = (this->fields)._dirSnapTick;
                          if (_UNK_? <
                              VVar8.x * fVar7 + VVar8.y * fVar21 + (float)puVar9 * fVar6 + 0.0) {
                            if (pGVar13 != (GizmoCap2D *)0x0) {
                              GizmoCap::GizmoCap_SetVisible((GizmoCap *)pGVar13,1,(MethodInfo *)0x0)
                              ;
                              goto code_?;
                            }
                          }
                          else if (pGVar13 != (GizmoCap2D *)0x0) {
                            GizmoCap::GizmoCap_SetVisible((GizmoCap *)pGVar13,0,(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
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
  (this->fields)._coneCirclePoints = this_00;
  func_?(&(this->fields)._coneCirclePoints,this_00);
  this_01 = (SceneRaycastFilter *)func_?(TypeInfo__RTG__SceneRaycastFilter);
  SceneRaycastFilter::SceneRaycastFilter__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._raycastFilter = this_01;
  func_?(&(this->fields)._raycastFilter,this_01);
  pSVar1 = (SpotLightGizmo3D_AngleTick__Array *)
           func_?(TypeInfo__RTG__SpotLightGizmo3D__AngleTick,4);
  (this->fields)._angleTicks = pSVar1;
  func_?(&(this->fields)._angleTicks,pSVar1);
  pGVar2 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(pGVar2,(MethodInfo *)0x0);
  (this->fields)._dummyDragSession = (GizmoSglAxisOffsetDrag3D *)pGVar2;
  func_?();
  pGVar2 = (GizmoSglAxisRotationDrag3D *)func_?(TypeInfo__RTG__GizmoSglAxisOffsetDrag3D);
  GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor(pGVar2,(MethodInfo *)0x0);
  (this->fields)._sglAxisDrag = (GizmoSglAxisOffsetDrag3D *)pGVar2;
  func_?(&(this->fields)._sglAxisDrag,pGVar2);
  pLVar3 = TypeInfo__RTG__Light3DSnapshot;
  pLVar4 = (Light3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pLVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pLVar3);
  (this->fields)._preChangeSnapshot = pLVar4;
  func_?(&(this->fields)._preChangeSnapshot,pLVar4);
  pLVar3 = TypeInfo__RTG__Light3DSnapshot;
  pLVar4 = (Light3DSnapshot *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pLVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pLVar3);
  (this->fields)._postChangeSnapshot = pLVar4;
  func_?(&(this->fields)._postChangeSnapshot,pLVar4);
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
    (value_00->fields)._enableSnapping = this_03;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,method_01);
    (this->fields)._hotkeys = value_00;
    func_?();
    GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* SpotLightGizmo3DHotkeys get_Hotkeys() */

SpotLightGizmo3DHotkeys *
Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_get_Hotkeys
          (SpotLightGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._sharedHotkeys == (SpotLightGizmo3DHotkeys *)0x0) {
    return (this->fields)._hotkeys;
  }
  return (this->fields)._sharedHotkeys;
}


/* Boolean get_IsSnapEnabled() */

bool Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_get_IsSnapEnabled
               (SpotLightGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._isSnapEnabled != 0) {
    return 1;
  }
  if ((this->fields)._sharedHotkeys == (SpotLightGizmo3DHotkeys *)0x0) {
    pSVar1 = (this->fields)._hotkeys;
    if (pSVar1 == (SpotLightGizmo3DHotkeys *)0x0) goto code_?;
  }
  else {
    pSVar1 = (this->fields)._sharedHotkeys;
  }
  this_00 = (pSVar1->fields)._enableSnapping;
  if (this_00 != (Hotkeys *)0x0) {
    bVar2 = Hotkeys::Hotkeys_IsActive(this_00,1,(MethodInfo *)0x0);
    return bVar2;
  }
code_?:
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
  if ((this->fields)._sharedLookAndFeel == (SpotLightGizmo3DLookAndFeel *)0x0) {
    return (this->fields)._lookAndFeel;
  }
  return (this->fields)._sharedLookAndFeel;
}


/* SpotLightGizmo3DSettings get_Settings() */

SpotLightGizmo3DSettings *
Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_get_Settings
          (SpotLightGizmo3D *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings == (SpotLightGizmo3DSettings *)0x0) {
    return (this->fields)._settings;
  }
  return (this->fields)._sharedSettings;
}


/* Void set_SharedLookAndFeel(SpotLightGizmo3DLookAndFeel) */

void Assembly-CSharp.dll::RTG::SpotLightGizmo3D::SpotLightGizmo3D_set_SharedLookAndFeel
               (SpotLightGizmo3D *this,SpotLightGizmo3DLookAndFeel *value,MethodInfo *method)

{
  (this->fields)._sharedLookAndFeel = value;
  func_?(&(this->fields)._sharedLookAndFeel,value);
  SpotLightGizmo3D_SetupSharedLookAndFeel(this,(MethodInfo *)0x0);
  return;
}

