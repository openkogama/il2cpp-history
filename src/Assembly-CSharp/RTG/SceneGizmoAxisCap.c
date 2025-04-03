
/* Void OnGizmoHandlePicked(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::SceneGizmoAxisCap::SceneGizmoAxisCap_OnGizmoHandlePicked
               (SceneGizmoAxisCap *this,Gizmo *gizmo,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._cap;
  if (this_00 != (GizmoCap3D *)0x0) {
    pvVar1 = UnityEngine.AndroidJNIModule.dll::UnityEngine::AndroidJavaObject::
             AndroidJavaObject__GetRawClass((AndroidJavaObject *)this_00,(MethodInfo *)0x0);
    if ((void *)handleId != pvVar1) {
      return;
    }
    pSVar2 = (this->fields)._._sceneGizmo;
    if (((pSVar2 != (SceneGizmo *)0x0) &&
        (pGVar3 = (pSVar2->fields)._._gizmo, pGVar3 != (Gizmo *)0x0)) &&
       (this_01 = (pGVar3->fields)._transform, this_01 != (GizmoTransform *)0x0)) {
      pVVar4 = GizmoTransform::GizmoTransform_GetAxis3D
                         (&VStack_5,this_01,(this->fields)._axisDesc,(MethodInfo *)0x0);
      uStack_6._0_4_ = pVVar4->x;
      uStack_6._4_4_ = pVVar4->y;
      fStack_7 = pVVar4->z;
      VStack_5.x = (float)((undefined4)uStack_6 ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
      ;
      VStack_5.y = (float)(uStack_6._4_4_ ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
      ;
      VStack_5.z = (float)((uint)fStack_7 ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
      ;
      if (cRam_? == '\0') {
        uStack_6 = CONCAT44(uStack_6._4_4_,&TypeInfo__UnityEngine__Vector3);
        VStack_5.z = (float)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      forward.y = VStack_5.y;
      forward.x = VStack_5.x;
      forward.z = VStack_5.z;
      pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                         ((Quaternion *)&stack0xffffffe0,forward,
                          TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0)
      ;
      fVar9 = pQVar8->x;
      VStack_5.x = pQVar8->y;
      VStack_5.y = pQVar8->z;
      VStack_5.z = pQVar8->w;
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
      }
      this_02 = (RTFocusCamera *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
      if (this_02 != (RTFocusCamera *)0x0) {
        targetRotation.y = VStack_5.x;
        targetRotation.x = fVar9;
        targetRotation.z = VStack_5.y;
        targetRotation.w = VStack_5.z;
        RTFocusCamera::RTFocusCamera_PerformRotationSwitch(this_02,targetRotation,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::SceneGizmoAxisCap::SceneGizmoAxisCap_OnGizmoPreUpdateBegin
               (SceneGizmoAxisCap *this,Gizmo *gizmo,MethodInfo *method)

{
  this_00 = this;
  pSVar1 = (this->fields)._._sceneGizmo;
  if (pSVar1 != (SceneGizmo *)0x0) {
    pSVar2 = (pSVar1->fields)._sharedLookAndFeel;
    if (pSVar2 == (SceneGizmoLookAndFeel *)0x0) {
      pSVar2 = (pSVar1->fields)._lookAndFeel;
    }
    pAVar3 = (this->fields)._axisDesc;
    if ((pAVar3 != (AxisDescriptor *)0x0) && (pSVar2 != (SceneGizmoLookAndFeel *)0x0)) {
      pGVar4 = (pSVar2->fields)._axesCapsLookAndFeel;
      pGVar5 = (this->fields)._._cap;
      uVar6 = (pAVar3->fields)._index;
      if ((pAVar3->fields)._sign == 0) {
        if (pGVar4 != (GizmoCap3DLookAndFeel__Array *)0x0) {
          if (pGVar4->max_length <= uVar6) goto code_?;
          pGVar7 = pGVar4->vector[uVar6];
          goto code_?;
        }
      }
      else if (pGVar4 != (GizmoCap3DLookAndFeel__Array *)0x0) {
        if (pGVar4->max_length <= uVar6 + 3) goto code_?;
        pGVar7 = pGVar4->vector[uVar6 + 3];
code_?:
        if (pGVar5 != (GizmoCap3D *)0x0) {
          ppGVar8 = &(pGVar5->fields)._sharedLookAndFeel;
          *ppGVar8 = pGVar7;
          func_?(ppGVar8,pGVar7);
          SceneGizmoAxisCap_UpdateColor(this,(MethodInfo *)0x0);
          pCVar9 = (this->fields)._colorTransition;
          if (pCVar9 != (ColorTransition *)0x0) {
            if (((pCVar9->fields)._isActive == 0) && ((pCVar9->fields)._state != 1)) {
              pGVar5 = (this->fields)._._cap;
              if (pGVar5 != (GizmoCap3D *)0x0) {
                this._0_1_ = 1;
code_?:
                GizmoCap::GizmoCap_SetHoverable((GizmoCap *)pGVar5,(bool)this,(MethodInfo *)0x0);
                if (gizmo != (Gizmo *)0x0) {
                  camera = Gizmo::Gizmo_get_FocusCamera(gizmo,(MethodInfo *)0x0);
                  SceneGizmoAxisCap_UpdateTransform(this_00,camera,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            else {
              pGVar5 = (this->fields)._._cap;
              if (pGVar5 != (GizmoCap3D *)0x0) {
                this._0_1_ = 0;
                goto code_?;
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::SceneGizmoAxisCap::SceneGizmoAxisCap_Render
               (SceneGizmoAxisCap *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._._sceneGizmo;
  if (pSVar1 != (SceneGizmo *)0x0) {
    auStack_2._12_4_ = (pSVar1->fields)._sharedLookAndFeel;
    if ((SceneGizmoLookAndFeel *)auStack_2._12_4_ == (SceneGizmoLookAndFeel *)0x0) {
      auStack_2._12_4_ = (pSVar1->fields)._lookAndFeel;
    }
    pGVar3 = (this->fields)._._cap;
    VStack_4.y = (float)(pSVar1->fields)._sceneGizmoCamera;
    if (pGVar3 != (GizmoCap3D *)0x0) {
      (*(code *)(pGVar3->klass->vtable).Render_1.method)();
      this_00 = (RegexParser *)(this->fields)._axisDesc;
      if (this_00 != (RegexParser *)0x0) {
        bVar5 = System.dll::System::Text::RegularExpressions::RegexParser::RegexParser_EmptyStack
                           (this_00,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          return;
        }
        if ((TypeInfo__RTG__Singleton<RTG::GizmoLabelMaterial>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        this_03 = (GizmoLabelMaterial *)
                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                            (MethodInfo__RTG__Singleton<RTG::GizmoLabelMaterial>__get_Get__);
        if (this_03 != (GizmoLabelMaterial *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pMVar6 = GizmoLabelMaterial::GizmoLabelMaterial_get_Material(this_03,(MethodInfo *)0x0);
          if (pMVar6 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                      (pMVar6,StringLiteral__ZWrite,0,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&StringLiteral__ZTest);
              cRam_? = '\x01';
            }
            pMVar6 = GizmoLabelMaterial::GizmoLabelMaterial_get_Material(this_03,(MethodInfo *)0x0)
            ;
            if (((pMVar6 != (Material *)0x0) &&
                (UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                           (pMVar6,StringLiteral__ZTest,4,(MethodInfo *)0x0),
                in_stack_7 != 0)) &&
               (pCVar8 = (this->fields)._color, pCVar8 != (ColorRef *)0x0)) {
              pCVar9 = ColorEx::ColorEx_KeepAllButAlpha
                                  ((Color *)&stack0xfffffea8,*(Color *)(in_stack_7 + 0x2c),
                                   (pCVar8->fields)._value.a,(MethodInfo *)0x0);
              fVar10 = pCVar9->b;
              fVar11 = pCVar9->a;
              if (cRam_? == '\0') {
                func_?(&StringLiteral__Color);
                cRam_? = '\x01';
              }
              pMVar6 = GizmoLabelMaterial::GizmoLabelMaterial_get_Material
                                  (this_03,(MethodInfo *)0x0);
              if (pMVar6 != (Material *)0x0) {
                value.y = fVar11;
                value.x = fVar10;
                value.z = (float)in_stack_12;
                value.w = in_stack_13;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                          (pMVar6,StringLiteral__Color,value,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?(&StringLiteral__MainTex);
                  cRam_? = '\x01';
                }
                pMVar6 = GizmoLabelMaterial::GizmoLabelMaterial_get_Material
                                    (this_03,(MethodInfo *)0x0);
                if (pMVar6 != (Material *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
                            (pMVar6,StringLiteral__MainTex,in_stack_14,(MethodInfo *)0x0);
                  pMVar6 = GizmoLabelMaterial::GizmoLabelMaterial_get_Material
                                      (this_03,(MethodInfo *)0x0);
                  if (pMVar6 != (Material *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                              (pMVar6,0,(MethodInfo *)0x0);
                    pSVar1 = (this->fields)._._sceneGizmo;
                    if (((pSVar1 != (SceneGizmo *)0x0) &&
                        (pGVar15 = (pSVar1->fields)._._gizmo, pGVar15 != (Gizmo *)0x0)) &&
                       (this_01 = (pGVar15->fields)._transform, this_01 != (GizmoTransform *)0x0)) {
                      pVVar16 = GizmoTransform::GizmoTransform_GetAxis3D
                                          ((Vector3 *)&stack0xfffffeb4,this_01,
                                           (this->fields)._axisDesc,(MethodInfo *)0x0);
                      fVar10 = pVVar16->y;
                      if ((in_stack_17 != 0.0) &&
                         (pGVar3 = (this->fields)._._cap, pGVar3 != (GizmoCap3D *)0x0)) {
                        pVVar16 = GizmoCap3D::GizmoCap3D_get_Position
                                            ((Vector3 *)&stack0xfffffec4,pGVar3,(MethodInfo *)0x0);
                        uVar18 = pVVar16->x;
                        uVar19 = pVVar16->y;
                        fVar11 = pVVar16->z;
                        VStack_4.x = (float)uVar19;
                        if (cRam_? == '\0') {
                          func_?();
                          cRam_? = '\x01';
                        }
                        if (cRam_? == '\0') {
                          func_?();
                          cRam_? = '\x01';
                        }
                        fVar10 = *(float *)((int)fVar10 + 0x28);
                        if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor ==
                            0) {
                          func_?();
                        }
                        fVar10 = fVar10 * _UNK_? *
                                TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->
                                _invBaseScreenSize;
                        if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        fVar20 = 0.0;
                        worldPos.y = VStack_4.x;
                        worldPos.x = (float)uVar18;
                        worldPos.z = fVar11;
                        fVar10 = CameraEx::CameraEx_ScreenToEstimatedWorldSize
                                          (in_stack_21,worldPos,fVar10,(MethodInfo *)0x0);
                        pVVar16 = Vector3Ex::Vector3Ex_FromValue
                                            ((Vector3 *)&stack0xfffffee8,fVar10,(MethodInfo *)0x0);
                        uStack_22._0_4_ = pVVar16->x;
                        uStack_22._4_4_ = pVVar16->y;
                        auStack_2._8_4_ = pVVar16->z;
                        pGVar3 = (this->fields)._._cap;
                        VStack_23.y = (float)(undefined4)uStack_22;
                        VStack_23.z = (float)uStack_22._4_4_;
                        if (pGVar3 != (GizmoCap3D *)0x0) {
                          pVVar16 = GizmoCap3D::GizmoCap3D_get_Position
                                              (&VStack_4,pGVar3,(MethodInfo *)0x0);
                          uVar24 = pVVar16->x;
                          uVar25 = pVVar16->y;
                          fVar10 = (float)auStack_2._4_4_ * _UNK_?;
                          fVar11 = (float)uVar24 + (float)uVar18 * fVar10;
                          auStack_2._4_4_ = (float)uVar25 + VStack_4.x * fVar10;
                          auStack_26._4_4_ = fVar11;
                          fStack_27 = 0.0;
                          fStack_28 = 0.0;
                          uStack_22 = uStack_22 & 0xffffffff00000000;
                          if (*(Camera **)((int)in_stack_17 + 0x10) != (Camera *)0x0) {
                            position_00.y = (float)auStack_2._4_4_;
                            position_00.x = fVar11;
                            position_00.z = pVVar16->z + VStack_4.y * fVar10;
                            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                      Camera_WorldToScreenPoint_1
                                                (&VStack_23,
                                                 *(Camera **)((int)in_stack_17 + 0x10),
                                                 position_00,(MethodInfo *)0x0);
                            uVar29 = pVVar16->x;
                            uVar30 = pVVar16->y;
                            auStack_2._4_4_ = pVVar16->z;
                            pSVar1 = (this->fields)._._sceneGizmo;
                            VStack_23.z = (float)uVar29;
                            auStack_2._0_4_ = uVar30;
                            if (((pSVar1 != (SceneGizmo *)0x0) &&
                                (pRVar31 = (pSVar1->fields)._sceneGizmoCamera,
                                pRVar31 != (RTSceneGizmoCamera *)0x0)) &&
                               (*(Camera **)((int)in_stack_17 + 0x10) != (Camera *)0x0)) {
                              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                        Camera_WorldToScreenPoint_1
                                                  ((Vector3 *)(auStack_2 + 0xc),
                                                   *(Camera **)((int)in_stack_17 + 0x10),
                                                   (pRVar31->fields)._lookAtPoint,(MethodInfo *)0x0)
                              ;
                              uVar32 = pVVar16->x;
                              uVar33 = pVVar16->y;
                              VStack_23.z = pVVar16->z;
                              VStack_4.y = fStack_34 - (float)uVar32;
                              VStack_4.x = fStack_35 - (float)uVar33;
                              VStack_23.x = (float)uVar32;
                              VStack_23.y = (float)uVar33;
                              if (cRam_? == '\0') {
                                func_?();
                                cRam_? = '\x01';
                              }
                              if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              dVar36 = (double)(VStack_4.y * VStack_4.y +
                                               VStack_4.x * VStack_4.x);
                              if (dVar36 < 0.0) {
                                func_?();
                              }
                              else {
                                dVar36 = SQRT(dVar36);
                              }
                              fVar10 = (float)dVar36;
                              if (_UNK_? < fVar10) {
                                VStack_4.y = VStack_4.y / fVar10;
                                VStack_4.x = VStack_4.x / fVar10;
                              }
                              else {
                                if (cRam_? == '\0') {
                                  func_?();
                                  cRam_? = '\x01';
                                }
                                VStack_4.y = (TypeInfo__UnityEngine__Vector2->static_fields->
                                              zeroVector).x;
                                VStack_4.x = (TypeInfo__UnityEngine__Vector2->static_fields->
                                              zeroVector).y;
                              }
                              if (*(Transform **)((int)in_stack_17 + 0x14) != (Transform *)0x0
                                 ) {
                                pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_get_forward
                                                    ((Vector3 *)(auStack_26 + 4),
                                                     *(Transform **)((int)in_stack_17 + 0x14),
                                                     (MethodInfo *)0x0);
                                fVar10 = 0.0;
                                v2.y = aMStack_37[0].m31;
                                v2.x = aMStack_37[0].m21;
                                v2.z = fStack_38;
                                fStack_28 = Vector3Ex::Vector3Ex_AbsDot
                                                      (*pVVar16,v2,(MethodInfo *)0x0);
                                fStack_35 = (float)((uint)fStack_28 & _UNK_?);
                                if (cRam_? == '\0') {
                                  VStack_23.y = (float)&TypeInfo__RTG__SceneGizmoLookAndFeel;
                                  VStack_23.x = (float)&UNK_?;
                                  func_?();
                                  cRam_? = '\x01';
                                }
                                VStack_23.z = *(float *)(auStack_2._4_4_ + 0x28);
                                if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).
                                    cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                VVar39 = Vector2Ex::Vector2Ex_FromValue
                                                   (VStack_23.z * _UNK_? *
                                                    TypeInfo__RTG__SceneGizmoLookAndFeel->
                                                    static_fields->_invBaseScreenSize,
                                                    (MethodInfo *)0x0);
                                auStack_2._8_4_ = VVar39.y;
                                auStack_2._4_4_ =
                                     fStack_34 + (float)auStack_2._4_4_ * VStack_4.y * VStack_4.z
                                ;
                                VStack_4.z = fStack_35 +
                                              (float)auStack_2._8_4_ * VStack_4.x * VStack_4.z;
                                this_02 = *(Camera **)((int)in_stack_17 + 0x10);
                                if (*(Transform **)((int)in_stack_17 + 0x14) !=
                                    (Transform *)0x0) {
                                  pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_get_position
                                                      ((Vector3 *)(auStack_26 + 4),
                                                       *(Transform **)
                                                        ((int)in_stack_17 + 0x14),
                                                       (MethodInfo *)0x0);
                                  uVar40 = pVVar16->x;
                                  uVar41 = pVVar16->y;
                                  auStack_2._8_4_ = fStack_42 - pVVar16->z;
                                  auStack_26 = (undefined1  [8])
                                               CONCAT44(aMStack_37[0].m00 - (float)uVar41,
                                                        aMStack_37[0].m02 - (float)uVar40);
                                  auStack_2._0_4_ = fStack_38;
                                  auStack_2._4_4_ = VStack_23.z;
                                  fStack_27 = (float)auStack_2._8_4_;
                                  fVar43 = (float10)func_?();
                                  if (this_02 != (Camera *)0x0) {
                                    position.y = in_stack_44;
                                    position.x = fVar20;
                                    position.z = (float)fVar43;
                                    UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                    Camera_ScreenToWorldPoint_1
                                              ((Vector3 *)&stack0xfffffedc,this_02,position,
                                               (MethodInfo *)0x0);
                                    if (*(Transform **)((int)in_stack_17 + 0x14) !=
                                        (Transform *)0x0) {
                                      pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                                Transform_get_forward
                                                          ((Vector3 *)&stack0xfffffef4,
                                                           *(Transform **)
                                                            ((int)in_stack_17 + 0x14),
                                                           (MethodInfo *)0x0);
                                      VStack_4.y = pVVar16->x;
                                      VStack_4.z = pVVar16->y;
                                      fVar11 = pVVar16->z;
                                      if (*(Transform **)((int)in_stack_17 + 0x14) !=
                                          (Transform *)0x0) {
                                        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_get_up((Vector3 *)&stack0xffffff00,
                                                                     *(Transform **)
                                                                      ((int)in_stack_17 + 0x14
                                                                      ),(MethodInfo *)0x0);
                                        forward.y = VStack_23.z;
                                        forward.x = VStack_23.y;
                                        forward.z = fVar11;
                                        pQVar45 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  Quaternion::Quaternion_LookRotation
                                                            ((Quaternion *)auStack_2,forward,
                                                             *pVVar16,(MethodInfo *)0x0);
                                        pos.y = (float)auStack_2._4_4_;
                                        pos.x = (float)auStack_2._0_4_;
                                        pos.z = fVar10;
                                        s.y = (float)uStack_46;
                                        s.x = (float)uStack_47;
                                        s.z = fStack_38;
                                        pMVar48 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4
                                                  ::Matrix4x4_TRS(aMStack_37,pos,*pQVar45,s,
                                                                  (MethodInfo *)0x0);
                                        aMStack_37[0].m01 = pMVar48->m00;
                                        aMStack_37[0].m11 = pMVar48->m10;
                                        aMStack_37[0].m21 = pMVar48->m20;
                                        aMStack_37[0].m31 = pMVar48->m30;
                                        auStack_26._0_4_ = pMVar48->m01;
                                        auStack_26._4_4_ = pMVar48->m11;
                                        fStack_27 = pMVar48->m21;
                                        fStack_28 = pMVar48->m31;
                                        VStack_23.x = pMVar48->m12;
                                        VStack_23.y = pMVar48->m22;
                                        VStack_23.z = pMVar48->m32;
                                        VStack_4.z = pMVar48->m02;
                                        fStack_38 = pMVar48->m03;
                                        fStack_34 = pMVar48->m13;
                                        fStack_35 = pMVar48->m23;
                                        fStack_42 = pMVar48->m33;
                                        if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).
                                            cctor_finished_or_no_cctor == 0) {
                                          func_?();
                                        }
                                        this_04 = (MeshPool *)
                                                  Singleton`1[System::Object]::
                                                  Singleton_1_System_Object__1_get_Get
                                                            (
                                                  MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__
                                                  );
                                        if (this_04 != (MeshPool *)0x0) {
                                          mesh = MeshPool::MeshPool_get_UnitQuadXY
                                                           (this_04,(MethodInfo *)0x0);
                                          if ((TypeInfo__UnityEngine__Graphics->_1).
                                              cctor_finished_or_no_cctor == 0) {
                                            func_?();
                                          }
                                          matrix.m10 = aMStack_37[0].m02;
                                          matrix.m00 = aMStack_37[0].m31;
                                          matrix.m20 = aMStack_37[0].m12;
                                          matrix.m30 = aMStack_37[0].m22;
                                          matrix.m01 = fStack_28;
                                          matrix.m11 = (float)(undefined4)uStack_22;
                                          matrix.m21 = (float)uStack_22._4_4_;
                                          matrix.m31 = (float)uStack_47;
                                          matrix.m02 = VStack_23.z;
                                          matrix.m12 = (float)auStack_2._0_4_;
                                          matrix.m22 = (float)auStack_2._4_4_;
                                          matrix.m32 = (float)auStack_2._8_4_;
                                          matrix.m03 = fStack_42;
                                          matrix.m13 = (float)auStack_26._0_4_;
                                          matrix.m23 = (float)auStack_26._4_4_;
                                          matrix.m33 = fStack_27;
                                          UnityEngine.CoreModule.dll::UnityEngine::Graphics::
                                          Graphics_DrawMeshNow_3(mesh,matrix,(MethodInfo *)0x0);
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
  func_?();
  pcVar49 = (code *)swi(3);
  (*pcVar49)();
  return;
}


/* Void UpdateColor() */

