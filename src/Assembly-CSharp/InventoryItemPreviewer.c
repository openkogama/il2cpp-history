
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
      pCVar5 = (this->fields).previewCam;
      pDVar2 = (this->fields).WorldObjectCameraFOVOverload;
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
          ppRVar11 = &(this->fields).previewTexture;
          *ppRVar11 = pRVar10;
          func_?(ppRVar11,pRVar10);
          if (*ppRVar11 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                      ((Object_1 *)*ppRVar11,name,(MethodInfo *)0x0);
            if (*ppRVar11 != (RenderTexture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                        ((Texture *)*ppRVar11,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
              if (*ppRVar11 != (RenderTexture *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                          ((Object_1 *)*ppRVar11,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
                pCVar5 = (this->fields).previewCam;
                if (pCVar5 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                            (pCVar5,*ppRVar11,(MethodInfo *)0x0);
                  ppGVar12 = &(this->fields)._PreviewGameObject_k__BackingField;
                  *ppGVar12 = woGameObjectCopy;
                  func_?(ppGVar12,woGameObjectCopy);
                  pGVar8 = *ppGVar12;
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
                    IStack_13.m_value = (wo->fields)._.itemId;
                    pSVar9 = mscorlib.dll::System::Int32::Int32_ToString
                                        (&IStack_13,(MethodInfo *)0x0);
                    if (values->max_length < 4) goto code_?;
                    values->vector[3] = pSVar9;
                    func_?(values->vector + 3,pSVar9);
                    pSVar9 = StringLiteral__woID_;
                    if (values->max_length < 5) goto code_?;
                    values->vector[4] = StringLiteral__woID_;
                    func_?(values->vector + 4,pSVar9);
                    IStack_13.m_value = (wo->fields)._.id;
                    pSVar9 = mscorlib.dll::System::Int32::Int32_ToString
                                        (&IStack_13,(MethodInfo *)0x0);
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
                                pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_GetComponentsInChildren
                                                    (pGVar8,
                                                  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                                                  );
                                IStack_13.m_value = 0;
                                if (pOVar14 != (Object__Array *)0x0) {
                                  for (; IStack_13.m_value < (int)pOVar14->max_length;
                                      IStack_13.m_value = IStack_13.m_value + 1) {
                                    if (pOVar14->max_length <= (uint)IStack_13.m_value)
                                    goto code_?;
                                    pRVar15 = (Renderer *)pOVar14->vector[IStack_13.m_value];
                                    if (pRVar15 == (Renderer *)0x0) goto code_?;
                                    x = (Object_1 *)
                                        UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_GetComponent_1
                                                  ((Component *)pRVar15,
                                                                                                      
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
                                      Renderer_set_enabled(pRVar15,0,(MethodInfo *)0x0);
                                    }
                                  }
                                  pGVar8 = (this->fields)._PreviewGameObject_k__BackingField;
                                  if (pGVar8 != (GameObject *)0x0) {
                                    pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_GetComponentsInChildren
                                                        (pGVar8,
                                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                                  );
                                    IStack_13.m_value = 0;
                                    if (pOVar14 != (Object__Array *)0x0) {
                                      for (; IStack_13.m_value < (int)pOVar14->max_length;
                                          IStack_13.m_value = IStack_13.m_value + 1) {
                                        if (pOVar14->max_length <= (uint)IStack_13.m_value)
                                        goto code_?;
                                        if (((Component *)pOVar14->vector[IStack_13.m_value] ==
                                             (Component *)0x0) ||
                                           (pRVar15 = (Renderer *)
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_GetComponent_1
                                                                ((Component *)
                                                                 pOVar14->vector[IStack_13.m_value],
                                                                                                                                  
                                                  UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                                                  ), pRVar15 == (Renderer *)0x0))
                                        goto code_?;
                                        UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                        Renderer_set_enabled(pRVar15,0,(MethodInfo *)0x0);
                                      }
                                      pfVar16 = (float *)(*(code *)(wo->klass->vtable).
                                                                   GetLocalBounds.method)
                                                                   (auStack_17,wo,2,
                                                                    (wo->klass->vtable).Select.
                                                                    methodPtr);
                                      fVar6 = *pfVar16;
                                      fVar18 = pfVar16[1];
                                      fVar19 = pfVar16[2];
                                      fVar20 = pfVar16[3];
                                      pGVar8 = (this->fields)._PreviewGameObject_k__BackingField;
                                      fVar21 = (float)*(undefined8 *)(pfVar16 + 4);
                                      fVar22 = (float)((ulonglong)*(undefined8 *)(pfVar16 + 4) >>
                                                      0x20);
                                      if ((pGVar8 != (GameObject *)0x0) &&
                                         (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_get_transform
                                                              (pGVar8,(MethodInfo *)0x0),
                                         pTVar7 != (Transform *)0x0)) {
                                        pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_get_localScale
                                                            (&VStack_24,pTVar7,(MethodInfo *)0x0);
                                        uVar25 = pVVar23->x;
                                        uVar26 = pVVar23->y;
                                        VStack_27.z = pVVar23->z;
                                        VStack_27.x = (float)uVar25;
                                        VStack_27.y = (float)uVar26;
                                        iVar28 = func_?(TypeInfo__System__Single,3);
                                        fVar29 = _UNK_?;
                                        fVar20 = fVar20 * _UNK_?;
                                        if (iVar28 != 0) {
                                          if (*(int *)(iVar28 + 0xc) == 0) goto code_?;
                                          *(float *)(iVar28 + 0x10) = fVar20;
                                          fVar21 = fVar21 * fVar29;
                                          if (*(uint *)(iVar28 + 0xc) < 2) goto code_?;
                                          pfVar16 = (float *)(iVar28 + 0x14);
                                          *pfVar16 = fVar21;
                                          fVar22 = fVar22 * fVar29;
                                          if (*(uint *)(iVar28 + 0xc) < 3) goto code_?;
                                          *(float *)(iVar28 + 0x18) = fVar22;
                                          uVar30 = *(uint *)(iVar28 + 0xc);
                                          if (uVar30 != 0) {
                                            fVar29 = *(float *)(iVar28 + 0x10);
                                            uVar31 = 1;
                                            if (1 < (int)uVar30) {
                                              bVar32 = 1 < uVar30;
                                              do {
                                                if (!bVar32) goto code_?;
                                                if (fVar29 < *pfVar16) {
                                                  fVar29 = *pfVar16;
                                                }
                                                uVar31 = uVar31 + 1;
                                                pfVar16 = pfVar16 + 1;
                                                bVar32 = uVar31 < uVar30;
                                              } while ((int)uVar31 < (int)uVar30);
                                            }
                                          }
                                          iVar28 = func_?(TypeInfo__System__Single,3);
                                          if (iVar28 == 0) goto code_?;
                                          if ((*(int *)(iVar28 + 0xc) == 0) ||
                                             (*(float *)(iVar28 + 0x10) = VStack_27.x * fVar20,
                                             *(uint *)(iVar28 + 0xc) < 2)) goto code_?;
                                          pfVar16 = (float *)(iVar28 + 0x14);
                                          *pfVar16 = VStack_27.y * fVar21;
                                          if (*(uint *)(iVar28 + 0xc) < 3) goto code_?;
                                          *(float *)(iVar28 + 0x18) = VStack_27.z * fVar22;
                                          uVar30 = *(uint *)(iVar28 + 0xc);
                                          if (uVar30 == 0) {
                                            fVar20 = 0.0;
                                          }
                                          else {
                                            fVar20 = *(float *)(iVar28 + 0x10);
                                            uVar31 = 1;
                                            if (1 < (int)uVar30) {
                                              bVar32 = 1 < uVar30;
                                              do {
                                                if (!bVar32) goto code_?;
                                                if (fVar20 < *pfVar16) {
                                                  fVar20 = *pfVar16;
                                                }
                                                uVar31 = uVar31 + 1;
                                                pfVar16 = pfVar16 + 1;
                                                bVar32 = uVar31 < uVar30;
                                              } while ((int)uVar31 < (int)uVar30);
                                            }
                                          }
                                          fVar20 = _UNK_? / fVar20;
                                          bVar33 = (TypeInfo__MVMovingPlatformGroup->_1).
                                                  naturalAligment;
                                          if (((wo->klass->_1).naturalAligment < bVar33) ||
                                             ((MVMovingPlatformGroup__Class *)
                                              (wo->klass->_1).typeHierarchy[bVar33 - 1] !=
                                              TypeInfo__MVMovingPlatformGroup)) {
code_?:
                                            pGVar8 = (this->fields).
                                                      _PreviewGameObject_k__BackingField;
                                            if (pGVar8 != (GameObject *)0x0) {
                                              pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::GameObject_get_transform
                                                                  (pGVar8,(MethodInfo *)0x0);
                                              uStack_34 = CONCAT44(VStack_27.y * fVar20,
                                                                   VStack_27.x * fVar20);
                                              fStack_35 = VStack_27.z * fVar20;
                                              if (pTVar7 != (Transform *)0x0) {
                                                value.y = VStack_27.y * fVar20;
                                                value.x = VStack_27.x * fVar20;
                                                value.z = fStack_35;
                                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                                Transform_set_localScale
                                                          (pTVar7,value,(MethodInfo *)0x0);
                                                fVar6 = fVar6 * VStack_27.x;
                                                fVar18 = fVar18 * VStack_27.y;
                                                fVar19 = fVar19 * VStack_27.z;
                                                pGVar8 = (this->fields).
                                                          _PreviewGameObject_k__BackingField;
                                                if ((pGVar8 != (GameObject *)0x0) &&
                                                   (pTVar7 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar8,(MethodInfo *)0x0),
                                                   pTVar7 != (Transform *)0x0)) {
                                                  pVVar23 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_get_position
                                                                      (&VStack_24,pTVar7,
                                                                       (MethodInfo *)0x0);
                                                  uStack_34._0_4_ = pVVar23->x;
                                                  uStack_34._4_4_ = pVVar23->y;
                                                  fStack_35 = pVVar23->z;
                                                  VStack_24.z = fStack_35 + fVar19 * fVar20;
                                                  (this->fields).pivotPoint.x =
                                                       (float)uStack_34 + fVar6 * fVar20;
                                                  (this->fields).pivotPoint.y =
                                                       uStack_34._4_4_ + fVar18 * fVar20;
                                                  (this->fields).pivotPoint.z = VStack_24.z;
                                                  pGVar8 = (this->fields).
                                                            _PreviewGameObject_k__BackingField;
                                                  if (pGVar8 != (GameObject *)0x0) {
                                                    pTVar7 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar8,(MethodInfo *)0x0);
                                                    uVar36._0_4_ = (this->fields).pivotPoint.x;
                                                    uVar36._4_4_ = (this->fields).pivotPoint.y;
                                                    fVar6 = (this->fields).pivotPoint.z;
                                                    VStack_27.y = (float)(undefined4)uVar36;
                                                    VStack_27.z = (float)uVar36._4_4_;
                                                    if (cRam_? == '\0') {
                                                      func_?();
                                                      uVar36 = CONCAT44(VStack_27.z,VStack_27.y);
                                                      cRam_? = '\x01';
                                                    }
                                                    if (pTVar7 != (Transform *)0x0) {
                                                      point.z = fVar6;
                                                      point.x = (float)(int)uVar36;
                                                      point.y = (float)(int)((ulonglong)uVar36 >>
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
                                                        uVar37 = (this->fields).pivotPoint.x;
                                                        uVar38 = (this->fields).pivotPoint.y;
                                                        VStack_27.z = (this->fields).pivotPoint.z;
                                                        uStack_34._0_4_ =
                                                             (this->fields).
                                                             inventoryItemStandardOffset.x;
                                                        uStack_34._4_4_ =
                                                             (this->fields).
                                                             inventoryItemStandardOffset.y;
                                                        fStack_35 = (this->fields).
                                                                    inventoryItemStandardOffset.z;
                                                        VStack_24.y = uStack_34._4_4_ + (float)uVar38
                                                        ;
                                                        VStack_24.x = (float)uStack_34 +
                                                                      (float)uVar37;
                                                        VStack_24.z = fStack_35 + VStack_27.z;
                                                        VStack_27.x = (float)uVar37;
                                                        VStack_27.y = (float)uVar38;
                                                        if (pTVar7 != (Transform *)0x0) {
                                                          value_00.y = uStack_34._4_4_ +
                                                                       (float)uVar38;
                                                          value_00.x = (float)uStack_34 +
                                                                       (float)uVar37;
                                                          value_00.z = VStack_24.z;
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
                                                         (pTVar39 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Component::
                                                                    Component_get_transform
                                                                              ((Component *)pCVar5,
                                                                               (MethodInfo *)0x0),
                                                         pTVar39 != (Transform *)0x0)) {
                                                        pVVar23 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Transform::
                                                                  Transform_get_localPosition
                                                                            (&VStack_24,pTVar39,
                                                                             (MethodInfo *)0x0);
                                                        uStack_34._0_4_ = pVVar23->x;
                                                        uStack_34._4_4_ = pVVar23->y;
                                                        fStack_35 = pVVar23->z;
                                                        pCVar5 = (this->fields).previewCam;
                                                        if ((pCVar5 != (Camera *)0x0) &&
                                                           (pTVar39 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::Component::
                                                                      Component_get_transform
                                                                                ((Component *)
                                                                                 pCVar5,(MethodInfo
                                                                                          *)0x0),
                                                           pTVar39 != (Transform *)0x0)) {
                                                          pMVar40 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_get_worldToLocalMatrix
                                                                              ((Matrix4x4 *)
                                                                               &stack0xffffff30,
                                                                               pTVar39,(MethodInfo *
                                                                                       )0x0);
                                                          fStack_1 = pMVar40->m00;
                                                          puStack_41 = (undefined *)pMVar40->m10;
                                                          pVVar23 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Matrix4x4::
                                                                    Matrix4x4_MultiplyVector
                                                                              (&VStack_27,
                                                                               (Matrix4x4 *)
                                                                               &fStack_1,
                                                                               (this->fields).
                                                                               previewCamOffset,
                                                                               (MethodInfo *)
                                                                               pMVar40->m33);
                                                          VStack_24.x = pVVar23->x;
                                                          VStack_24.y = pVVar23->y;
                                                          VStack_24.z = pVVar23->z;
                                                          VStack_27.x = VStack_24.x +
                                                                        (float)uStack_34;
                                                          VStack_27.y = VStack_24.y +
                                                                        uStack_34._4_4_;
                                                          VStack_27.z = VStack_24.z + fStack_35;
                                                          if (pTVar7 != (Transform *)0x0) {
                                                            value_01.y = VStack_27.y;
                                                            value_01.x = VStack_27.x;
                                                            value_01.z = VStack_27.z;
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
                                              fVar21 = fVar20 * _UNK_?;
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
                                                          (this_00,fVar21,(MethodInfo *)0x0);
                                                UnityEngine.CoreModule.dll::UnityEngine::
                                                LineRenderer::LineRenderer_set_endWidth
                                                          (this_00,fVar21,(MethodInfo *)0x0);
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
  pcVar42 = (code *)swi(3);
  (*pcVar42)();
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
  ppRVar3 = &(this->fields).previewTexture;
  x = *ppRVar3;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (*ppRVar3 == (RenderTexture *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_DiscardContents_1
              (*ppRVar3,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_ReleaseTemporary
              (*ppRVar3,(MethodInfo *)0x0);
    *ppRVar3 = (RenderTexture *)0x0;
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
    ppDVar6 = &(this->fields).WorldObjectCameraFOVOverload;
    *ppDVar6 = (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)this_00;
    func_?(ppDVar6,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

