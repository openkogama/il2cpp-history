
/* Void CalculateDragValues() */

void Assembly-CSharp.dll::RTG::GizmoSglAxisRotationDrag3D::
     GizmoSglAxisRotationDrag3D_CalculateDragValues
               (GizmoSglAxisRotationDrag3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if ((pOVar1 == (Object *)0x0) ||
     (uVar2 = (this->fields)._screenDragCircleTangent.x,
     uVar3 = (this->fields)._screenDragCircleTangent.y, pOVar1[2].klass == (Object__Class *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar5 = (undefined8 *)FUN_?(auStack_6,0x10,TypeInfo__RTG__IInputDevice);
  fVar7 = ((float)((ulonglong)*puVar5 >> 0x20) * (float)uVar3 + (float)*puVar5 * (float)uVar2) *
           (this->fields)._._sensitivity;
  (this->fields)._relativeRotation = fVar7;
  uVar8 = _UNK_?;
  if (fVar7 == 0.0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar7 = (pQVar9->identityQuaternion).y;
    fVar10 = (pQVar9->identityQuaternion).z;
    fVar11 = (pQVar9->identityQuaternion).w;
    (this->fields)._._._relativeDragRotation.x = (pQVar9->identityQuaternion).x;
    (this->fields)._._._relativeDragRotation.y = fVar7;
    (this->fields)._._._relativeDragRotation.z = fVar10;
    (this->fields)._._._relativeDragRotation.w = fVar11;
    return;
  }
  fVar7 = (this->fields)._relativeRotation;
  if ((this->fields)._._isSnapEnabled == 0) {
    (this->fields)._adjustRotationForAbsSnap = 1;
    (this->fields)._accumSnapDrag = 0.0;
    fVar7 = (float)FUN_?(fVar7 + (this->fields)._totalRotation,uVar8);
    (this->fields)._totalRotation = fVar7;
    uStack_12 = 0;
    uStack_13 = 0;
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    fVar7 = (float)FUN_?(fVar7 + (this->fields)._accumSnapDrag,_UNK_?);
    (this->fields)._accumSnapDrag = fVar7;
    uVar8 = _UNK_?;
    if (((this->fields)._workData.SnapMode == 1) && ((this->fields)._adjustRotationForAbsSnap != 0))
    {
      pNVar15 = SnapMath::SnapMath_CalculateNumSnapSteps
                          (aNStack_16,(this->fields)._workData.SnapStep,
                           (this->fields)._totalRotation,(MethodInfo *)0x0);
      fVar7 = (this->fields)._totalRotation;
      iVar17 = pNVar15->AbsIntNumSteps;
      fStack_18 = pNVar15->AbsFracSteps;
      if (pNVar15->AbsFracSteps <= _UNK_? && _UNK_? != pNVar15->AbsFracSteps) {
        fVar10 = _UNK_?;
        if (0.0 <= fVar7) {
          fVar10 = _UNK_?;
        }
      }
      else if (fVar7 < 0.0) {
        iVar17 = iVar17 + 1;
        fVar10 = _UNK_?;
      }
      else {
        iVar17 = iVar17 + 1;
        fVar10 = _UNK_?;
      }
      fVar10 = (float)iVar17 * (this->fields)._workData.SnapStep * fVar10;
      (this->fields)._totalRotation = fVar10;
      (this->fields)._accumSnapDrag = 0.0;
      (this->fields)._relativeRotation = fVar10 - fVar7;
      uStack_12 = 0;
      uStack_13 = 0;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)();
      (this->fields)._adjustRotationForAbsSnap = 0;
      uVar14 = uStack_12;
      uVar19 = uStack_13;
      goto code_?;
    }
    if ((float)((uint)fVar7 & _UNK_?) < (this->fields)._workData.SnapStep) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
      uVar14._0_4_ = (pQVar9->identityQuaternion).x;
      uVar14._4_4_ = (pQVar9->identityQuaternion).y;
      uVar19._0_4_ = (pQVar9->identityQuaternion).z;
      uVar19._4_4_ = (pQVar9->identityQuaternion).w;
      goto code_?;
    }
    fVar7 = (this->fields)._workData.SnapStep;
    fVar7 = (float)(int)((this->fields)._accumSnapDrag / fVar7) * fVar7;
    (this->fields)._accumSnapDrag = (this->fields)._accumSnapDrag - fVar7;
    (this->fields)._relativeRotation = fVar7;
    fVar7 = (float)FUN_?(fVar7 + (this->fields)._totalRotation,uVar8);
    (this->fields)._totalRotation = fVar7;
    uStack_12 = 0;
    uStack_13 = 0;
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pcRam_? = pcVar4;
  (*pcRam_?)();
  uVar14 = uStack_12;
  uVar19 = uStack_13;
code_?:
  (this->fields)._._._relativeDragRotation.x = (float)(int)uVar14;
  (this->fields)._._._relativeDragRotation.y = (float)(int)((ulonglong)uVar14 >> 0x20);
  (this->fields)._._._relativeDragRotation.z = (float)(int)uVar19;
  (this->fields)._._._relativeDragRotation.w = (float)(int)((ulonglong)uVar19 >> 0x20);
  aNStack_16[0].FltNumSteps = 0.0;
  aNStack_16[0].AbsFltNumSteps = 0.0;
  aNStack_16[0].IntNumSteps = 0;
  aNStack_16[0].AbsIntNumSteps = 0;
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar14 = func_?(&UNK_?);
    FUN_?(uVar14,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)();
  (this->fields)._._._totalDragRotation.x = aNStack_16[0].FltNumSteps;
  (this->fields)._._._totalDragRotation.y = aNStack_16[0].AbsFltNumSteps;
  (this->fields)._._._totalDragRotation.z = (float)aNStack_16[0].IntNumSteps;
  (this->fields)._._._totalDragRotation.w = (float)aNStack_16[0].AbsIntNumSteps;
  return;
}


/* Void OnSessionBegin() */

void Assembly-CSharp.dll::RTG::GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D_OnSessionBegin
               (GizmoSglAxisRotationDrag3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStackX_18 = (Vector2)((ulonglong)(uint)VStackX_18.y << 0x20);
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    pOVar1 = (Object *)pOVar1[4].monitor;
    (this->fields)._adjustRotationForAbsSnap = 0;
    if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    if ((pOVar2 != (Object *)0x0) && (pOVar3 = pOVar2[5].klass, pOVar3 != (Object__Class *)0x0))
    {
      auStack_4._16_8_ = (pOVar3->_1).unity_user_data;
      if (*(int *)&(pOVar3->_1).typeHierarchy == 2) {
        if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
        if ((pOVar2 != (Object *)0x0) &&
           (pOVar3 = pOVar2[2].klass, pOVar3 != (Object__Class *)0x0)) {
          pOVar2 = pOVar1;
          pfVar5 = (float *)FUN_?(&uStack_6);
          uStack_7 = *(void **)(pfVar5 + 4);
          fVar8 = *pfVar5;
          fVar9 = pfVar5[1];
          auStack_4._0_4_ = pfVar5[0];
          auStack_4._4_4_ = pfVar5[1];
          fVar10 = pfVar5[2];
          fVar11 = pfVar5[3];
          auStack_4._8_4_ = fVar10;
          auStack_4._12_4_ = fVar11;
          auStack_4._16_8_ = uStack_7;
          bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                             (&(this->fields)._rotationPlane,(Ray *)auStack_4,&VStackX_18.x,
                              (MethodInfo *)pOVar3);
          if (bVar12 == 0) {
            if (pOVar1 != (Object *)0x0) {
              uStack_13._0_4_ = (this->fields)._workData.RotationPlanePos.x;
              uStack_13._4_4_ = (this->fields)._workData.RotationPlanePos.y;
              fStack_14 = (this->fields)._workData.RotationPlanePos.z;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_6 = 0;
              uStack_15 = 0;
              pOVar3 = pOVar1[1].klass;
              if (pOVar3 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(pOVar1,(MethodInfo *)0x0);
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              pcVar16 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
                uVar17 = func_?(&UNK_?);
                FUN_?(uVar17,0);
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              pcRam_? = pcVar16;
              (*pcRam_?)(pOVar3,&uStack_13,2,&uStack_6);
              uVar18 = (this->fields)._workData.Axis.x;
              uVar19 = (this->fields)._workData.Axis.y;
              uVar20 = (this->fields)._workData.RotationPlanePos.x;
              uVar21 = (this->fields)._workData.RotationPlanePos.y;
              auStack_4._8_4_ =
                   (this->fields)._workData.Axis.z + (this->fields)._workData.RotationPlanePos.z;
              auStack_4._4_4_ = (float)uVar19 + (float)uVar21;
              auStack_4._0_4_ = (float)uVar18 + (float)uVar20;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_22 = 0;
              uStack_23 = 0;
              pOVar3 = pOVar1[1].klass;
              if (pOVar3 != (Object__Class *)0x0) {
                pcVar16 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
                  uVar17 = func_?(&UNK_?);
                  FUN_?(uVar17,0);
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                pcRam_? = pcVar16;
                (*pcRam_?)(pOVar3,auStack_4,2,&uStack_22);
                VStackX_18.x = (float)uStack_22 - (float)uStack_6;
                VStackX_18.y = uStack_22._4_4_ - uStack_6._4_4_;
                method_00 = (MethodInfo *)&VStackX_18;
                VStackX_18 = (Vector2)FUN_?();
                uVar24 = _UNK_?;
                (this->fields)._screenDragCircleTangent.x = VStackX_18.x;
                (this->fields)._screenDragCircleTangent.y = VStackX_18.y;
                (this->fields)._screenDragCircleTangent.z = 0.0;
                fVar8 = (this->fields)._screenDragCircleTangent.x;
                fVar10 = (float)((uint)(this->fields)._screenDragCircleTangent.y ^ uVar24);
                (this->fields)._screenDragCircleTangent.x = fVar10;
                (this->fields)._screenDragCircleTangent.y = fVar8;
                (this->fields)._screenDragCircleTangent.z = 0.0;
                VStackX_18 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRight(method_00);
                fVar9 = _UNK_?;
                if (_UNK_? <= fVar8 * VStackX_18.y + fVar10 * VStackX_18.x) {
                  uVar25 = (this->fields)._screenDragCircleTangent.x;
                  uVar26 = (this->fields)._screenDragCircleTangent.y;
                  VVar27 = RightAngTriangle2D::RightAngTriangle2D_get_ModelUp(method_00);
                  VStackX_18.y = VVar27.y;
                  VStackX_18.x = VVar27.x;
                  if (fVar9 <= VStackX_18.y * (float)uVar26 + VStackX_18.x * (float)uVar25) {
                    return;
                  }
                }
                uVar28 = (this->fields)._screenDragCircleTangent.x;
                uVar29 = (this->fields)._screenDragCircleTangent.y;
                fVar8 = (this->fields)._screenDragCircleTangent.z;
                (this->fields)._screenDragCircleTangent.x = (float)(uVar28 ^ uVar24);
                (this->fields)._screenDragCircleTangent.y = (float)(uVar29 ^ uVar24);
                (this->fields)._screenDragCircleTangent.z = (float)((uint)fVar8 ^ uVar24);
                return;
              }
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar1,(MethodInfo *)0x0);
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
          }
          else {
            fVar8 = fVar11 * VStackX_18.x + fVar8;
            fVar9 = (float)uStack_7 * VStackX_18.x + fVar9;
            fVar10 = uStack_7._4_4_ * VStackX_18.x + fVar10;
            uVar30 = (this->fields)._workData.RotationPlanePos.x;
            uVar31 = (this->fields)._workData.RotationPlanePos.y;
            fVar32 = fVar10 - (this->fields)._workData.RotationPlanePos.z;
            auStack_4._0_4_ = (this->fields)._workData.Axis.x;
            auStack_4._4_4_ = (this->fields)._workData.Axis.y;
            fVar11 = (this->fields)._workData.Axis.z;
            fVar33 = fVar32 * auStack_4._0_4_;
            fVar34 = (fVar9 - (float)uVar31) * auStack_4._0_4_;
            fVar32 = fVar32 * auStack_4._4_4_;
            fVar35 = (fVar8 - (float)uVar30) * auStack_4._4_4_;
            if (pOVar1 != (Object *)0x0) {
              auStack_4._4_4_ = fVar9;
              auStack_4._0_4_ = fVar8;
              auStack_4._8_4_ = fVar10;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_22 = 0;
              uStack_23 = 0;
              pOVar3 = pOVar1[1].klass;
              if (pOVar3 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(pOVar1,(MethodInfo *)0x0);
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              pcVar16 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
                uVar17 = func_?(&UNK_?);
                FUN_?(uVar17,0);
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              pcRam_? = pcVar16;
              (*pcRam_?)(pOVar3,auStack_4,2,&uStack_22,pOVar2);
              fStack_14 = (fVar34 - fVar35) + fVar10;
              uStack_13 = CONCAT44(((fVar8 - (float)uVar30) * fVar11 - fVar33) + fVar9,
                                   (fVar32 - (fVar9 - (float)uVar31) * fVar11) + fVar8);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_6 = 0;
              uStack_15 = 0;
              pOVar3 = pOVar1[1].klass;
              if (pOVar3 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(pOVar1,(MethodInfo *)0x0);
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              pcVar16 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
                uVar17 = func_?(&UNK_?);
                FUN_?(uVar17,0);
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              pcRam_? = pcVar16;
              (*pcRam_?)(pOVar3,&uStack_13,2,&uStack_6);
              fVar8 = (float)uStack_6 - (float)uStack_22;
              fVar9 = uStack_6._4_4_ - uStack_22._4_4_;
              goto code_?;
            }
          }
        }
      }
      else {
        if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar2 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                            (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
        if ((pOVar2 != (Object *)0x0) && (pOVar2[2].klass != (Object__Class *)0x0)) {
          puVar36 = (undefined8 *)FUN_?(auStack_4,7,TypeInfo__RTG__IInputDevice);
          uStack_6 = *puVar36;
          uStack_15 = *(undefined4 *)(puVar36 + 1);
          if (pOVar1 != (Object *)0x0) {
            uStack_13._0_4_ = (this->fields)._workData.RotationPlanePos.x;
            uStack_13._4_4_ = (this->fields)._workData.RotationPlanePos.y;
            fStack_14 = (this->fields)._workData.RotationPlanePos.z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_22 = 0;
            uStack_23 = 0;
            pOVar3 = pOVar1[1].klass;
            if (pOVar3 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar1,(MethodInfo *)0x0);
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            pcVar16 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
              uVar17 = func_?(&UNK_?);
              FUN_?(uVar17,0);
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            pcRam_? = pcVar16;
            (*pcRam_?)(pOVar3,&uStack_13,2,&uStack_22);
            fVar9 = (float)uStack_6 - (float)uStack_22;
            fVar8 = (float)((uint)(uStack_6._4_4_ - uStack_22._4_4_) ^ _UNK_?);
code_?:
            VStackX_18.y = fVar9;
            VStackX_18.x = fVar8;
            uVar17 = FUN_?(&VStackX_18);
            (this->fields)._screenDragCircleTangent.x = (float)(int)uVar17;
            (this->fields)._screenDragCircleTangent.y = (float)(int)((ulonglong)uVar17 >> 0x20);
            (this->fields)._screenDragCircleTangent.z = 0.0;
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnSessionEnd() */

void Assembly-CSharp.dll::RTG::GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D_OnSessionEnd
               (GizmoSglAxisRotationDrag3D *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields)._accumSnapDrag = 0.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar2 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._screenDragCircleTangent.x =
       (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._screenDragCircleTangent.y = fVar2;
  (this->fields)._screenDragCircleTangent.z = 0.0;
  (this->fields)._adjustRotationForAbsSnap = 0;
  (this->fields)._relativeRotation = 0.0;
  (this->fields)._totalRotation = 0.0;
  return;
}


/* Void SetWorkData(GizmoSglAxisRotationDrag3D+WorkData) */

void Assembly-CSharp.dll::RTG::GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D_SetWorkData
               (GizmoSglAxisRotationDrag3D *this,GizmoSglAxisRotationDrag3D_WorkData *workData,
               MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).get_IsActive_1.methodPtr)
                    (this,(this->klass->vtable).get_IsActive_1.method);
  if (cVar1 == '\0') {
    fVar2 = (workData->RotationPlanePos).y;
    uVar3 = *(undefined8 *)&(workData->RotationPlanePos).z;
    fVar4 = (workData->Axis).y;
    fVar5 = (workData->Axis).z;
    iVar6 = workData->SnapMode;
    fVar7 = workData->SnapStep;
    (this->fields)._workData.RotationPlanePos.x = (workData->RotationPlanePos).x;
    (this->fields)._workData.RotationPlanePos.y = fVar2;
    *(undefined8 *)&(this->fields)._workData.RotationPlanePos.z = uVar3;
    (this->fields)._workData.Axis.y = fVar4;
    (this->fields)._workData.Axis.z = fVar5;
    (this->fields)._workData.SnapMode = iVar6;
    (this->fields)._workData.SnapStep = fVar7;
    fVar4 = (this->fields)._workData.Axis.z;
    uStack_8._0_4_ = (this->fields)._workData.RotationPlanePos.x;
    uStack_8._4_4_ = (this->fields)._workData.RotationPlanePos.y;
    fVar2 = (this->fields)._workData.RotationPlanePos.z;
    uStack_9._0_4_ = (this->fields)._workData.Axis.x;
    uStack_9._4_4_ = (this->fields)._workData.Axis.y;
    fStack_10 = fVar4;
    uStack_11 = uStack_9;
    fVar5 = (float)FUN_?(&uStack_9);
    if (_UNK_? < fVar5) {
      uStack_11._0_4_ = (float)uStack_11 / fVar5;
      uStack_11._4_4_ = uStack_11._4_4_ / fVar5;
      fVar4 = fVar4 / fVar5;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_11._0_4_ = (pVVar12->zeroVector).x;
      uStack_11._4_4_ = (pVVar12->zeroVector).y;
      fVar4 = (pVVar12->zeroVector).z;
    }
    fVar2 = (float)((uint)(uStack_8._4_4_ * uStack_11._4_4_ + (float)uStack_8 * (float)uStack_11 +
                          fVar2 * fVar4) ^ _UNK_?);
    (this->fields)._rotationPlane.m_Normal.x = (float)uStack_11;
    (this->fields)._rotationPlane.m_Normal.y = uStack_11._4_4_;
    (this->fields)._rotationPlane.m_Normal.z = fVar4;
    (this->fields)._rotationPlane.m_Distance = fVar2;
  }
  return;
}


/* GizmoSglAxisRotationDrag3D() */

void Assembly-CSharp.dll::RTG::GizmoSglAxisRotationDrag3D::GizmoSglAxisRotationDrag3D__ctor
               (GizmoSglAxisRotationDrag3D *this,MethodInfo *method)

{
  (this->fields)._._sensitivity = 1.0;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List__,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_GizmoTransform_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._._._targetTransforms = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar6 = cRam_?;
  cVar7 = cRam_?;
  pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar9 = (pQVar8->identityQuaternion).y;
  fVar10 = (pQVar8->identityQuaternion).z;
  fVar11 = (pQVar8->identityQuaternion).w;
  (this->fields)._._._totalDragRotation.x = (pQVar8->identityQuaternion).x;
  (this->fields)._._._totalDragRotation.y = fVar9;
  (this->fields)._._._totalDragRotation.z = fVar10;
  (this->fields)._._._totalDragRotation.w = fVar11;
  if (cVar6 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cVar6 = '\x01';
    cRam_? = '\x01';
    cVar7 = cRam_?;
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (pVVar12->oneVector).y;
  fVar9 = (pVVar12->oneVector).z;
  (this->fields)._._._totalDragScale.x = (pVVar12->oneVector).x;
  (this->fields)._._._totalDragScale.y = fVar10;
  (this->fields)._._._totalDragScale.z = fVar9;
  if (cVar7 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
    cVar6 = cRam_?;
  }
  pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar9 = (pQVar8->identityQuaternion).y;
  fVar10 = (pQVar8->identityQuaternion).z;
  fVar11 = (pQVar8->identityQuaternion).w;
  (this->fields)._._._relativeDragRotation.x = (pQVar8->identityQuaternion).x;
  (this->fields)._._._relativeDragRotation.y = fVar9;
  (this->fields)._._._relativeDragRotation.z = fVar10;
  (this->fields)._._._relativeDragRotation.w = fVar11;
  if (cVar6 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (pVVar12->oneVector).y;
  fVar9 = (pVVar12->oneVector).z;
  (this->fields)._._._relativeDragScale.x = (pVVar12->oneVector).x;
  (this->fields)._._._relativeDragScale.y = fVar10;
  (this->fields)._._._relativeDragScale.z = fVar9;
  return;
}

