
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
      uVar6 = pVVar4->x;
      uVar7 = pVVar4->y;
      fStack_8 = (float)((uint)pVVar4->z ^
                        __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      uStack_9 = CONCAT44(uVar7 ^ 
                           __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field,
                           uVar6 ^ 
                           __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field)
      ;
      if (cRam_? == '\0') {
        uStack_9 = CONCAT44(uVar7 ^ 
                             __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                             ,&TypeInfo__UnityEngine__Vector3);
        VStack_5.z = (float)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      forward.z = fStack_8;
      forward.x = (float)(undefined4)uStack_9;
      forward.y = (float)uStack_9._4_4_;
      pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                         ((Quaternion *)&stack0xffffffe0,forward,
                          TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0)
      ;
      fVar11 = pQVar10->x;
      VStack_5.x = pQVar10->y;
      VStack_5.y = pQVar10->z;
      VStack_5.z = pQVar10->w;
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
      }
      this_02 = (RTFocusCamera *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
      if (this_02 != (RTFocusCamera *)0x0) {
        targetRotation.y = VStack_5.x;
        targetRotation.x = fVar11;
        targetRotation.z = VStack_5.y;
        targetRotation.w = VStack_5.z;
        RTFocusCamera::RTFocusCamera_PerformRotationSwitch(this_02,targetRotation,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnGizmoPreUpdateBegin(Gizmo) */

void Assembly-CSharp.dll::RTG::SceneGizmoAxisCap::SceneGizmoAxisCap_OnGizmoPreUpdateBegin
               (SceneGizmoAxisCap *this,Gizmo *gizmo,MethodInfo *method)

{
  this_00 = this;
  pSVar1 = (this->fields)._._sceneGizmo;
  if (pSVar1 != (SceneGizmo *)0x0) {
    if ((pSVar1->fields)._sharedLookAndFeel == (SceneGizmoLookAndFeel *)0x0) {
      pSVar2 = (pSVar1->fields)._lookAndFeel;
    }
    else {
      pSVar2 = (pSVar1->fields)._sharedLookAndFeel;
    }
    pAVar3 = (this->fields)._axisDesc;
    if ((pAVar3 != (AxisDescriptor *)0x0) && (pSVar2 != (SceneGizmoLookAndFeel *)0x0)) {
      pGVar4 = (this->fields)._._cap;
      uVar5 = (pAVar3->fields)._index;
      pGVar6 = (pSVar2->fields)._axesCapsLookAndFeel;
      if ((pAVar3->fields)._sign == 0) {
        if (pGVar6 != (GizmoCap3DLookAndFeel__Array *)0x0) {
          if (pGVar6->max_length <= uVar5) goto code_?;
          goto code_?;
        }
      }
      else if (pGVar6 != (GizmoCap3DLookAndFeel__Array *)0x0) {
        uVar5 = uVar5 + 3;
        if (pGVar6->max_length <= uVar5) goto code_?;
code_?:
        pGVar7 = pGVar6->vector[uVar5];
        if (pGVar4 != (GizmoCap3D *)0x0) {
          (pGVar4->fields)._sharedLookAndFeel = pGVar7;
          func_?(&(pGVar4->fields)._sharedLookAndFeel,pGVar7);
          SceneGizmoAxisCap_UpdateColor(this,(MethodInfo *)0x0);
          pCVar8 = (this->fields)._colorTransition;
          if (pCVar8 != (ColorTransition *)0x0) {
            if (((pCVar8->fields)._isActive == 0) && ((pCVar8->fields)._state != 1)) {
              pGVar4 = (this->fields)._._cap;
              if (pGVar4 != (GizmoCap3D *)0x0) {
                this._0_1_ = 1;
code_?:
                GizmoCap::GizmoCap_SetHoverable((GizmoCap *)pGVar4,(bool)this,(MethodInfo *)0x0);
                if (gizmo != (Gizmo *)0x0) {
                  camera = Gizmo::Gizmo_get_FocusCamera(gizmo,(MethodInfo *)0x0);
                  SceneGizmoAxisCap_UpdateTransform(this_00,camera,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            else {
              pGVar4 = (this->fields)._._cap;
              if (pGVar4 != (GizmoCap3D *)0x0) {
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Render(Camera) */

void Assembly-CSharp.dll::RTG::SceneGizmoAxisCap::SceneGizmoAxisCap_Render
               (SceneGizmoAxisCap *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLabelMaterial>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLabelMaterial>);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._._sceneGizmo;
  if (pSVar1 != (SceneGizmo *)0x0) {
    if ((pSVar1->fields)._sharedLookAndFeel == (SceneGizmoLookAndFeel *)0x0) {
      pSStack_2 = (pSVar1->fields)._lookAndFeel;
      pSVar1 = (this->fields)._._sceneGizmo;
    }
    else {
      pSStack_2 = (pSVar1->fields)._sharedLookAndFeel;
    }
    pGVar3 = (this->fields)._._cap;
    pRStack_4 = (pSVar1->fields)._sceneGizmoCamera;
    if (pGVar3 != (GizmoCap3D *)0x0) {
      (*(code *)(pGVar3->klass->vtable).Render_1.method)
                (pGVar3,camera,(pGVar3->klass->vtable).OnVisibilityStateChanged.methodPtr);
      this_00 = (RegexParser *)(this->fields)._axisDesc;
      if (this_00 != (RegexParser *)0x0) {
        bVar5 = System.dll::System::Text::RegularExpressions::RegexParser::RegexParser_EmptyStack
                           (this_00,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          return;
        }
        if ((TypeInfo__RTG__Singleton<RTG::GizmoLabelMaterial>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?(TypeInfo__RTG__Singleton<RTG::GizmoLabelMaterial>);
        }
        this_02 = (GizmoLabelMaterial *)
                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                            (MethodInfo__RTG__Singleton<RTG::GizmoLabelMaterial>__get_Get__);
        if (this_02 != (GizmoLabelMaterial *)0x0) {
          if (cRam_? == '\0') {
            func_?(&StringLiteral__ZWrite);
            cRam_? = '\x01';
          }
          pMVar6 = GizmoLabelMaterial::GizmoLabelMaterial_get_Material(this_02,(MethodInfo *)0x0);
          if (pMVar6 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                      (pMVar6,StringLiteral__ZWrite,0,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&StringLiteral__ZTest);
              cRam_? = '\x01';
            }
            pMVar6 = GizmoLabelMaterial::GizmoLabelMaterial_get_Material(this_02,(MethodInfo *)0x0)
            ;
            if (((pMVar6 != (Material *)0x0) &&
                (UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                           (pMVar6,StringLiteral__ZTest,4,(MethodInfo *)0x0),
                pSStack_2 != (SceneGizmoLookAndFeel *)0x0)) &&
               (pCVar7 = (this->fields)._color, pCVar7 != (ColorRef *)0x0)) {
              pCVar8 = ColorEx::ColorEx_KeepAllButAlpha
                                  (&CStack_9,(pSStack_2->fields)._axesLabelTint,
                                   (pCVar7->fields)._value.a,(MethodInfo *)0x0);
              VStack_10.x = pCVar8->r;
              VStack_10.y = pCVar8->g;
              VStack_10.z = pCVar8->b;
              fStack_11 = pCVar8->a;
              if (cRam_? == '\0') {
                func_?(&StringLiteral__Color);
                cRam_? = '\x01';
              }
              pMVar6 = GizmoLabelMaterial::GizmoLabelMaterial_get_Material
                                  (this_02,(MethodInfo *)0x0);
              if (pMVar6 != (Material *)0x0) {
                value.y = VStack_10.y;
                value.x = VStack_10.x;
                value.z = VStack_10.z;
                value.w = fStack_11;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                          (pMVar6,StringLiteral__Color,value,(MethodInfo *)0x0);
                pTStack_12 = (this->fields)._labelTexture;
                if (cRam_? == '\0') {
                  func_?(&StringLiteral__MainTex);
                  cRam_? = '\x01';
                }
                pMVar6 = GizmoLabelMaterial::GizmoLabelMaterial_get_Material
                                    (this_02,(MethodInfo *)0x0);
                if (pMVar6 != (Material *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
                            (pMVar6,StringLiteral__MainTex,(Texture *)pTStack_12,(MethodInfo *)0x0)
                  ;
                  pMVar6 = GizmoLabelMaterial::GizmoLabelMaterial_get_Material
                                      (this_02,(MethodInfo *)0x0);
                  if (pMVar6 != (Material *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                              (pMVar6,0,(MethodInfo *)0x0);
                    pSVar1 = (this->fields)._._sceneGizmo;
                    if (((pSVar1 != (SceneGizmo *)0x0) &&
                        (pGVar13 = (pSVar1->fields)._._gizmo, pGVar13 != (Gizmo *)0x0)) &&
                       (this_01 = (pGVar13->fields)._transform, this_01 != (GizmoTransform *)0x0)) {
                      pVVar14 = GizmoTransform::GizmoTransform_GetAxis3D
                                          (&VStack_15,this_01,(this->fields)._axisDesc,
                                           (MethodInfo *)0x0);
                      pRVar16 = pRStack_4;
                      uStack_17._0_4_ = pVVar14->x;
                      uStack_17._4_4_ = pVVar14->y;
                      fStack_18 = pVVar14->z;
                      uStack_19 = CONCAT44(fStack_18,(float)uStack_19);
                      uStack_20 = uStack_17;
                      if (pRStack_4 != (RTSceneGizmoCamera *)0x0) {
                        pCStack_21 = (pRStack_4->fields)._camera;
                        pGVar3 = (this->fields)._._cap;
                        if (pGVar3 != (GizmoCap3D *)0x0) {
                          pVVar14 = GizmoCap3D::GizmoCap3D_get_Position
                                              (&VStack_15,pGVar3,(MethodInfo *)0x0);
                          VStack_22.x = pVVar14->x;
                          VStack_22.y = pVVar14->y;
                          pRStack_4 = (RTSceneGizmoCamera *)pVVar14->z;
                          if (cRam_? == '\0') {
                            func_?(&TypeInfo__RTG__CameraEx);
                            cRam_? = '\x01';
                          }
                          if (cRam_? == '\0') {
                            func_?(&TypeInfo__RTG__SceneGizmoLookAndFeel);
                            cRam_? = '\x01';
                          }
                          pTStack_12 = (Texture2D *)(pSStack_2->fields)._screenSize;
                          if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).cctor_finished_or_no_cctor
                              == 0) {
                            func_?(TypeInfo__RTG__SceneGizmoLookAndFeel);
                          }
                          pTStack_12 = (Texture2D *)
                                       ((float)pTStack_12 * _UNK_? *
                                       TypeInfo__RTG__SceneGizmoLookAndFeel->static_fields->
                                       _invBaseScreenSize);
                          if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__RTG__CameraEx);
                          }
                          worldPos.z = (float)pRStack_4;
                          worldPos.x = VStack_22.x;
                          worldPos.y = VStack_22.y;
                          pCStack_21 = (Camera *)
                                       CameraEx::CameraEx_ScreenToEstimatedWorldSize
                                                 (pCStack_21,worldPos,(float)pTStack_12,
                                                  (MethodInfo *)0x0);
                          pVVar14 = Vector3Ex::Vector3Ex_FromValue
                                              (&VStack_22,(float)pCStack_21,(MethodInfo *)0x0);
                          uVar23._0_4_ = pVVar14->x;
                          uVar23._4_4_ = pVVar14->y;
                          VStack_22.z = pVVar14->z;
                          pGVar3 = (this->fields)._._cap;
                          VStack_15._4_8_ = uVar23;
                          if (pGVar3 != (GizmoCap3D *)0x0) {
                            pVVar14 = GizmoCap3D::GizmoCap3D_get_Position
                                                (&VStack_10,pGVar3,(MethodInfo *)0x0);
                            uVar24 = pVVar14->x;
                            uVar25 = pVVar14->y;
                            pCStack_21 = (Camera *)pVVar14->z;
                            fVar26 = VStack_15.y * _UNK_?;
                            CStack_9.r = (float)uVar24 + (float)uStack_20 * fVar26;
                            fStack_27 = (float)uVar25 + uStack_20._4_4_ * fVar26;
                            VStack_15.z = (float)pCStack_21 + fStack_18 * fVar26;
                            CStack_9.g = 0.0;
                            CStack_9.b = 0.0;
                            CStack_9.a = 0.0;
                            pCVar28 = (pRVar16->fields)._camera;
                            fStack_29 = (float)uVar24;
                            fStack_30 = (float)uVar25;
                            if (pCVar28 != (Camera *)0x0) {
                              position_00.y = fStack_27;
                              position_00.x = CStack_9.r;
                              position_00.z = VStack_15.z;
                              pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                        Camera_WorldToScreenPoint_1
                                                  (&VStack_10,pCVar28,position_00,(MethodInfo *)0x0)
                              ;
                              uStack_20._0_4_ = pVVar14->x;
                              uStack_20._4_4_ = pVVar14->y;
                              fStack_18 = pVVar14->z;
                              pSVar1 = (this->fields)._._sceneGizmo;
                              pCVar28 = (pRVar16->fields)._camera;
                              if (((pSVar1 != (SceneGizmo *)0x0) &&
                                  (pRVar31 = (pSVar1->fields)._sceneGizmoCamera,
                                  pRVar31 != (RTSceneGizmoCamera *)0x0)) &&
                                 (pCVar28 != (Camera *)0x0)) {
                                pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                          Camera_WorldToScreenPoint_1
                                                    (&VStack_10,pCVar28,
                                                     (pRVar31->fields)._lookAtPoint,
                                                     (MethodInfo *)0x0);
                                uVar32 = pVVar14->x;
                                uVar33 = pVVar14->y;
                                fStack_30 = (float)uStack_20 - (float)uVar32;
                                pCStack_21 = (Camera *)(uStack_20._4_4_ - (float)uVar33);
                                fStack_29 = (float)uVar32;
                                pRStack_4 = (RTSceneGizmoCamera *)fStack_30;
                                pTStack_12 = (Texture2D *)pCStack_21;
                                fVar34 = (float10)func_?(&fStack_30,0);
                                pCStack_21 = (Camera *)(float)fVar34;
                                if (_UNK_? < (float)pCStack_21) {
                                  pRStack_4 = (RTSceneGizmoCamera *)
                                               ((float)pRStack_4 / (float)pCStack_21);
                                  pTStack_12 = (Texture2D *)((float)pTStack_12 / (float)pCStack_21);
                                }
                                else {
                                  if (cRam_? == '\0') {
                                    func_?(&TypeInfo__UnityEngine__Vector2);
                                    cRam_? = '\x01';
                                  }
                                  pRStack_4 = (RTSceneGizmoCamera *)
                                               (TypeInfo__UnityEngine__Vector2->static_fields->
                                               zeroVector).x;
                                  pTStack_12 = (Texture2D *)
                                               (TypeInfo__UnityEngine__Vector2->static_fields->
                                               zeroVector).y;
                                }
                                pTVar35 = (pRVar16->fields)._transform;
                                if (pTVar35 != (Transform *)0x0) {
                                  pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_get_forward
                                                      (&VStack_10,pTVar35,(MethodInfo *)0x0);
                                  v2.z = uStack_19._4_4_;
                                  v2.x = (float)(undefined4)uStack_17;
                                  v2.y = (float)uStack_17._4_4_;
                                  fVar26 = Vector3Ex::Vector3Ex_AbsDot
                                                     (*pVVar14,v2,(MethodInfo *)0x0);
                                  uStack_19 = CONCAT44(fVar26,(float)uStack_19);
                                  pCStack_21 = (Camera *)((uint)fVar26 & _UNK_?);
                                  if (cRam_? == '\0') {
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  fVar26 = (pSStack_2->fields)._screenSize;
                                  uStack_19._4_4_ = fVar26;
                                  if ((TypeInfo__RTG__SceneGizmoLookAndFeel->_1).
                                      cctor_finished_or_no_cctor == 0) {
                                    func_?(TypeInfo__RTG__SceneGizmoLookAndFeel);
                                  }
                                  VVar36 = Vector2Ex::Vector2Ex_FromValue
                                                     (uStack_19._4_4_ * _UNK_? *
                                                      TypeInfo__RTG__SceneGizmoLookAndFeel->
                                                      static_fields->_invBaseScreenSize,
                                                      (MethodInfo *)0x0);
                                  uStack_19._4_4_ = VVar36.y;
                                  fVar26 = (float)uStack_19 * (float)pRStack_4 * (float)pCStack_21;
                                  pCStack_21 = (Camera *)
                                               (uStack_20._4_4_ +
                                               uStack_19._4_4_ * (float)pTStack_12 *
                                               (float)pCStack_21);
                                  uStack_19._0_4_ = VVar36.x;
                                  uStack_19 = CONCAT44((float)uStack_20 + fVar26,(float)uStack_19);
                                  pTVar35 = (pRVar16->fields)._transform;
                                  pCVar28 = (pRVar16->fields)._camera;
                                  if (pTVar35 != (Transform *)0x0) {
                                    pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_get_position
                                                        (&VStack_10,pTVar35,(MethodInfo *)0x0);
                                    uVar37 = pVVar14->x;
                                    uVar38 = pVVar14->y;
                                    fStack_18 = pVVar14->z;
                                    fStack_39 = VStack_15.z - fStack_18;
                                    VStack_15.y = CStack_9.r - (float)uVar37;
                                    VStack_15.z = fStack_27 - (float)uVar38;
                                    uStack_20 = CONCAT44(pCStack_21,uStack_19._4_4_);
                                    fVar34 = (float10)func_?(&VStack_15.y,0);
                                    fStack_18 = (float)fVar34;
                                    if (pCVar28 != (Camera *)0x0) {
                                      position.z = fStack_18;
                                      position.x = (float)uStack_20;
                                      position.y = uStack_20._4_4_;
                                      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                                Camera_ScreenToWorldPoint_1
                                                          (&VStack_10,pCVar28,position,
                                                           (MethodInfo *)0x0);
                                      uStack_19._0_4_ = pVVar14->x;
                                      uStack_19._4_4_ = pVVar14->y;
                                      fStack_27 = pVVar14->z;
                                      pTVar35 = (pRVar16->fields)._transform;
                                      if (pTVar35 != (Transform *)0x0) {
                                        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_get_forward
                                                            (&VStack_10,pTVar35,(MethodInfo *)0x0);
                                        uStack_17._0_4_ = pVVar14->x;
                                        uStack_17._4_4_ = pVVar14->y;
                                        fVar26 = pVVar14->z;
                                        pTVar35 = (pRVar16->fields)._transform;
                                        if (pTVar35 != (Transform *)0x0) {
                                          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_get_up
                                                              (&VStack_10,pTVar35,(MethodInfo *)0x0)
                                          ;
                                          forward.z = fVar26;
                                          forward.x = (float)(undefined4)uStack_17;
                                          forward.y = (float)uStack_17._4_4_;
                                          pQVar40 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Quaternion::Quaternion_LookRotation
                                                              ((Quaternion *)&CStack_9,forward,
                                                               *pVVar14,(MethodInfo *)0x0);
                                          pos.z = fStack_27;
                                          pos.x = (float)uStack_19;
                                          pos.y = uStack_19._4_4_;
                                          s.z = VStack_22.z;
                                          s.x = (float)uVar23;
                                          s.y = uVar23._4_4_;
                                          pMVar41 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Matrix4x4::Matrix4x4_TRS
                                                              ((Matrix4x4 *)&stack0xffffff28,pos,
                                                               *pQVar40,s,(MethodInfo *)0x0);
                                          CStack_9.r = pMVar41->m00;
                                          CStack_9.g = pMVar41->m10;
                                          CStack_9.b = pMVar41->m20;
                                          CStack_9.a = pMVar41->m30;
                                          VStack_10.x = pMVar41->m01;
                                          VStack_10.y = pMVar41->m11;
                                          VStack_10.z = pMVar41->m21;
                                          fStack_11 = pMVar41->m31;
                                          VStack_15.x = pMVar41->m02;
                                          VStack_15.y = pMVar41->m12;
                                          VStack_15.z = pMVar41->m22;
                                          fStack_39 = pMVar41->m32;
                                          fStack_42 = pMVar41->m03;
                                          uStack_20._0_4_ = pMVar41->m13;
                                          uStack_20._4_4_ = pMVar41->m23;
                                          fStack_18 = pMVar41->m33;
                                          if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).
                                              cctor_finished_or_no_cctor == 0) {
                                            func_?(TypeInfo__RTG__Singleton<RTG::MeshPool>)
                                            ;
                                          }
                                          this_03 = (MeshPool *)
                                                    Singleton`1[System::Object]::
                                                    Singleton_1_System_Object__1_get_Get
                                                              (
                                                  MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__
                                                  );
                                          if (this_03 != (MeshPool *)0x0) {
                                            mesh = MeshPool::MeshPool_get_UnitQuadXY
                                                             (this_03,(MethodInfo *)0x0);
                                            if ((TypeInfo__UnityEngine__Graphics->_1).
                                                cctor_finished_or_no_cctor == 0) {
                                              func_?(TypeInfo__UnityEngine__Graphics);
                                            }
                                            matrix.m10 = CStack_9.g;
                                            matrix.m00 = CStack_9.r;
                                            matrix.m20 = CStack_9.b;
                                            matrix.m30 = CStack_9.a;
                                            matrix.m01 = VStack_10.x;
                                            matrix.m11 = VStack_10.y;
                                            matrix.m21 = VStack_10.z;
                                            matrix.m31 = fStack_11;
                                            matrix.m02 = VStack_15.x;
                                            matrix.m12 = VStack_15.y;
                                            matrix.m22 = VStack_15.z;
                                            matrix.m32 = fStack_39;
                                            matrix.m03 = fStack_42;
                                            matrix.m13 = (float)uStack_20;
                                            matrix.m23 = uStack_20._4_4_;
                                            matrix.m33 = fStack_18;
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
  }
  func_?();
  pcVar43 = (code *)swi(3);
  (*pcVar43)();
  return;
}


/* Void UpdateColor() */

void Assembly-CSharp.dll::RTG::SceneGizmoAxisCap::SceneGizmoAxisCap_UpdateColor
               (SceneGizmoAxisCap *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._._sceneGizmo;
  if (pSVar1 != (SceneGizmo *)0x0) {
    if ((pSVar1->fields)._sharedLookAndFeel == (SceneGizmoLookAndFeel *)0x0) {
      pSVar2 = (pSVar1->fields)._lookAndFeel;
    }
    else {
      pSVar2 = (pSVar1->fields)._sharedLookAndFeel;
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
    fVar5 = (pRVar2->fields)._lookAtPoint.z;
    VVar6 = *pVVar3;
    pGVar7 = (((this->fields)._._sceneGizmo)->fields)._._gizmo;
    if ((pGVar7 != (Gizmo *)0x0) &&
       (pGVar8 = (pGVar7->fields)._transform, pGVar8 != (GizmoTransform *)0x0)) {
      pVVar3 = GizmoTransform::GizmoTransform_GetAxis3D
                          (&VStack_9,pGVar8,(this->fields)._axisDesc,(MethodInfo *)0x0);
      pGVar8 = (this->fields)._zoomFactorTransform;
      ppSStack_10 = (SceneGizmoLookAndFeel__Class **)pVVar3->z;
      if (pGVar8 != (GizmoTransform *)0x0) {
        GizmoTransform::GizmoTransform_set_Position3D(pGVar8,VVar6,(MethodInfo *)0x0);
        pGVar11 = (this->fields)._._cap;
        if (pGVar11 != (GizmoCap3D *)0x0) {
          uVar12 = ZEXT48(camera);
          fVar13 = GizmoCap3D::GizmoCap3D_GetZoomFactor(pGVar11,camera,(MethodInfo *)0x0);
          pSVar1 = (this->fields)._._sceneGizmo;
          if (pSVar1 != (SceneGizmo *)0x0) {
            if ((pSVar1->fields)._sharedLookAndFeel == (SceneGizmoLookAndFeel *)0x0) {
              pSVar14 = (pSVar1->fields)._lookAndFeel;
              if (pSVar14 == (SceneGizmoLookAndFeel *)0x0) goto code_?;
            }
            else {
              pSVar14 = (pSVar1->fields)._sharedLookAndFeel;
            }
            pGVar15 = (pSVar14->fields)._midCapLookAndFeel;
            if (pGVar15 != (GizmoCap3DLookAndFeel *)0x0) {
              pSVar1 = (this->fields)._._sceneGizmo;
              if ((pGVar15->fields)._capType == 2) {
                if ((pSVar1->fields)._sharedLookAndFeel == (SceneGizmoLookAndFeel *)0x0) {
                  pSVar14 = (pSVar1->fields)._lookAndFeel;
                  if (pSVar14 == (SceneGizmoLookAndFeel *)0x0) goto code_?;
                }
                else {
                  pSVar14 = (pSVar1->fields)._sharedLookAndFeel;
                }
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
                if ((pSVar1->fields)._sharedLookAndFeel == (SceneGizmoLookAndFeel *)0x0) {
                  pSVar14 = (pSVar1->fields)._lookAndFeel;
                  if (pSVar14 == (SceneGizmoLookAndFeel *)0x0) goto code_?;
                }
                else {
                  pSVar14 = (pSVar1->fields)._sharedLookAndFeel;
                }
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
              VVar6.z = fVar5;
              VVar6.x = (float)(undefined4)uStack_4;
              VVar6.y = (float)uStack_4._4_4_;
              boxSize.z = fVar13;
              boxSize.x = VStack_9.y;
              boxSize.y = VStack_9.z;
              boxRotation.y = fStack_17;
              boxRotation.x = fVar16;
              boxRotation.z = (float)puStack_19;
              boxRotation.w = fVar20;
              pVVar3 = BoxMath::BoxMath_CalcBoxFaceCenter
                                  ((Vector3 *)&fStack_17,VVar6,boxSize,boxRotation,boxFace,
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
  this_01 = (GizmoTransform *)func_?(TypeInfo__RTG__GizmoTransform);
  GizmoTransform::GizmoTransform__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._zoomFactorTransform = this_01;
  func_?(&(this->fields)._zoomFactorTransform,this_01);
  pCVar1 = (ColorRef *)func_?(TypeInfo__RTG__ColorRef);
  ColorRef::ColorRef__ctor(pCVar1,(MethodInfo *)0x0);
  (this->fields)._color = pCVar1;
  func_?(&(this->fields)._color,pCVar1);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)this);
  (this->fields)._._sceneGizmo = sceneGizmo;
  func_?(&this->fields);
  if (sceneGizmo != (SceneGizmo *)0x0) {
    pGVar2 = (sceneGizmo->fields)._._gizmo;
    pGVar3 = (GizmoCap3D *)func_?();
    GizmoCap3D::GizmoCap3D__ctor(pGVar3,pGVar2,id,(MethodInfo *)0x0);
    (this->fields)._._cap = pGVar3;
    func_?(&(this->fields)._._cap);
    (this->fields)._axisDesc = gizmoAxisDesc;
    func_?(&(this->fields)._axisDesc,gizmoAxisDesc);
    pAVar4 = (this->fields)._axisDesc;
    if (pAVar4 != (AxisDescriptor *)0x0) {
      BVar5 = AxisDescriptor::AxisDescriptor_GetAssociatedBoxFace(pAVar4,(MethodInfo *)0x0);
      (this->fields)._midAxisBoxFace = BVar5;
      pGVar3 = (this->fields)._._cap;
      if (pGVar3 != (GizmoCap3D *)0x0) {
        GizmoCap3D::GizmoCap3D_SetZoomFactorTransform
                  (pGVar3,(this->fields)._zoomFactorTransform,(MethodInfo *)0x0);
        this_00 = (RegexParser *)(this->fields)._axisDesc;
        if (this_00 != (RegexParser *)0x0) {
          bVar6 = System.dll::System::Text::RegularExpressions::RegexParser::RegexParser_EmptyStack
                            (this_00,(MethodInfo *)0x0);
          if (bVar6 == 0) {
code_?:
            pCVar1 = (this->fields)._color;
            this_02 = (ColorTransition *)func_?();
            ColorTransition::ColorTransition__ctor(this_02,pCVar1,(MethodInfo *)0x0);
            (this->fields)._colorTransition = this_02;
            func_?();
            pGVar3 = (this->fields)._._cap;
            if (pGVar3 != (GizmoCap3D *)0x0) {
              pGVar2 = (pGVar3->fields)._._gizmo;
              value = (GizmoPreUpdateBeginHandler *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
              VideoCapture+OnVideoCaptureResourceCreatedCallback::
              VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                        ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value,(Object *)this,
                         MethodInfo__RTG__SceneGizmoAxisCap__OnGizmoPreUpdateBegin_RTG__Gizmo_,
                         (MethodInfo *)0x0);
              if (pGVar2 != (Gizmo *)0x0) {
                Gizmo::Gizmo_add_PreUpdateBegin(pGVar2,value,(MethodInfo *)0x0);
                pGVar3 = (this->fields)._._cap;
                if (pGVar3 != (GizmoCap3D *)0x0) {
                  pGVar2 = (pGVar3->fields)._._gizmo;
                  value_00 = (GizmoPreHandlePickedHandler *)func_?();
                  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                            ((EventHandler_1_Object_ *)value_00,(Object *)this,
                             MethodInfo__RTG__SceneGizmoAxisCap__OnGizmoHandlePicked_RTG__Gizmo__int_
                             ,(MethodInfo *)0x0);
                  if (pGVar2 != (Gizmo *)0x0) {
                    Gizmo::Gizmo_add_PreHandlePicked(pGVar2,value_00,(MethodInfo *)0x0);
                    pSVar7 = (this->fields)._._sceneGizmo;
                    if (pSVar7 != (SceneGizmo *)0x0) {
                      if ((pSVar7->fields)._sharedLookAndFeel == (SceneGizmoLookAndFeel *)0x0) {
                        pSVar8 = (pSVar7->fields)._lookAndFeel;
                      }
                      else {
                        pSVar8 = (pSVar7->fields)._sharedLookAndFeel;
                      }
                      pAVar4 = (this->fields)._axisDesc;
                      if ((pAVar4 != (AxisDescriptor *)0x0) &&
                         (pSVar8 != (SceneGizmoLookAndFeel *)0x0)) {
                        pGVar3 = (this->fields)._._cap;
                        uVar9 = (pAVar4->fields)._index;
                        pGVar10 = (pSVar8->fields)._axesCapsLookAndFeel;
                        if ((pAVar4->fields)._sign == 0) {
                          if (pGVar10 != (GizmoCap3DLookAndFeel__Array *)0x0) {
                            if (pGVar10->max_length <= uVar9) goto code_?;
                            goto code_?;
                          }
                        }
                        else if (pGVar10 != (GizmoCap3DLookAndFeel__Array *)0x0) {
                          uVar9 = uVar9 + 3;
                          if (pGVar10->max_length <= uVar9) goto code_?;
code_?:
                          if (pGVar3 != (GizmoCap3D *)0x0) {
                            (pGVar3->fields)._sharedLookAndFeel = pGVar10->vector[uVar9];
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
            pAVar4 = (this->fields)._axisDesc;
            if (pAVar4 != (AxisDescriptor *)0x0) {
              if ((pAVar4->fields)._index == 0) {
                if ((TypeInfo__RTG__Singleton<RTG::TexturePool>->_1).cctor_finished_or_no_cctor == 0
                   ) {
                  func_?();
                }
                pTVar11 = (TexturePool *)
                          Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                    (MethodInfo__RTG__Singleton<RTG::TexturePool>__get_Get__);
                if (pTVar11 != (TexturePool *)0x0) {
                  pTVar12 = TexturePool::TexturePool_get_XAxisLabel(pTVar11,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
              else if ((pAVar4->fields)._index == 1) {
                if ((TypeInfo__RTG__Singleton<RTG::TexturePool>->_1).cctor_finished_or_no_cctor == 0
                   ) {
                  func_?();
                }
                pTVar11 = (TexturePool *)
                          Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                    (MethodInfo__RTG__Singleton<RTG::TexturePool>__get_Get__);
                if (pTVar11 != (TexturePool *)0x0) {
                  pTVar12 = TexturePool::TexturePool_get_YAxisLabel(pTVar11,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
              else {
                if ((TypeInfo__RTG__Singleton<RTG::TexturePool>->_1).cctor_finished_or_no_cctor == 0
                   ) {
                  func_?();
                }
                pTVar11 = (TexturePool *)
                          Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                    (MethodInfo__RTG__Singleton<RTG::TexturePool>__get_Get__);
                if (pTVar11 != (TexturePool *)0x0) {
                  pTVar12 = TexturePool::TexturePool_get_ZAxisLabel(pTVar11,(MethodInfo *)0x0);
code_?:
                  (this->fields)._labelTexture = pTVar12;
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
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

