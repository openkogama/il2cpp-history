
/* Void Initialize(Int32, Int32, CameraClearFlags, LayerFlags, Vector3, Transform, Vector3, String,
   MVWorldObjectClient, GameObject) */

void Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer_Initialize
               (InventoryItemPreviewer *this,int32_t textureWidth,int32_t textureHeight,
               CameraClearFlags__Enum clearFlags,LayerFlags__Enum layersToRender,
               Vector3 cameraOffset,Transform *previewItemsRoot,Vector3 previewPosition,String *name
               ,MVWorldObjectClient *wo,GameObject *woGameObjectCopy,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                   );
    func_?(&
                    TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__ContainsKey_MVWorldObjectDocumentationType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__get_Item_MVWorldObjectDocumentationType_
                   );
    func_?(&
                    UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                   );
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    func_?(&
                    SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                   );
    func_?(&TypeInfo__MVMovingPlatformGroup);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_Preview);
    func_?(&StringLiteral__Item_);
    func_?(&StringLiteral__woID_);
    func_?(&StringLiteral_Preview__0__RenderCam);
    func_?(&StringLiteral_Preview_);
    cRam_? = '\x01';
  }
  func_?(&fStack_1,0,0x40);
  pDVar2 = (this->fields).WorldObjectCameraFOVOverload;
  (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  if ((wo != (MVWorldObjectClient *)0x0) &&
     (IVar3 = (*(code *)(wo->klass->vtable).get_DocumentationType.method)
                         (wo,(wo->klass->vtable).TraverseRecursiveTail.methodPtr),
     pDVar2 != (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)0x0)) {
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                       ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar2,IVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__ContainsKey_MVWorldObjectDocumentationType_
                       );
    if (bVar4 != 0) {
      pDVar2 = (this->fields).WorldObjectCameraFOVOverload;
      pCVar5 = (this->fields).previewCam;
      IVar3 = (*(code *)(wo->klass->vtable).get_DocumentationType.method)
                         (wo,(wo->klass->vtable).TraverseRecursiveTail.methodPtr);
      if ((pDVar2 == (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)0x0) ||
         (fVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Single]::Dictionary_2_System_Int32Enum_System_Single__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar2,IVar3,
                              MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__get_Item_MVWorldObjectDocumentationType_
                             ), pCVar5 == (Camera *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                (pCVar5,fVar6,(MethodInfo *)0x0);
    }
    (this->fields).previewCamOffset.x = cameraOffset.x;
    (this->fields).previewCamOffset.y = cameraOffset.y;
    (this->fields).previewCamOffset.z = cameraOffset.z;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar7 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar7,previewItemsRoot,(MethodInfo *)0x0);
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pSVar9 = mscorlib.dll::System::String::String_Format
                          (StringLiteral_Preview__0__RenderCam,(Object *)name,(MethodInfo *)0x0);
      if (pGVar8 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                  ((Object_1 *)pGVar8,pSVar9,(MethodInfo *)0x0);
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        value_02 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Preview,(MethodInfo *)0x0);
        if (pGVar8 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                    (pGVar8,value_02,(MethodInfo *)0x0);
          pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                    RenderTexture_GetTemporary_4
                              (textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
                               RenderTextureReadWrite__Enum_Default,2,(MethodInfo *)0x0);
          (this->fields).previewTexture = pRVar10;
          func_?(&(this->fields).previewTexture,pRVar10);
          pRVar10 = (this->fields).previewTexture;
          if (pRVar10 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                      ((Object_1 *)pRVar10,name,(MethodInfo *)0x0);
            pRVar10 = (this->fields).previewTexture;
            if (pRVar10 != (RenderTexture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                        ((Texture *)pRVar10,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
              pRVar10 = (this->fields).previewTexture;
              if (pRVar10 != (RenderTexture *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                          ((Object_1 *)pRVar10,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
                pCVar5 = (this->fields).previewCam;
                if (pCVar5 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                            (pCVar5,(this->fields).previewTexture,(MethodInfo *)0x0);
                  (this->fields)._PreviewGameObject_k__BackingField = woGameObjectCopy;
                  func_?(&(this->fields)._PreviewGameObject_k__BackingField,
                                  woGameObjectCopy);
                  pGVar8 = (this->fields)._PreviewGameObject_k__BackingField;
                  values = (String__Array *)func_?(TypeInfo__System__String,6);
                  pSVar9 = StringLiteral_Preview_;
                  if (values != (String__Array *)0x0) {
                    if (values->max_length == 0) goto code_?;
                    values->vector[0] = StringLiteral_Preview_;
                    func_?(values->vector,pSVar9);
                    if (values->max_length < 2) goto code_?;
                    values->vector[1] = name;
                    func_?(values->vector + 1,name);
                    pSVar9 = StringLiteral__Item_;
                    if (values->max_length < 3) goto code_?;
                    values->vector[2] = StringLiteral__Item_;
                    func_?(values->vector + 2,pSVar9);
                    IStack_11.m_value = (wo->fields)._.itemId;
                    pSVar9 = mscorlib.dll::System::Int32::Int32_ToString
                                        (&IStack_11,(MethodInfo *)0x0);
                    if (values->max_length < 4) goto code_?;
                    values->vector[3] = pSVar9;
                    func_?(values->vector + 3,pSVar9);
                    pSVar9 = StringLiteral__woID_;
                    if (values->max_length < 5) goto code_?;
                    values->vector[4] = StringLiteral__woID_;
                    func_?(values->vector + 4,pSVar9);
                    IStack_11.m_value = (wo->fields)._.id;
                    pSVar9 = mscorlib.dll::System::Int32::Int32_ToString
                                        (&IStack_11,(MethodInfo *)0x0);
                    if (values->max_length < 6) goto code_?;
                    values->vector[5] = pSVar9;
                    func_?(values->vector + 5,pSVar9);
                    pSVar9 = mscorlib.dll::System::String::String_Concat_6
                                        (values,(MethodInfo *)0x0);
                    if (pGVar8 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                                ((Object_1 *)pGVar8,pSVar9,(MethodInfo *)0x0);
                      pGVar8 = (this->fields)._PreviewGameObject_k__BackingField;
                      if ((pGVar8 != (GameObject *)0x0) &&
                         (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar8,(MethodInfo *)0x0),
                         pTVar7 != (Transform *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                                  (pTVar7,previewItemsRoot,(MethodInfo *)0x0);
                        pGVar8 = (this->fields)._PreviewGameObject_k__BackingField;
                        if (pGVar8 != (GameObject *)0x0) {
                          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar8,(MethodInfo *)0x0);
                          if (cRam_? == '\0') {
                            func_?(&TypeInfo__UnityEngine__Quaternion);
                            cRam_? = '\x01';
                          }
                          if (pTVar7 != (Transform *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_localRotation
                                      (pTVar7,TypeInfo__UnityEngine__Quaternion->static_fields->
                                               identityQuaternion,(MethodInfo *)0x0);
                            pGVar8 = (this->fields)._PreviewGameObject_k__BackingField;
                            if ((pGVar8 != (GameObject *)0x0) &&
                               (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform(pGVar8,(MethodInfo *)0x0),
                               pTVar7 != (Transform *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_position(pTVar7,previewPosition,(MethodInfo *)0x0);
                              pGVar8 = (this->fields)._PreviewGameObject_k__BackingField;
                              if (pGVar8 != (GameObject *)0x0) {
                                pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_GetComponentsInChildren
                                                    (pGVar8,
                                                  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                                                  );
                                IStack_11.m_value = 0;
                                if (pOVar12 != (Object__Array *)0x0) {
                                  for (; IStack_11.m_value < (int)pOVar12->max_length;
                                      IStack_11.m_value = IStack_11.m_value + 1) {
                                    if (pOVar12->max_length <= (uint)IStack_11.m_value)
                                    goto code_?;
                                    pRVar13 = (Renderer *)pOVar12->vector[IStack_11.m_value];
                                    if (pRVar13 == (Renderer *)0x0) goto code_?;
                                    x = (Object_1 *)
                                        UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_GetComponent_1
                                                  ((Component *)pRVar13,
                                                                                                      
                                                  TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                                                  );
                                    if ((TypeInfo__UnityEngine__Object->_1).
                                        cctor_finished_or_no_cctor == 0) {
                                      func_?(TypeInfo__UnityEngine__Object);
                                    }
                                    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                             Object_1_op_Inequality
                                                       (x,(Object_1 *)0x0,(MethodInfo *)0x0);
                                    if (bVar4 != 0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                      Renderer_set_enabled(pRVar13,0,(MethodInfo *)0x0);
                                    }
                                  }
                                  pGVar8 = (this->fields)._PreviewGameObject_k__BackingField;
                                  if (pGVar8 != (GameObject *)0x0) {
                                    pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_GetComponentsInChildren
                                                        (pGVar8,
                                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                                  );
                                    IStack_11.m_value = 0;
                                    if (pOVar12 != (Object__Array *)0x0) {
                                      for (; IStack_11.m_value < (int)pOVar12->max_length;
                                          IStack_11.m_value = IStack_11.m_value + 1) {
                                        if (pOVar12->max_length <= (uint)IStack_11.m_value)
                                        goto code_?;
                                        if (((Component *)pOVar12->vector[IStack_11.m_value] ==
                                             (Component *)0x0) ||
                                           (pRVar13 = (Renderer *)
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_GetComponent_1
                                                                ((Component *)
                                                                 pOVar12->vector[IStack_11.m_value],
                                                                                                                                  
                                                  UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                                                  ), pRVar13 == (Renderer *)0x0))
                                        goto code_?;
                                        UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                        Renderer_set_enabled(pRVar13,0,(MethodInfo *)0x0);
                                      }
                                      pfVar14 = (float *)(*(code *)(wo->klass->vtable).
                                                                   GetLocalBounds.method)
                                                                   (auStack_15,wo,2,
                                                                    (wo->klass->vtable).Select.
                                                                    methodPtr);
                                      fVar6 = *pfVar14;
                                      fVar16 = pfVar14[1];
                                      fVar17 = pfVar14[2];
                                      fVar18 = pfVar14[3];
                                      pGVar8 = (this->fields)._PreviewGameObject_k__BackingField;
                                      fVar19 = (float)*(undefined8 *)(pfVar14 + 4);
                                      fVar20 = (float)((ulonglong)*(undefined8 *)(pfVar14 + 4) >>
                                                      0x20);
                                      if ((pGVar8 != (GameObject *)0x0) &&
                                         (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_get_transform
                                                              (pGVar8,(MethodInfo *)0x0),
                                         pTVar7 != (Transform *)0x0)) {
                                        pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_get_localScale
                                                            (&VStack_22,pTVar7,(MethodInfo *)0x0);
                                        uVar23 = pVVar21->x;
                                        uVar24 = pVVar21->y;
                                        VStack_25.z = pVVar21->z;
                                        VStack_25.x = (float)uVar23;
                                        VStack_25.y = (float)uVar24;
                                        iVar26 = func_?(TypeInfo__System__Single,3);
                                        fVar27 = _UNK_?;
                                        if (iVar26 != 0) {
                                          if (*(int *)(iVar26 + 0xc) == 0) goto code_?;
                                          *(float *)(iVar26 + 0x10) = fVar18 * _UNK_?;
                                          if (*(uint *)(iVar26 + 0xc) < 2) goto code_?;
                                          *(float *)(iVar26 + 0x14) = fVar19 * fVar27;
                                          if (*(uint *)(iVar26 + 0xc) < 3) goto code_?;
                                          *(float *)(iVar26 + 0x18) = fVar20 * fVar27;
                                          uVar28 = *(uint *)(iVar26 + 0xc);
                                          if (uVar28 != 0) {
                                            fVar27 = *(float *)(iVar26 + 0x10);
                                            uVar29 = 1;
                                            if (1 < (int)uVar28) {
                                              pfVar14 = (float *)(iVar26 + 0x14);
                                              do {
                                                if (uVar28 <= uVar29) goto code_?;
                                                if (fVar27 < *pfVar14) {
                                                  fVar27 = *pfVar14;
                                                }
                                                uVar29 = uVar29 + 1;
                                                pfVar14 = pfVar14 + 1;
                                              } while ((int)uVar29 < (int)uVar28);
                                            }
                                          }
                                          iVar26 = func_?(TypeInfo__System__Single,3);
                                          fVar27 = _UNK_?;
                                          if (iVar26 == 0) goto code_?;
                                          if (*(int *)(iVar26 + 0xc) == 0) goto code_?;
                                          fVar19 = fVar19 * _UNK_?;
                                          *(float *)(iVar26 + 0x10) =
                                               VStack_25.x * fVar18 * _UNK_?;
                                          if (*(uint *)(iVar26 + 0xc) < 2) goto code_?;
                                          *(float *)(iVar26 + 0x14) = VStack_25.y * fVar19;
                                          if (*(uint *)(iVar26 + 0xc) < 3) goto code_?;
                                          *(float *)(iVar26 + 0x18) = VStack_25.z * fVar20 * fVar27;
                                          uVar28 = *(uint *)(iVar26 + 0xc);
                                          if (uVar28 == 0) {
                                            fVar18 = 0.0;
                                          }
                                          else {
                                            fVar18 = *(float *)(iVar26 + 0x10);
                                            uVar29 = 1;
                                            if (1 < (int)uVar28) {
                                              pfVar14 = (float *)(iVar26 + 0x14);
                                              do {
                                                if (uVar28 <= uVar29) goto code_?;
                                                if (fVar18 < *pfVar14) {
                                                  fVar18 = *pfVar14;
                                                }
                                                uVar29 = uVar29 + 1;
                                                pfVar14 = pfVar14 + 1;
                                              } while ((int)uVar29 < (int)uVar28);
                                            }
                                          }
                                          fVar27 = fVar27 / fVar18;
                                          if (((wo->klass->_1).naturalAligment <
                                               (TypeInfo__MVMovingPlatformGroup->_1).naturalAligment
                                              ) || ((MVMovingPlatformGroup__Class *)
                                                    (wo->klass->_1).typeHierarchy
                                                    [(TypeInfo__MVMovingPlatformGroup->_1).
                                                     naturalAligment - 1] !=
                                                    TypeInfo__MVMovingPlatformGroup)) {
code_?:
                                            pGVar8 = (this->fields).
                                                      _PreviewGameObject_k__BackingField;
                                            if (pGVar8 != (GameObject *)0x0) {
                                              pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::GameObject_get_transform
                                                                  (pGVar8,(MethodInfo *)0x0);
                                              uStack_30 = CONCAT44(VStack_25.y * fVar27,
                                                                   VStack_25.x * fVar27);
                                              fStack_31 = VStack_25.z * fVar27;
                                              if (pTVar7 != (Transform *)0x0) {
                                                value.y = VStack_25.y * fVar27;
                                                value.x = VStack_25.x * fVar27;
                                                value.z = fStack_31;
                                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                                Transform_set_localScale
                                                          (pTVar7,value,(MethodInfo *)0x0);
                                                fVar6 = fVar6 * VStack_25.x;
                                                fVar16 = fVar16 * VStack_25.y;
                                                fVar17 = fVar17 * VStack_25.z;
                                                pGVar8 = (this->fields).
                                                          _PreviewGameObject_k__BackingField;
                                                if ((pGVar8 != (GameObject *)0x0) &&
                                                   (pTVar7 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar8,(MethodInfo *)0x0),
                                                   pTVar7 != (Transform *)0x0)) {
                                                  pVVar21 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_get_position
                                                                      (&VStack_22,pTVar7,
                                                                       (MethodInfo *)0x0);
                                                  uStack_30._0_4_ = pVVar21->x;
                                                  uStack_30._4_4_ = pVVar21->y;
                                                  fStack_31 = pVVar21->z;
                                                  VStack_22.z = fStack_31 + fVar17 * fVar27;
                                                  (this->fields).pivotPoint.x =
                                                       (float)uStack_30 + fVar6 * fVar27;
                                                  (this->fields).pivotPoint.y =
                                                       uStack_30._4_4_ + fVar16 * fVar27;
                                                  (this->fields).pivotPoint.z = VStack_22.z;
                                                  pGVar8 = (this->fields).
                                                            _PreviewGameObject_k__BackingField;
                                                  if (pGVar8 != (GameObject *)0x0) {
                                                    pTVar7 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar8,(MethodInfo *)0x0);
                                                    uVar32._0_4_ = (this->fields).pivotPoint.x;
                                                    uVar32._4_4_ = (this->fields).pivotPoint.y;
                                                    fVar6 = (this->fields).pivotPoint.z;
                                                    VStack_25.y = (float)(undefined4)uVar32;
                                                    VStack_25.z = (float)uVar32._4_4_;
                                                    if (cRam_? == '\0') {
                                                      func_?();
                                                      uVar32 = CONCAT44(VStack_25.z,VStack_25.y);
                                                      cRam_? = '\x01';
                                                    }
                                                    if (pTVar7 != (Transform *)0x0) {
                                                      point.z = fVar6;
                                                      point.x = (float)(int)uVar32;
                                                      point.y = (float)(int)((ulonglong)uVar32 >>
                                                                            0x20);
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_RotateAround
                                                                (pTVar7,point,
                                                                 TypeInfo__UnityEngine__Vector3->
                                                                 static_fields->upVector,180.0,
                                                                 (MethodInfo *)0x0);
                                                      pCVar5 = (this->fields).previewCam;
                                                      if (pCVar5 != (Camera *)0x0) {
                                                        pTVar7 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pCVar5,
                                                                             (MethodInfo *)0x0);
                                                        uVar33 = (this->fields).pivotPoint.x;
                                                        uVar34 = (this->fields).pivotPoint.y;
                                                        fStack_31 = (this->fields).
                                                                    inventoryItemStandardOffset.z;
                                                        VStack_25.z = (this->fields).pivotPoint.z;
                                                        uStack_30._0_4_ =
                                                             (this->fields).
                                                             inventoryItemStandardOffset.x;
                                                        uStack_30._4_4_ =
                                                             (this->fields).
                                                             inventoryItemStandardOffset.y;
                                                        VStack_22.y = uStack_30._4_4_ + (float)uVar34
                                                        ;
                                                        VStack_22.x = (float)uStack_30 +
                                                                      (float)uVar33;
                                                        VStack_22.z = fStack_31 + VStack_25.z;
                                                        VStack_25.x = (float)uVar33;
                                                        VStack_25.y = (float)uVar34;
                                                        if (pTVar7 != (Transform *)0x0) {
                                                          value_00.y = uStack_30._4_4_ +
                                                                       (float)uVar34;
                                                          value_00.x = (float)uStack_30 +
                                                                       (float)uVar33;
                                                          value_00.z = VStack_22.z;
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_set_position
                                                                    (pTVar7,value_00,
                                                                     (MethodInfo *)0x0);
                                                          pCVar5 = (this->fields).previewCam;
                                                          if ((pCVar5 != (Camera *)0x0) &&
                                                             (pTVar7 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Component::
                                                                        Component_get_transform
                                                                                  ((Component *)
                                                                                   pCVar5,(
                                                  MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_LookAt_2
                                                              (pTVar7,(this->fields).pivotPoint,
                                                               (MethodInfo *)0x0);
                                                    pCVar5 = (this->fields).previewCam;
                                                    if (pCVar5 != (Camera *)0x0) {
                                                      pTVar7 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_transform
                                                                          ((Component *)pCVar5,
                                                                           (MethodInfo *)0x0);
                                                      pCVar5 = (this->fields).previewCam;
                                                      if ((pCVar5 != (Camera *)0x0) &&
                                                         (pTVar35 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Component::
                                                                    Component_get_transform
                                                                              ((Component *)pCVar5,
                                                                               (MethodInfo *)0x0),
                                                         pTVar35 != (Transform *)0x0)) {
                                                        pVVar21 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Transform::
                                                                  Transform_get_localPosition
                                                                            (&VStack_22,pTVar35,
                                                                             (MethodInfo *)0x0);
                                                        uStack_30._0_4_ = pVVar21->x;
                                                        uStack_30._4_4_ = pVVar21->y;
                                                        fStack_31 = pVVar21->z;
                                                        pCVar5 = (this->fields).previewCam;
                                                        if ((pCVar5 != (Camera *)0x0) &&
                                                           (pTVar35 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::Component::
                                                                      Component_get_transform
                                                                                ((Component *)pCVar5
                                                                                 ,(MethodInfo *)0x0)
                                                           , pTVar35 != (Transform *)0x0)) {
                                                          pMVar36 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_get_worldToLocalMatrix
                                                                              ((Matrix4x4 *)
                                                                               &stack0xffffff30,
                                                                               pTVar35,(MethodInfo *
                                                                                       )0x0);
                                                          fStack_1 = pMVar36->m00;
                                                          puStack_37 = (undefined *)pMVar36->m10;
                                                          pVVar21 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Matrix4x4::
                                                                    Matrix4x4_MultiplyVector
                                                                              (&VStack_25,
                                                                               (Matrix4x4 *)
                                                                               &fStack_1,
                                                                               (this->fields).
                                                                               previewCamOffset,
                                                                               (MethodInfo *)
                                                                               pMVar36->m33);
                                                          VStack_22.x = pVVar21->x;
                                                          VStack_22.y = pVVar21->y;
                                                          VStack_22.z = pVVar21->z;
                                                          VStack_25.x = VStack_22.x +
                                                                        (float)uStack_30;
                                                          VStack_25.y = VStack_22.y +
                                                                        uStack_30._4_4_;
                                                          VStack_25.z = VStack_22.z + fStack_31;
                                                          if (pTVar7 != (Transform *)0x0) {
                                                            value_01.y = VStack_25.y;
                                                            value_01.x = VStack_25.x;
                                                            value_01.z = VStack_25.z;
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_set_localPosition
                                                                      (pTVar7,value_01,
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
                                          else {
                                            pGVar8 = (this->fields).
                                                      _PreviewGameObject_k__BackingField;
                                            if (pGVar8 != (GameObject *)0x0) {
                                              fVar18 = fVar27 * _UNK_?;
                                              this_00 = (LineRenderer *)
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::
                                                        GameObject_GetComponentInChildren_1
                                                                  (pGVar8,
                                                  UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                                                  );
                                              if (this_00 != (LineRenderer *)0x0) {
                                                UnityEngine.CoreModule.dll::UnityEngine::
                                                LineRenderer::LineRenderer_set_startWidth
                                                          (this_00,fVar18,(MethodInfo *)0x0);
                                                UnityEngine.CoreModule.dll::UnityEngine::
                                                LineRenderer::LineRenderer_set_endWidth
                                                          (this_00,fVar18,(MethodInfo *)0x0);
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
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer_OnDestroy
               (InventoryItemPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).previewCam;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pCVar1 = (this->fields).previewCam;
    if (pCVar1 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0);
  }
  pRVar3 = (this->fields).previewTexture;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pRVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pRVar3 = (this->fields).previewTexture;
    if (pRVar3 == (RenderTexture *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_DiscardContents_1
              (pRVar3,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_ReleaseTemporary
              ((this->fields).previewTexture,(MethodInfo *)0x0);
    (this->fields).previewTexture = (RenderTexture *)0x0;
    func_?();
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer_OnPostRender
               (InventoryItemPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._PreviewGameObject_k__BackingField;
  if (this_00 != (GameObject *)0x0) {
    transfrom = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
    LayerUtil::LayerUtil_SetLayerRecursively_3
              (transfrom,StringLiteral_Preview,StringLiteral_Hidden,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPreCull() */

void Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer_OnPreCull
               (InventoryItemPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Preview);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._PreviewGameObject_k__BackingField;
  if (this_00 != (GameObject *)0x0) {
    transfrom = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
    layersToChange.m_Mask =
         (int32_t)UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_AsRef_1((Void *)(this->fields).layersToRender,(MethodInfo *)0x0);
    layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Preview,(MethodInfo *)0x0);
    LayerUtil::LayerUtil_SetLayerRecursively_2(transfrom,layersToChange,layer,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateRotation(Single) */

void Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer_UpdateRotation
               (InventoryItemPreviewer *this,float rotateSpeed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
  if (pGVar1 != (GameObject *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar1,(MethodInfo *)0x0);
    fVar3 = (this->fields).pivotPoint.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    fVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
    if (rotateSpeed <= _UNK_?) {
      rotateSpeed = _UNK_?;
    }
    puVar5 = &UNK_?;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      auVar7._4_4_ = fVar3;
      auVar7._0_4_ = puVar5;
      auVar7._8_4_ = 0;
      axis.y = 0.0;
      axis.x = fVar6 * rotateSpeed;
      axis.z = fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                (this_00,(Vector3)(auVar7 << 0x20),axis,fVar6 * rotateSpeed,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* InventoryItemPreviewer() */

void Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer__ctor
               (InventoryItemPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__Add_MVWorldObjectDocumentationType__float_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).previewCamOffset.x = (pVVar2->zeroVector).x;
  uVar5 = _UNK_?;
  (this->fields).previewCamOffset.y = fVar3;
  (this->fields).previewCamOffset.z = fVar4;
  (this->fields).inventoryItemStandardOffset.x = (float)uVar1;
  (this->fields).inventoryItemStandardOffset.y = (float)uVar5;
  (this->fields).inventoryItemStandardOffset.z = 0.15;
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__Dictionary__
            );
  if (this_00 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
    Dictionary_2_System_Int32Enum_System_Single__Add
              ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,0x1a,50.0,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__Add_MVWorldObjectDocumentationType__float_
              );
    (this->fields).WorldObjectCameraFOVOverload =
         (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)this_00;
    func_?(&(this->fields).WorldObjectCameraFOVOverload,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