void Assembly-CSharp.dll::RTG::SceneGizmoAxisCap::SceneGizmoAxisCap_UpdateColor
               (SceneGizmoAxisCap *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._._sceneGizmo;
  if (pSVar1 != (SceneGizmo *)0x0) {
    pSVar2 = (pSVar1->fields)._sharedLookAndFeel;
    if (pSVar2 == (SceneGizmoLookAndFeel *)0x0) {
      pSVar2 = (pSVar1->fields)._lookAndFeel;
    }
    pAVar3 = (this->fields)._axisDesc;
    if ((pAVar3 != (AxisDescriptor *)0x0) && (pSVar2 != (SceneGizmoLookAndFeel *)0x0)) {
      uVar4 = (pAVar3->fields)._index;
      pGVar5 = (pSVar2->fields)._axesCapsLookAndFeel;
      if ((pAVar3->fields)._sign == 0) {
        if (pGVar5 != (GizmoCap3DLookAndFeel__Array *)0x0) goto code_?;
      }
      else if (pGVar5 != (GizmoCap3DLookAndFeel__Array *)0x0) {
        uVar4 = uVar4 + 3;
code_?:
        if (pGVar5->max_length <= uVar4) goto code_?;
        if ((pGVar5->vector[uVar4] != (GizmoCap3DLookAndFeel *)0x0) &&
           (pGVar6 = (this->fields)._._cap, pGVar6 != (GizmoCap3D *)0x0)) {
          bVar7 = GizmoCap::GizmoCap_get_IsHovered((GizmoCap *)pGVar6,(MethodInfo *)0x0);
          if (bVar7 == 0) {
code_?:
            pCVar8 = (this->fields)._colorTransition;
            if (pCVar8 != (ColorTransition *)0x0) {
              pSVar1 = (this->fields)._._sceneGizmo;
              iVar9 = (pCVar8->fields)._state;
              if (((pSVar1 != (SceneGizmo *)0x0) &&
                  (pGVar10 = (pSVar1->fields)._._gizmo, pGVar10 != (Gizmo *)0x0)) &&
                 (this_00 = (pGVar10->fields)._transform, this_00 != (GizmoTransform *)0x0)) {
                pVVar11 = GizmoTransform::GizmoTransform_GetAxis3D
                                    ((Vector3 *)&stack0xffffffe8,this_00,(this->fields)._axisDesc,
                                     (MethodInfo *)0x0);
                fVar12 = pVVar11->y;
                fVar13 = pVVar11->z;
                v1 = *pVVar11;
                pSVar1 = (this->fields)._._sceneGizmo;
                if (((pSVar1 != (SceneGizmo *)0x0) &&
                    (pRVar14 = (pSVar1->fields)._sceneGizmoCamera,
                    pRVar14 != (RTSceneGizmoCamera *)0x0)) &&
                   (this_01 = (pRVar14->fields)._transform, this_01 != (Transform *)0x0)) {
                  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_forward
                                      ((Vector3 *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
                  fVar15 = pVVar11->x;
                  fVar16 = pVVar11->y;
                  fVar17 = Vector3Ex::Vector3Ex_AbsDot(v1,*pVVar11,(MethodInfo *)0x0);
                  if (_UNK_? < fVar17) {
                    if ((iVar9 == 1) || (iVar9 == 3)) {
code_?:
                      pCVar8 = (this->fields)._colorTransition;
                      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                        ((MethodInfo *)0x0);
                      if (pCVar8 != (ColorTransition *)0x0) {
                        ColorTransition::ColorTransition_Update(pCVar8,fVar12,(MethodInfo *)0x0);
                        pGVar6 = (this->fields)._._cap;
                        if ((pGVar6 != (GizmoCap3D *)0x0) &&
                           (pGVar18 = (pGVar6->fields)._overrideColor,
                           pGVar18 != (GizmoOverrideColor *)0x0)) {
                          (pGVar18->fields)._isActive = 1;
                          pGVar6 = (this->fields)._._cap;
                          if ((pGVar6 != (GizmoCap3D *)0x0) &&
                             (pCVar19 = (this->fields)._color, pCVar19 != (ColorRef *)0x0)) {
                            fVar12 = (pCVar19->fields)._value.g;
                            fVar13 = (pCVar19->fields)._value.b;
                            fVar15 = (pCVar19->fields)._value.a;
                            pGVar18 = (pGVar6->fields)._overrideColor;
                            if (pGVar18 != (GizmoOverrideColor *)0x0) {
                              (pGVar18->fields)._color.r = (pCVar19->fields)._value.r;
                              (pGVar18->fields)._color.g = fVar12;
                              (pGVar18->fields)._color.b = fVar13;
                              (pGVar18->fields)._color.a = fVar15;
                              return;
                            }
                          }
                        }
                      }
                    }
                    else {
                      pCVar8 = (this->fields)._colorTransition;
                      if (pCVar8 != (ColorTransition *)0x0) {
                        ColorTransition::ColorTransition_set_DurationInSeconds
                                  (pCVar8,0.2,(MethodInfo *)0x0);
                        pCVar8 = (this->fields)._colorTransition;
                        color.g = fVar13;
                        color.r = fVar12;
                        color.b = fVar15;
                        color.a = fVar16;
                        pCVar20 = ColorEx::ColorEx_KeepAllButAlpha
                                            ((Color *)&stack0xffffffd8,color,0.0,(MethodInfo *)0x0);
                        fVar12 = pCVar20->g;
                        fVar13 = pCVar20->b;
                        fVar15 = pCVar20->a;
                        if (pCVar8 != (ColorTransition *)0x0) {
                          (pCVar8->fields)._fadeOutColor.r = pCVar20->r;
                          (pCVar8->fields)._fadeOutColor.g = fVar12;
                          (pCVar8->fields)._fadeOutColor.b = fVar13;
                          (pCVar8->fields)._fadeOutColor.a = fVar15;
                          pCVar8 = (this->fields)._colorTransition;
                          if (pCVar8 != (ColorTransition *)0x0) {
                            ColorTransition::ColorTransition_BeginFadeOut
                                      (pCVar8,1,(MethodInfo *)0x0);
                            goto code_?;
                          }
                        }
                      }
                    }
                  }
                  else if (((iVar9 == 2) || (iVar9 == 0)) || (iVar9 == 4)) {
                    pCVar19 = (this->fields)._color;
                    if (pCVar19 != (ColorRef *)0x0) {
                      (pCVar19->fields)._value.r = fVar12;
                      (pCVar19->fields)._value.g = fVar13;
                      (pCVar19->fields)._value.b = fVar15;
                      (pCVar19->fields)._value.a = fVar16;
                      goto code_?;
                    }
                  }
                  else {
                    pCVar8 = (this->fields)._colorTransition;
                    if (pCVar8 != (ColorTransition *)0x0) {
                      ColorTransition::ColorTransition_set_DurationInSeconds
                                (pCVar8,0.2,(MethodInfo *)0x0);
                      pCVar8 = (this->fields)._colorTransition;
                      if (pCVar8 != (ColorTransition *)0x0) {
                        (pCVar8->fields)._fadeInColor.r = fVar12;
                        (pCVar8->fields)._fadeInColor.g = fVar13;
                        (pCVar8->fields)._fadeInColor.b = fVar15;
                        (pCVar8->fields)._fadeInColor.a = fVar16;
                        pCVar8 = (this->fields)._colorTransition;
                        if (pCVar8 != (ColorTransition *)0x0) {
                          ColorTransition::ColorTransition_BeginFadeIn(pCVar8,1,(MethodInfo *)0x0);
                          goto code_?;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pGVar5 = (pSVar2->fields)._axesCapsLookAndFeel;
            if (pGVar5 != (GizmoCap3DLookAndFeel__Array *)0x0) {
              if (pGVar5->max_length == 0) goto code_?;
              if (pGVar5->vector[0] != (GizmoCap3DLookAndFeel *)0x0) goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void UpdateHoverPermission() */

void Assembly-CSharp.dll::RTG::SceneGizmoAxisCap::SceneGizmoAxisCap_UpdateHoverPermission
               (SceneGizmoAxisCap *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._colorTransition;
  if (pCVar1 != (ColorTransition *)0x0) {
    if (((pCVar1->fields)._isActive == 0) && ((pCVar1->fields)._state != 1)) {
      pGVar2 = (this->fields)._._cap;
      if (pGVar2 != (GizmoCap3D *)0x0) {
        GizmoCap::GizmoCap_SetHoverable((GizmoCap *)pGVar2,1,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pGVar2 = (this->fields)._._cap;
      if (pGVar2 != (GizmoCap3D *)0x0) {
        GizmoCap::GizmoCap_SetHoverable((GizmoCap *)pGVar2,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateTransform(Camera) */

void Assembly-CSharp.dll::RTG::SceneGizmoAxisCap::SceneGizmoAxisCap_UpdateTransform
               (SceneGizmoAxisCap *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._._sceneGizmo;
  if ((pSVar1 != (SceneGizmo *)0x0) &&
     (pRVar2 = (pSVar1->fields)._sceneGizmoCamera, pRVar2 != (RTSceneGizmoCamera *)0x0)) {
    pVVar3 = &(pRVar2->fields)._lookAtPoint;
    uStack_4._0_4_ = pVVar3->x;
    uStack_4._4_4_ = pVVar3->y;
    pGVar5 = (pSVar1->fields)._._gizmo;
    fVar6 = (pRVar2->fields)._lookAtPoint.z;
    VVar7 = *pVVar3;
    if ((pGVar5 != (Gizmo *)0x0) &&
       (pGVar8 = (pGVar5->fields)._transform, pGVar8 != (GizmoTransform *)0x0)) {
      pVVar3 = GizmoTransform::GizmoTransform_GetAxis3D
                          (&VStack_9,pGVar8,(this->fields)._axisDesc,(MethodInfo *)0x0);
      pGVar8 = (this->fields)._zoomFactorTransform;
      ppSStack_10 = (SceneGizmoLookAndFeel__Class **)pVVar3->z;
      if (pGVar8 != (GizmoTransform *)0x0) {
        GizmoTransform::GizmoTransform_set_Position3D(pGVar8,VVar7,(MethodInfo *)0x0);
        pGVar11 = (this->fields)._._cap;
        if (pGVar11 != (GizmoCap3D *)0x0) {
          uVar12 = ZEXT48(camera);
          fVar13 = GizmoCap3D::GizmoCap3D_GetZoomFactor(pGVar11,camera,(MethodInfo *)0x0);
          pSVar1 = (this->fields)._._sceneGizmo;
          if ((pSVar1 != (SceneGizmo *)0x0) &&
             (((pSVar14 = (pSVar1->fields)._sharedLookAndFeel,
               pSVar14 != (SceneGizmoLookAndFeel *)0x0 ||
               (pSVar14 = (pSVar1->fields)._lookAndFeel, pSVar14 != (SceneGizmoLookAndFeel *)0x0))
              && (pGVar15 = (pSVar14->fields)._midCapLookAndFeel,
                 pGVar15 != (GizmoCap3DLookAndFeel *)0x0)))) {
            pSVar14 = (pSVar1->fields)._sharedLookAndFeel;
            if ((pGVar15->fields)._capType == 2) {
              if ((pSVar14 == (SceneGizmoLookAndFeel *)0x0) &&
                 (pSVar14 = (pSVar1->fields)._lookAndFeel, pSVar14 == (SceneGizmoLookAndFeel *)0x0))
              goto code_?;
              if (cRam_? == '\0') {
                ppSStack_10 = &TypeInfo__RTG__SceneGizmoLookAndFeel;
                uStack_4 = CONCAT44(&UNK_?,(undefined4)uStack_4);
                func_?();
                cRam_? = '\x01';
              }
              fVar16 = (pSVar14->fields)._screenSize;
              VStack_9.z = fVar16;
              if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__RTG__SceneGizmoLookAndFeel);
              }
              fVar16 = VStack_9.z * _UNK_? *
                       TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_invBaseScreenSize;
            }
            else {
              if ((pSVar14 == (SceneGizmoLookAndFeel *)0x0) &&
                 (pSVar14 = (pSVar1->fields)._lookAndFeel, pSVar14 == (SceneGizmoLookAndFeel *)0x0))
              goto code_?;
              if (cRam_? == '\0') {
                ppSStack_10 = &TypeInfo__RTG__SceneGizmoLookAndFeel;
                uStack_4 = CONCAT44(&UNK_?,(undefined4)uStack_4);
                func_?();
                cRam_? = '\x01';
              }
              fVar16 = (pSVar14->fields)._screenSize;
              VStack_9.z = fVar16;
              if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__RTG__SceneGizmoLookAndFeel);
              }
              fVar16 = VStack_9.z * _UNK_? *
                       TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->_invBaseScreenSize;
              fVar16 = fVar16 + fVar16;
            }
            pVVar3 = Vector3Ex::Vector3Ex_FromValue
                                ((Vector3 *)&fStack_17,fVar16 * fVar13,(MethodInfo *)0x0);
            VStack_9.y = pVVar3->x;
            VStack_9.z = pVVar3->y;
            fVar13 = pVVar3->z;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Quaternion);
              cRam_? = '\x01';
            }
            boxFace = (this->fields)._midAxisBoxFace;
            pQVar18 = TypeInfo__UnityEngine__Quaternion->static_fields;
            fVar16 = (pQVar18->identityQuaternion).x;
            fStack_17 = (pQVar18->identityQuaternion).y;
            puStack_19 = (undefined *)(pQVar18->identityQuaternion).z;
            fVar20 = (pQVar18->identityQuaternion).w;
            if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__RTG__BoxMath);
            }
            VVar7.z = fVar6;
            VVar7.x = (float)(undefined4)uStack_4;
            VVar7.y = (float)uStack_4._4_4_;
            boxSize.z = fVar13;
            boxSize.x = VStack_9.y;
            boxSize.y = VStack_9.z;
            boxRotation.y = fStack_17;
            boxRotation.x = fVar16;
            boxRotation.z = (float)puStack_19;
            boxRotation.w = fVar20;
            pVVar3 = BoxMath::BoxMath_CalcBoxFaceCenter
                                ((Vector3 *)&fStack_17,VVar7,boxSize,boxRotation,boxFace,
                                 (MethodInfo *)0x0);
            pGVar11 = (this->fields)._._cap;
            if (pGVar11 != (GizmoCap3D *)0x0) {
              sliderDirection.z = (float)ppSStack_10;
              sliderDirection.x = (float)(int)uVar12;
              sliderDirection.y = (float)(int)(uVar12 >> 0x20);
              GizmoCap3D::GizmoCap3D_CapSlider3DInvert
                        (pGVar11,sliderDirection,*pVVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* SceneGizmoAxisCap(SceneGizmo, Int32, AxisDescriptor) */

void Assembly-CSharp.dll::RTG::SceneGizmoAxisCap::SceneGizmoAxisCap__ctor
               (SceneGizmoAxisCap *this,SceneGizmo *sceneGizmo,int32_t id,
               AxisDescriptor *gizmoAxisDesc,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ColorRef);
    func_?(&TypeInfo__RTG__ColorTransition);
    func_?(&TypeInfo__RTG__GizmoPreHandlePickedHandler);
    func_?(&TypeInfo__RTG__GizmoPreUpdateBeginHandler);
    func_?(&TypeInfo__RTG__GizmoTransform);
    func_?(&MethodInfo__RTG__SceneGizmoAxisCap__OnGizmoHandlePicked_RTG__Gizmo__int_);
    func_?(&MethodInfo__RTG__SceneGizmoAxisCap__OnGizmoPreUpdateBegin_RTG__Gizmo_);
    func_?(&MethodInfo__RTG__Singleton<RTG::TexturePool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::TexturePool>);
    cRam_? = '\x01';
  }
  this_00 = (GizmoTransform *)func_?(TypeInfo__RTG__GizmoTransform);
  GizmoTransform::GizmoTransform__ctor(this_00,(MethodInfo *)0x0);
  ppGVar1 = &(this->fields)._zoomFactorTransform;
  *ppGVar1 = this_00;
  func_?(ppGVar1,this_00);
  pCVar2 = (ColorRef *)func_?(TypeInfo__RTG__ColorRef);
  ColorRef::ColorRef__ctor(pCVar2,(MethodInfo *)0x0);
  ppCVar3 = &(this->fields)._color;
  *ppCVar3 = pCVar2;
  func_?(ppCVar3,pCVar2);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)this);
  (this->fields)._._sceneGizmo = sceneGizmo;
  func_?(&this->fields);
  if (sceneGizmo != (SceneGizmo *)0x0) {
    pGVar4 = (sceneGizmo->fields)._._gizmo;
    pGVar5 = (GizmoCap3D *)func_?();
    GizmoCap3D::GizmoCap3D__ctor(pGVar5,pGVar4,id,(MethodInfo *)0x0);
    ppGVar6 = &(this->fields)._._cap;
    *ppGVar6 = pGVar5;
    func_?(ppGVar6);
    ppAVar7 = &(this->fields)._axisDesc;
    *ppAVar7 = gizmoAxisDesc;
    func_?(ppAVar7,gizmoAxisDesc);
    if (*ppAVar7 != (AxisDescriptor *)0x0) {
      BVar8 = AxisDescriptor::AxisDescriptor_GetAssociatedBoxFace(*ppAVar7,(MethodInfo *)0x0);
      (this->fields)._midAxisBoxFace = BVar8;
      if (*ppGVar6 != (GizmoCap3D *)0x0) {
        GizmoCap3D::GizmoCap3D_SetZoomFactorTransform
                  (*ppGVar6,(this->fields)._zoomFactorTransform,(MethodInfo *)0x0);
        if ((RegexParser *)*ppAVar7 != (RegexParser *)0x0) {
          bVar9 = System.dll::System::Text::RegularExpressions::RegexParser::RegexParser_EmptyStack
                             ((RegexParser *)*ppAVar7,(MethodInfo *)0x0);
          if (bVar9 == 0) {
code_?:
            pCVar2 = (this->fields)._color;
            this_01 = (ColorTransition *)func_?();
            ColorTransition::ColorTransition__ctor(this_01,pCVar2,(MethodInfo *)0x0);
            (this->fields)._colorTransition = this_01;
            func_?();
            pGVar5 = (this->fields)._._cap;
            if (pGVar5 != (GizmoCap3D *)0x0) {
              pGVar4 = (pGVar5->fields)._._gizmo;
              value = (GizmoPreUpdateBeginHandler *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
              VideoCapture+OnVideoCaptureResourceCreatedCallback::
              VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                        ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value,(Object *)this,
                         MethodInfo__RTG__SceneGizmoAxisCap__OnGizmoPreUpdateBegin_RTG__Gizmo_,
                         (MethodInfo *)0x0);
              if (pGVar4 != (Gizmo *)0x0) {
                Gizmo::Gizmo_add_PreUpdateBegin(pGVar4,value,(MethodInfo *)0x0);
                pGVar5 = (this->fields)._._cap;
                if (pGVar5 != (GizmoCap3D *)0x0) {
                  pGVar4 = (pGVar5->fields)._._gizmo;
                  value_00 = (GizmoPreHandlePickedHandler *)func_?();
                  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                            ((EventHandler_1_Object_ *)value_00,(Object *)this,
                             MethodInfo__RTG__SceneGizmoAxisCap__OnGizmoHandlePicked_RTG__Gizmo__int_
                             ,(MethodInfo *)0x0);
                  if (pGVar4 != (Gizmo *)0x0) {
                    Gizmo::Gizmo_add_PreHandlePicked(pGVar4,value_00,(MethodInfo *)0x0);
                    pSVar10 = (this->fields)._._sceneGizmo;
                    if (pSVar10 != (SceneGizmo *)0x0) {
                      pSVar11 = (pSVar10->fields)._sharedLookAndFeel;
                      if (pSVar11 == (SceneGizmoLookAndFeel *)0x0) {
                        pSVar11 = (pSVar10->fields)._lookAndFeel;
                      }
                      pAVar12 = (this->fields)._axisDesc;
                      if ((pAVar12 != (AxisDescriptor *)0x0) &&
                         (pSVar11 != (SceneGizmoLookAndFeel *)0x0)) {
                        pGVar5 = (this->fields)._._cap;
                        uVar13 = (pAVar12->fields)._index;
                        pGVar14 = (pSVar11->fields)._axesCapsLookAndFeel;
                        if ((pAVar12->fields)._sign == 0) {
                          if (pGVar14 != (GizmoCap3DLookAndFeel__Array *)0x0) {
                            if (pGVar14->max_length <= uVar13) goto code_?;
                            goto code_?;
                          }
                        }
                        else if (pGVar14 != (GizmoCap3DLookAndFeel__Array *)0x0) {
                          uVar13 = uVar13 + 3;
                          if (pGVar14->max_length <= uVar13) goto code_?;
code_?:
                          if (pGVar5 != (GizmoCap3D *)0x0) {
                            (pGVar5->fields)._sharedLookAndFeel = pGVar14->vector[uVar13];
                            func_?();
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
          else {
            pAVar12 = *ppAVar7;
            if (pAVar12 != (AxisDescriptor *)0x0) {
              if ((pAVar12->fields)._index == 0) {
                if ((TypeInfo__RTG__Singleton<RTG::TexturePool>->_1).cctor_finished_or_no_cctor == 0
                   ) {
                  func_?();
                }
                pTVar15 = (TexturePool *)
                          Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                    (MethodInfo__RTG__Singleton<RTG::TexturePool>__get_Get__);
                if (pTVar15 != (TexturePool *)0x0) {
                  pTVar16 = TexturePool::TexturePool_get_XAxisLabel(pTVar15,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
              else if ((pAVar12->fields)._index == 1) {
                if ((TypeInfo__RTG__Singleton<RTG::TexturePool>->_1).cctor_finished_or_no_cctor == 0
                   ) {
                  func_?();
                }
                pTVar15 = (TexturePool *)
                          Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                    (MethodInfo__RTG__Singleton<RTG::TexturePool>__get_Get__);
                if (pTVar15 != (TexturePool *)0x0) {
                  pTVar16 = TexturePool::TexturePool_get_YAxisLabel(pTVar15,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
              else {
                if ((TypeInfo__RTG__Singleton<RTG::TexturePool>->_1).cctor_finished_or_no_cctor == 0
                   ) {
                  func_?();
                }
                pTVar15 = (TexturePool *)
                          Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                    (MethodInfo__RTG__Singleton<RTG::TexturePool>__get_Get__);
                if (pTVar15 != (TexturePool *)0x0) {
                  pTVar16 = TexturePool::TexturePool_get_ZAxisLabel(pTVar15,(MethodInfo *)0x0);
code_?:
                  (this->fields)._labelTexture = pTVar16;
                  func_?();
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
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

