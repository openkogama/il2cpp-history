
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
  (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  pDStack_2 = (this->fields).WorldObjectCameraFOVOverload;
  if ((wo != (MVWorldObjectClient *)0x0) &&
     (IVar3 = (*(code *)(wo->klass->vtable).get_DocumentationType.method)
                         (wo,(wo->klass->vtable).TraverseRecursiveTail.methodPtr),
     pDStack_2 != (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)0x0)) {
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                       ((Dictionary_2_System_Int32Enum_System_Single_ *)pDStack_2,IVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__ContainsKey_MVWorldObjectDocumentationType_
                       );
    if (bVar4 != 0) {
      VStack_5.z = (float)(this->fields).previewCam;
      pDStack_2 = (this->fields).WorldObjectCameraFOVOverload;
      IVar3 = (*(code *)(wo->klass->vtable).get_DocumentationType.method)
                         (wo,(wo->klass->vtable).TraverseRecursiveTail.methodPtr);
      if ((pDStack_2 == (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)0x0) ||
         (pDStack_2 = (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Single]::
                       Dictionary_2_System_Int32Enum_System_Single__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Single_ *)pDStack_2,IVar3,
                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__get_Item_MVWorldObjectDocumentationType_
                                 ), (Object__Array *)VStack_5.z == (Object__Array *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                ((Camera *)VStack_5.z,(float)pDStack_2,(MethodInfo *)0x0);
    }
    (this->fields).previewCamOffset.x = cameraOffset.x;
    (this->fields).previewCamOffset.y = cameraOffset.y;
    (this->fields).previewCamOffset.z = cameraOffset.z;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar6 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar6,previewItemsRoot,(MethodInfo *)0x0);
      pDStack_2 = (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Format
                          (StringLiteral_Preview__0__RenderCam,(Object *)name,(MethodInfo *)0x0);
      if (pDStack_2 != (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                  ((Object_1 *)pDStack_2,pSVar7,(MethodInfo *)0x0);
        pDStack_2 = (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)
                     UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
        value_02 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Preview,(MethodInfo *)0x0);
        if (pDStack_2 != (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                    ((GameObject *)pDStack_2,value_02,(MethodInfo *)0x0);
          pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                    RenderTexture_GetTemporary_4
                              (textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
                               RenderTextureReadWrite__Enum_Default,2,(MethodInfo *)0x0);
          (this->fields).previewTexture = pRVar8;
          func_?(&(this->fields).previewTexture,pRVar8);
          pRVar8 = (this->fields).previewTexture;
          if (pRVar8 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                      ((Object_1 *)pRVar8,name,(MethodInfo *)0x0);
            pRVar8 = (this->fields).previewTexture;
            if (pRVar8 != (RenderTexture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                        ((Texture *)pRVar8,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
              pRVar8 = (this->fields).previewTexture;
              if (pRVar8 != (RenderTexture *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                          ((Object_1 *)pRVar8,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
                pCVar9 = (this->fields).previewCam;
                if (pCVar9 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                            (pCVar9,(this->fields).previewTexture,(MethodInfo *)0x0);
                  (this->fields)._PreviewGameObject_k__BackingField = woGameObjectCopy;
                  func_?(&(this->fields)._PreviewGameObject_k__BackingField,
                                  woGameObjectCopy);
                  pDStack_2 = (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)
                               (this->fields)._PreviewGameObject_k__BackingField;
                  values = (String__Array *)func_?(TypeInfo__System__String,6);
                  pSVar7 = StringLiteral_Preview_;
                  if (values != (String__Array *)0x0) {
                    if (values->max_length == 0) goto code_?;
                    values->vector[0] = StringLiteral_Preview_;
                    func_?(values->vector,pSVar7);
                    if (values->max_length < 2) goto code_?;
                    values->vector[1] = name;
                    func_?(values->vector + 1,name);
                    pSVar7 = StringLiteral__Item_;
                    if (values->max_length < 3) goto code_?;
                    values->vector[2] = StringLiteral__Item_;
                    func_?(values->vector + 2,pSVar7);
                    IStack_10.m_value = (wo->fields)._.itemId;
                    pSVar7 = mscorlib.dll::System::Int32::Int32_ToString
                                        (&IStack_10,(MethodInfo *)0x0);
                    if (values->max_length < 4) goto code_?;
                    values->vector[3] = pSVar7;
                    func_?(values->vector + 3,pSVar7);
                    pSVar7 = StringLiteral__woID_;
                    if (values->max_length < 5) goto code_?;
                    values->vector[4] = StringLiteral__woID_;
                    func_?(values->vector + 4,pSVar7);
                    IStack_10.m_value = (wo->fields)._.id;
                    pSVar7 = mscorlib.dll::System::Int32::Int32_ToString
                                        (&IStack_10,(MethodInfo *)0x0);
                    if (values->max_length < 6) goto code_?;
                    values->vector[5] = pSVar7;
                    func_?(values->vector + 5,pSVar7);
                    pSVar7 = mscorlib.dll::System::String::String_Concat_6
                                        (values,(MethodInfo *)0x0);
                    if (pDStack_2 !=
                        (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                                ((Object_1 *)pDStack_2,pSVar7,(MethodInfo *)0x0);
                      pGVar11 = (this->fields)._PreviewGameObject_k__BackingField;
                      if ((pGVar11 != (GameObject *)0x0) &&
                         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar11,(MethodInfo *)0x0),
                         pTVar6 != (Transform *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                                  (pTVar6,previewItemsRoot,(MethodInfo *)0x0);
                        pGVar11 = (this->fields)._PreviewGameObject_k__BackingField;
                        if (pGVar11 != (GameObject *)0x0) {
                          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar11,(MethodInfo *)0x0);
                          if (cRam_? == '\0') {
                            func_?(&TypeInfo__UnityEngine__Quaternion);
                            cRam_? = '\x01';
                          }
                          if (pTVar6 != (Transform *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_localRotation
                                      (pTVar6,TypeInfo__UnityEngine__Quaternion->static_fields->
                                               identityQuaternion,(MethodInfo *)0x0);
                            pGVar11 = (this->fields)._PreviewGameObject_k__BackingField;
                            if ((pGVar11 != (GameObject *)0x0) &&
                               (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform(pGVar11,(MethodInfo *)0x0),
                               pTVar6 != (Transform *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_position(pTVar6,previewPosition,(MethodInfo *)0x0);
                              pGVar11 = (this->fields)._PreviewGameObject_k__BackingField;
                              if (pGVar11 != (GameObject *)0x0) {
                                VStack_5.z = (float)UnityEngine.CoreModule.dll::UnityEngine::
                                                     GameObject::GameObject_GetComponentsInChildren
                                                               (pGVar11,
                                                  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                                                  );
                                IStack_10.m_value = 0;
                                if ((Object__Array *)VStack_5.z != (Object__Array *)0x0) {
                                  for (; IStack_10.m_value <
                                         (int)*(il2cpp_array_size_t *)((int)VStack_5.z + 0xc);
                                      IStack_10.m_value = IStack_10.m_value + 1) {
                                    if (*(il2cpp_array_size_t *)((int)VStack_5.z + 0xc) <=
                                        (uint)IStack_10.m_value) goto code_?;
                                    pRVar12 = (Renderer *)
                                              ((Object **)((int)VStack_5.z + 0x10))
                                              [IStack_10.m_value];
                                    if (pRVar12 == (Renderer *)0x0) goto code_?;
                                    pDStack_2 = (Dictionary_2_MVWorldObjectDocumentationType_System_Single_
                                                  *)UnityEngine.CoreModule.dll::UnityEngine::
                                                    Component::Component_GetComponent_1
                                                              ((Component *)pRVar12,
                                                                                                                              
                                                  TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                                                  );
                                    if ((TypeInfo__UnityEngine__Object->_1).
                                        cctor_finished_or_no_cctor == 0) {
                                      func_?(TypeInfo__UnityEngine__Object);
                                    }
                                    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                             Object_1_op_Inequality
                                                       ((Object_1 *)pDStack_2,(Object_1 *)0x0,
                                                        (MethodInfo *)0x0);
                                    if (bVar4 != 0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                      Renderer_set_enabled(pRVar12,0,(MethodInfo *)0x0);
                                    }
                                  }
                                  pGVar11 = (this->fields)._PreviewGameObject_k__BackingField;
                                  if (pGVar11 != (GameObject *)0x0) {
                                    pOVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_GetComponentsInChildren
                                                        (pGVar11,
                                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                                  );
                                    IStack_10.m_value = 0;
                                    if (pOVar13 != (Object__Array *)0x0) {
                                      for (; IStack_10.m_value < (int)pOVar13->max_length;
                                          IStack_10.m_value = IStack_10.m_value + 1) {
                                        if (pOVar13->max_length <= (uint)IStack_10.m_value)
                                        goto code_?;
                                        if (((Component *)pOVar13->vector[IStack_10.m_value] ==
                                             (Component *)0x0) ||
                                           (pRVar12 = (Renderer *)
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_GetComponent_1
                                                                ((Component *)
                                                                 pOVar13->vector[IStack_10.m_value],
                                                                                                                                  
                                                  UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                                                  ), pRVar12 == (Renderer *)0x0))
                                        goto code_?;
                                        UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                        Renderer_set_enabled(pRVar12,0,(MethodInfo *)0x0);
                                      }
                                      pfVar14 = (float *)(*(code *)(wo->klass->vtable).
                                                                   GetLocalBounds.method)
                                                                   (&stack0xffffff88,wo,2,
                                                                    (wo->klass->vtable).Select.
                                                                    methodPtr);
                                      fVar15 = *pfVar14;
                                      fVar16 = pfVar14[1];
                                      fVar17 = pfVar14[2];
                                      fVar18 = pfVar14[3];
                                      uVar19 = *(undefined8 *)(pfVar14 + 4);
                                      pGVar11 = (this->fields)._PreviewGameObject_k__BackingField;
                                      if ((pGVar11 != (GameObject *)0x0) &&
                                         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_get_transform
                                                              (pGVar11,(MethodInfo *)0x0),
                                         pTVar6 != (Transform *)0x0)) {
                                        pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_get_localScale
                                                            (&VStack_5,pTVar6,(MethodInfo *)0x0);
                                        uStack_21._0_4_ = pVVar20->x;
                                        uStack_21._4_4_ = pVVar20->y;
                                        fStack_22 = pVVar20->z;
                                        iVar23 = func_?(TypeInfo__System__Single,3);
                                        fVar24 = _UNK_?;
                                        if (iVar23 != 0) {
                                          if (*(int *)(iVar23 + 0xc) == 0) goto code_?;
                                          *(float *)(iVar23 + 0x10) = fVar18 * _UNK_?;
                                          fStack_25 = (float)uVar19;
                                          if (*(uint *)(iVar23 + 0xc) < 2) goto code_?;
                                          *(float *)(iVar23 + 0x14) = fStack_25 * fVar24;
                                          fStack_26 = (float)((ulonglong)uVar19 >> 0x20);
                                          if (*(uint *)(iVar23 + 0xc) < 3) goto code_?;
                                          *(float *)(iVar23 + 0x18) = fStack_26 * fVar24;
                                          pDVar27 = *(
                                                  Dictionary_2_MVWorldObjectDocumentationType_System_Single_
                                                  **)(iVar23 + 0xc);
                                          if (pDVar27 !=
                                              (Dictionary_2_MVWorldObjectDocumentationType_System_Single_
                                               *)0x0) {
                                            fVar24 = *(float *)(iVar23 + 0x10);
                                            pDVar28 = (
                                                  Dictionary_2_MVWorldObjectDocumentationType_System_Single_
                                                  *)0x1;
                                            if (1 < (int)pDVar27) {
                                              pfVar14 = (float *)(iVar23 + 0x14);
                                              do {
                                                pDStack_2 = pDVar27;
                                                if (pDVar27 <= pDVar28) goto code_?;
                                                if (fVar24 < *pfVar14) {
                                                  fVar24 = *pfVar14;
                                                }
                                                pDVar28 = (
                                                  Dictionary_2_MVWorldObjectDocumentationType_System_Single_
                                                  *)((int)&pDVar28->klass + 1);
                                                pfVar14 = pfVar14 + 1;
                                              } while ((int)pDVar28 < (int)pDVar27);
                                            }
                                          }
                                          iVar23 = func_?(TypeInfo__System__Single,3);
                                          fVar24 = _UNK_?;
                                          if (iVar23 == 0) goto code_?;
                                          if (*(int *)(iVar23 + 0xc) == 0) goto code_?;
                                          *(float *)(iVar23 + 0x10) =
                                               fVar18 * _UNK_? * (float)uStack_21;
                                          if (*(uint *)(iVar23 + 0xc) < 2) goto code_?;
                                          *(float *)(iVar23 + 0x14) =
                                               fStack_25 * fVar24 * uStack_21._4_4_;
                                          if (*(uint *)(iVar23 + 0xc) < 3) goto code_?;
                                          *(float *)(iVar23 + 0x18) = fStack_26 * fVar24 * fStack_22
                                          ;
                                          pDStack_2 = *(
                                                  Dictionary_2_MVWorldObjectDocumentationType_System_Single_
                                                  **)(iVar23 + 0xc);
                                          if (pDStack_2 ==
                                              (Dictionary_2_MVWorldObjectDocumentationType_System_Single_
                                               *)0x0) {
                                            fVar18 = 0.0;
                                          }
                                          else {
                                            fVar18 = *(float *)(iVar23 + 0x10);
                                            pDVar27 = (
                                                  Dictionary_2_MVWorldObjectDocumentationType_System_Single_
                                                  *)0x1;
                                            if (1 < (int)pDStack_2) {
                                              pfVar14 = (float *)(iVar23 + 0x14);
                                              do {
                                                if (pDStack_2 <= pDVar27) goto code_?;
                                                if (fVar18 < *pfVar14) {
                                                  fVar18 = *pfVar14;
                                                }
                                                pDVar27 = (
                                                  Dictionary_2_MVWorldObjectDocumentationType_System_Single_
                                                  *)((int)&pDVar27->klass + 1);
                                                pfVar14 = pfVar14 + 1;
                                                fVar24 = _UNK_?;
                                              } while ((int)pDVar27 < (int)pDStack_2);
                                            }
                                          }
                                          pDStack_2 = (
                                                  Dictionary_2_MVWorldObjectDocumentationType_System_Single_
                                                  *)(fVar24 / fVar18);
                                          if (((wo->klass->_1).naturalAligment <
                                               (TypeInfo__MVMovingPlatformGroup->_1).naturalAligment
                                              ) || ((MVMovingPlatformGroup__Class *)
                                                    (wo->klass->_1).typeHierarchy
                                                    [(TypeInfo__MVMovingPlatformGroup->_1).
                                                     naturalAligment - 1] !=
                                                    TypeInfo__MVMovingPlatformGroup)) {
code_?:
                                            pGVar11 = (this->fields).
                                                     _PreviewGameObject_k__BackingField;
                                            if (pGVar11 != (GameObject *)0x0) {
                                              pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::GameObject_get_transform
                                                                  (pGVar11,(MethodInfo *)0x0);
                                              VStack_5.z = fStack_22 * (float)pDStack_2;
                                              VStack_5.y = uStack_21._4_4_ * (float)pDStack_2;
                                              VStack_5.x = (float)uStack_21 * (float)pDStack_2;
                                              if (pTVar6 != (Transform *)0x0) {
                                                value.y = uStack_21._4_4_ * (float)pDStack_2;
                                                value.x = (float)uStack_21 * (float)pDStack_2;
                                                value.z = VStack_5.z;
                                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                                Transform_set_localScale
                                                          (pTVar6,value,(MethodInfo *)0x0);
                                                fVar15 = fVar15 * (float)uStack_21 *
                                                         (float)pDStack_2;
                                                pDVar27 = (
                                                  Dictionary_2_MVWorldObjectDocumentationType_System_Single_
                                                  *)(fVar16 * uStack_21._4_4_ * (float)pDStack_2);
                                                VStack_5.z = fVar17 * fStack_22 * (float)pDStack_2
                                                ;
                                                pGVar11 = (this->fields).
                                                         _PreviewGameObject_k__BackingField;
                                                pDStack_2 = pDVar27;
                                                if ((pGVar11 != (GameObject *)0x0) &&
                                                   (pTVar6 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar11,(MethodInfo *)0x0),
                                                   pTVar6 != (Transform *)0x0)) {
                                                  pVVar20 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_get_position
                                                                      ((Vector3 *)&stack0xffffff90,
                                                                       pTVar6,(MethodInfo *)0x0);
                                                  uStack_21._0_4_ = pVVar20->x;
                                                  uStack_21._4_4_ = pVVar20->y;
                                                  fStack_22 = VStack_5.z + pVVar20->z;
                                                  (this->fields).pivotPoint.x =
                                                       fVar15 + (float)uStack_21;
                                                  (this->fields).pivotPoint.y =
                                                       (float)pDStack_2 + uStack_21._4_4_;
                                                  (this->fields).pivotPoint.z = fStack_22;
                                                  pGVar11 = (this->fields).
                                                           _PreviewGameObject_k__BackingField;
                                                  if (pGVar11 != (GameObject *)0x0) {
                                                    pTVar6 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar11,(MethodInfo *)0x0);
                                                    VStack_5.x = (this->fields).pivotPoint.x;
                                                    VStack_5.y = (this->fields).pivotPoint.y;
                                                    pDStack_2 = (
                                                  Dictionary_2_MVWorldObjectDocumentationType_System_Single_
                                                  *)(this->fields).pivotPoint.z;
                                                  if (cRam_? == '\0') {
                                                    func_?();
                                                    cRam_? = '\x01';
                                                  }
                                                  if (pTVar6 != (Transform *)0x0) {
                                                    point.z = (float)pDStack_2;
                                                    point.x = VStack_5.x;
                                                    point.y = VStack_5.y;
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_RotateAround
                                                              (pTVar6,point,
                                                               TypeInfo__UnityEngine__Vector3->
                                                               static_fields->upVector,180.0,
                                                               (MethodInfo *)0x0);
                                                    pCVar9 = (this->fields).previewCam;
                                                    if (pCVar9 != (Camera *)0x0) {
                                                      pTVar6 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_transform
                                                                          ((Component *)pCVar9,
                                                                           (MethodInfo *)0x0);
                                                      VStack_5.x = (this->fields).pivotPoint.x;
                                                      VStack_5.y = (this->fields).pivotPoint.y;
                                                      VStack_5.z = (this->fields).pivotPoint.z;
                                                      uVar29 = (this->fields).
                                                              inventoryItemStandardOffset.x;
                                                      uVar30 = (this->fields).
                                                              inventoryItemStandardOffset.y;
                                                      fStack_22 = (this->fields).
                                                                  inventoryItemStandardOffset.z +
                                                                  VStack_5.z;
                                                      uStack_21 = CONCAT44((float)uVar30 +
                                                                           VStack_5.y,
                                                                           (float)uVar29 +
                                                                           VStack_5.x);
                                                      if (pTVar6 != (Transform *)0x0) {
                                                        value_00.y = (float)uVar30 + VStack_5.y;
                                                        value_00.x = (float)uVar29 + VStack_5.x;
                                                        value_00.z = fStack_22;
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Transform::Transform_set_position
                                                                  (pTVar6,value_00,
                                                                   (MethodInfo *)0x0);
                                                        pCVar9 = (this->fields).previewCam;
                                                        if ((pCVar9 != (Camera *)0x0) &&
                                                           (pTVar6 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::Component::
                                                                      Component_get_transform
                                                                                ((Component *)pCVar9
                                                                                 ,(MethodInfo *)0x0)
                                                           , pTVar6 != (Transform *)0x0)) {
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_LookAt_2
                                                                    (pTVar6,(this->fields).
                                                                             pivotPoint,
                                                                     (MethodInfo *)0x0);
                                                          pCVar9 = (this->fields).previewCam;
                                                          if (pCVar9 != (Camera *)0x0) {
                                                            pTVar6 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::Component::
                                                                      Component_get_transform
                                                                                ((Component *)pCVar9
                                                                                 ,(MethodInfo *)0x0)
                                                            ;
                                                            pCVar9 = (this->fields).previewCam;
                                                            if ((pCVar9 != (Camera *)0x0) &&
                                                               (pTVar31 = UnityEngine.CoreModule.dll
                                                                          ::UnityEngine::Component::
                                                                          Component_get_transform
                                                                                    ((Component *)
                                                                                     pCVar9,(
                                                  MethodInfo *)0x0), pTVar31 != (Transform *)0x0)) {
                                                    pVVar20 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_localPosition
                                                                        ((Vector3 *)&stack0xffffff90
                                                                         ,pTVar31,(MethodInfo *)0x0)
                                                    ;
                                                    VStack_5.x = pVVar20->x;
                                                    VStack_5.y = pVVar20->y;
                                                    VStack_5.z = pVVar20->z;
                                                    pCVar9 = (this->fields).previewCam;
                                                    if ((pCVar9 != (Camera *)0x0) &&
                                                       (pTVar31 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pCVar9,
                                                                             (MethodInfo *)0x0),
                                                       pTVar31 != (Transform *)0x0)) {
                                                      pMVar32 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_get_worldToLocalMatrix
                                                                          ((Matrix4x4 *)
                                                                           &stack0xffffff08,pTVar31,
                                                                           (MethodInfo *)0x0);
                                                      fStack_1 = pMVar32->m00;
                                                      fStack_33 = pMVar32->m10;
                                                      puStack_34 = (undefined *)pMVar32->m20;
                                                      pVVar20 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Matrix4x4::
                                                                Matrix4x4_MultiplyVector
                                                                          ((Vector3 *)
                                                                           &stack0xffffff90,
                                                                           (Matrix4x4 *)&fStack_1,
                                                                           (this->fields).
                                                                           previewCamOffset,
                                                                           (MethodInfo *)0x0);
                                                      uVar35 = pVVar20->x;
                                                      uVar36 = pVVar20->y;
                                                      fStack_22 = pVVar20->z + VStack_5.z;
                                                      uStack_21 = CONCAT44((float)uVar36 +
                                                                           VStack_5.y,
                                                                           (float)uVar35 +
                                                                           VStack_5.x);
                                                      if (pTVar6 != (Transform *)0x0) {
                                                        value_01.z = fStack_22;
                                                        value_01.x = (float)uVar35 + VStack_5.x;
                                                        value_01.y = (float)uVar36 + VStack_5.y;
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Transform::Transform_set_localPosition
                                                                  (pTVar6,value_01,
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
                                            pGVar11 = (this->fields).
                                                     _PreviewGameObject_k__BackingField;
                                            if (pGVar11 != (GameObject *)0x0) {
                                              VStack_5.z = (float)pDStack_2 * _UNK_?;
                                              this_00 = (LineRenderer *)
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::
                                                        GameObject_GetComponentInChildren_1
                                                                  (pGVar11,
                                                  UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                                                  );
                                              if (this_00 != (LineRenderer *)0x0) {
                                                UnityEngine.CoreModule.dll::UnityEngine::
                                                LineRenderer::LineRenderer_set_startWidth
                                                          (this_00,VStack_5.z,(MethodInfo *)0x0);
                                                UnityEngine.CoreModule.dll::UnityEngine::
                                                LineRenderer::LineRenderer_set_endWidth
                                                          (this_00,VStack_5.z,(MethodInfo *)0x0);
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
  pcVar37 = (code *)swi(3);
  (*pcVar37)();
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

