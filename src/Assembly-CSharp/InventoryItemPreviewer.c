
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
  puStack_1 = (undefined *)0x0;
  func_?(&stack0xffffff70,0,0x40);
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).WorldObjectCameraFOVOverload;
  (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  if ((wo == (MVWorldObjectClient *)0x0) ||
     (key = (Object *)
            (*(wo->klass->vtable).get_DocumentationType.methodPtr)
                      (wo,(wo->klass->vtable).get_DocumentationType.method),
     this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
code_?:
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__ContainsKey_MVWorldObjectDocumentationType_
                      );
    if (bVar3 != 0) {
      this_01 = (this->fields).WorldObjectCameraFOVOverload;
      pCVar4 = (this->fields).previewCam;
      key_00 = (*(wo->klass->vtable).get_DocumentationType.methodPtr)
                         (wo,(wo->klass->vtable).get_DocumentationType.method);
      if ((this_01 == (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)0x0) ||
         (fVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Single]::Dictionary_2_System_Int32Enum_System_Single__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Single_ *)this_01,key_00,
                              MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__get_Item_MVWorldObjectDocumentationType_
                             ), pCVar4 == (Camera *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                (pCVar4,fVar5,(MethodInfo *)0x0);
    }
    (this->fields).previewCamOffset.x = cameraOffset.x;
    (this->fields).previewCamOffset.y = cameraOffset.y;
    (this->fields).previewCamOffset.z = cameraOffset.z;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar6 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar6,previewItemsRoot,(MethodInfo *)0x0);
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    pSVar8 = mscorlib.dll::System::String::String_Format
                        (StringLiteral_Preview__0__RenderCam,(Object *)name,(MethodInfo *)0x0);
    if (pGVar7 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)pGVar7,pSVar8,(MethodInfo *)0x0);
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    value_02 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                         (StringLiteral_Preview,(MethodInfo *)0x0);
    if (pGVar7 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar7,value_02,(MethodInfo *)0x0);
    pRVar9 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_GetTemporary_1
                        (textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
                         RenderTextureReadWrite__Enum_Default,2,(MethodInfo *)0x0);
    (this->fields).previewTexture = pRVar9;
    func_?(&(this->fields).previewTexture,pRVar9);
    pRVar9 = (this->fields).previewTexture;
    if (pRVar9 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)pRVar9,name,(MethodInfo *)0x0);
    pRVar9 = (this->fields).previewTexture;
    if (pRVar9 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
              ((Texture *)pRVar9,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
    pRVar9 = (this->fields).previewTexture;
    if (pRVar9 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
              ((Object_1 *)pRVar9,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
    pCVar4 = (this->fields).previewCam;
    if (pCVar4 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (pCVar4,(this->fields).previewTexture,(MethodInfo *)0x0);
    (this->fields)._PreviewGameObject_k__BackingField = woGameObjectCopy;
    func_?(&(this->fields)._PreviewGameObject_k__BackingField,woGameObjectCopy);
    pGVar7 = (this->fields)._PreviewGameObject_k__BackingField;
    values = (String__Array *)func_?(TypeInfo__System__String,6);
    if (values == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_Preview_ != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral_Preview_,(values->klass->_0).element_class),
       iVar10 == 0)) goto code_?;
    pSVar8 = StringLiteral_Preview_;
    if (values->max_length == 0) goto code_?;
    values->vector[0] = StringLiteral_Preview_;
    func_?(values->vector,pSVar8);
    if ((name != (String *)0x0) &&
       (iVar10 = func_?(name,(values->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    if (values->max_length < 2) goto code_?;
    values->vector[1] = name;
    func_?(values->vector + 1,name);
    if ((StringLiteral__Item_ != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral__Item_,(values->klass->_0).element_class),
       iVar10 == 0)) goto code_?;
    pSVar8 = StringLiteral__Item_;
    if (values->max_length < 3) goto code_?;
    values->vector[2] = StringLiteral__Item_;
    func_?(values->vector + 2,pSVar8);
    IStack_11.m_value = (wo->fields)._.itemId;
    pSVar8 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_11,(MethodInfo *)0x0);
    if ((pSVar8 != (String *)0x0) &&
       (iVar10 = func_?(pSVar8,(values->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    if (values->max_length < 4) goto code_?;
    values->vector[3] = pSVar8;
    func_?(values->vector + 3,pSVar8);
    if ((StringLiteral__woID_ != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral__woID_,(values->klass->_0).element_class),
       iVar10 == 0)) goto code_?;
    pSVar8 = StringLiteral__woID_;
    if (values->max_length < 5) goto code_?;
    values->vector[4] = StringLiteral__woID_;
    func_?(values->vector + 4,pSVar8);
    IStack_11.m_value = (wo->fields)._.id;
    pSVar8 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_11,(MethodInfo *)0x0);
    if ((pSVar8 == (String *)0x0) ||
       (iVar10 = func_?(pSVar8,(values->klass->_0).element_class), iVar10 != 0)) {
      if (values->max_length < 6) goto code_?;
      values->vector[5] = pSVar8;
      func_?(values->vector + 5,pSVar8);
      pSVar8 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
      if (pGVar7 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                  ((Object_1 *)pGVar7,pSVar8,(MethodInfo *)0x0);
        pGVar7 = (this->fields)._PreviewGameObject_k__BackingField;
        if ((pGVar7 != (GameObject *)0x0) &&
           (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar7,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar6,previewItemsRoot,(MethodInfo *)0x0);
          pGVar7 = (this->fields)._PreviewGameObject_k__BackingField;
          if (pGVar7 != (GameObject *)0x0) {
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar7,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Quaternion);
              cRam_? = '\x01';
            }
            if (pTVar6 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        (pTVar6,TypeInfo__UnityEngine__Quaternion->static_fields->
                                 identityQuaternion,(MethodInfo *)0x0);
              pGVar7 = (this->fields)._PreviewGameObject_k__BackingField;
              if ((pGVar7 != (GameObject *)0x0) &&
                 (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar7,(MethodInfo *)0x0),
                 pTVar6 != (Transform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar6,previewPosition,(MethodInfo *)0x0);
                pGVar7 = (this->fields)._PreviewGameObject_k__BackingField;
                if (pGVar7 != (GameObject *)0x0) {
                  pIVar12 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                      ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar7,
                                       UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                                      );
                  IStack_11.m_value = 0;
                  if (pIVar12 != (IEnumerable_1_System_Object_ *)0x0) {
                    for (; IStack_11.m_value < (int)pIVar12[1].monitor;
                        IStack_11.m_value = IStack_11.m_value + 1) {
                      if (pIVar12[1].monitor <= (uint)IStack_11.m_value) goto code_?;
                      this_02 = (&pIVar12[2].klass)[IStack_11.m_value];
                      if (this_02 == (IEnumerable_1_System_Object___Class *)0x0)
                      goto code_?;
                      x = (Object_1 *)
                          UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_GetComponent_1
                                    ((Component *)this_02,
                                     TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                                    );
                      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__UnityEngine__Object);
                      }
                      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_op_Inequality(x,(Object_1 *)0x0,(MethodInfo *)0x0);
                      if (bVar3 != 0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                                  ((Renderer *)this_02,0,(MethodInfo *)0x0);
                      }
                    }
                    pGVar7 = (this->fields)._PreviewGameObject_k__BackingField;
                    if (pGVar7 != (GameObject *)0x0) {
                      pIVar12 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                          ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar7,
                                           SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                          );
                      IStack_11.m_value = 0;
                      if (pIVar12 != (IEnumerable_1_System_Object_ *)0x0) {
                        for (; IStack_11.m_value < (int)pIVar12[1].monitor;
                            IStack_11.m_value = IStack_11.m_value + 1) {
                          if (pIVar12[1].monitor <= (uint)IStack_11.m_value) goto code_?;
                          if (((&pIVar12[2].klass)[IStack_11.m_value] ==
                               (IEnumerable_1_System_Object___Class *)0x0) ||
                             (this_03 = (Renderer *)
                                        UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_GetComponent_1
                                                  ((Component *)
                                                   (&pIVar12[2].klass)[IStack_11.m_value],
                                                                                                      
                                                  UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                                                  ), this_03 == (Renderer *)0x0))
                          goto code_?;
                          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                                    (this_03,0,(MethodInfo *)0x0);
                        }
                        pfVar13 = (float *)(*(wo->klass->vtable).GetLocalBounds.methodPtr)
                                                     (auStack_14,wo,2,
                                                      (wo->klass->vtable).GetLocalBounds.method);
                        puStack_1 = (undefined *)*pfVar13;
                        pGVar7 = (this->fields)._PreviewGameObject_k__BackingField;
                        if ((pGVar7 != (GameObject *)0x0) &&
                           (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_get_transform(pGVar7,(MethodInfo *)0x0),
                           pTVar6 != (Transform *)0x0)) {
                          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_localScale
                                              ((Vector3 *)&RStack_16,pTVar6,(MethodInfo *)0x0);
                          uVar17 = pVVar15->x;
                          uVar18 = pVVar15->y;
                          VStack_19.z = pVVar15->z;
                          VStack_19.x = (float)uVar17;
                          VStack_19.y = (float)uVar18;
                          iVar10 = func_?(TypeInfo__System__Single,3);
                          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_size
                                              ((Vector3 *)&RStack_16,(Bounds *)&puStack_1,
                                               (MethodInfo *)0x0);
                          if (iVar10 != 0) {
                            if (*(int *)(iVar10 + 0xc) == 0) goto code_?;
                            *(float *)(iVar10 + 0x10) = pVVar15->x;
                            pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::
                                      Bounds_get_size((Vector3 *)&RStack_16,(Bounds *)&puStack_1,
                                                      (MethodInfo *)0x0);
                            if (*(uint *)(iVar10 + 0xc) < 2) goto code_?;
                            *(float *)(iVar10 + 0x14) = pVVar15->y;
                            pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::
                                      Bounds_get_size((Vector3 *)&RStack_16,(Bounds *)&puStack_1,
                                                      (MethodInfo *)0x0);
                            if (*(uint *)(iVar10 + 0xc) < 3) goto code_?;
                            *(float *)(iVar10 + 0x18) = pVVar15->z;
                            uVar20 = *(uint *)(iVar10 + 0xc);
                            if (uVar20 != 0) {
                              fVar5 = *(float *)(iVar10 + 0x10);
                              uVar21 = 1;
                              if (1 < (int)uVar20) {
                                pfVar13 = (float *)(iVar10 + 0x14);
                                do {
                                  if (uVar20 <= uVar21) goto code_?;
                                  if (fVar5 < *pfVar13) {
                                    fVar5 = *pfVar13;
                                  }
                                  uVar21 = uVar21 + 1;
                                  pfVar13 = pfVar13 + 1;
                                } while ((int)uVar21 < (int)uVar20);
                              }
                            }
                            iVar10 = func_?(TypeInfo__System__Single,3);
                            pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::
                                      Bounds_get_size((Vector3 *)&RStack_16,(Bounds *)&puStack_1,
                                                      (MethodInfo *)0x0);
                            if (iVar10 == 0) goto code_?;
                            if (*(int *)(iVar10 + 0xc) == 0) goto code_?;
                            *(float *)(iVar10 + 0x10) = VStack_19.x * pVVar15->x;
                            pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::
                                      Bounds_get_size((Vector3 *)&RStack_16,(Bounds *)&puStack_1,
                                                      (MethodInfo *)0x0);
                            if (*(uint *)(iVar10 + 0xc) < 2) goto code_?;
                            *(float *)(iVar10 + 0x14) = VStack_19.y * pVVar15->y;
                            pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::
                                      Bounds_get_size((Vector3 *)&RStack_16,(Bounds *)&puStack_1,
                                                      (MethodInfo *)0x0);
                            if (*(uint *)(iVar10 + 0xc) < 3) goto code_?;
                            *(float *)(iVar10 + 0x18) = VStack_19.z * pVVar15->z;
                            uVar20 = *(uint *)(iVar10 + 0xc);
                            if (uVar20 == 0) {
                              fVar5 = 0.0;
                            }
                            else {
                              fVar5 = *(float *)(iVar10 + 0x10);
                              uVar21 = 1;
                              if (1 < (int)uVar20) {
                                pfVar13 = (float *)(iVar10 + 0x14);
                                do {
                                  if (uVar20 <= uVar21) goto code_?;
                                  if (fVar5 < *pfVar13) {
                                    fVar5 = *pfVar13;
                                  }
                                  uVar21 = uVar21 + 1;
                                  pfVar13 = pfVar13 + 1;
                                } while ((int)uVar21 < (int)uVar20);
                              }
                            }
                            fVar5 = _UNK_? / fVar5;
                            if (((wo->klass->_1).typeHierarchyDepth <
                                 (TypeInfo__MVMovingPlatformGroup->_1).typeHierarchyDepth) ||
                               ((MVMovingPlatformGroup__Class *)
                                (wo->klass->_1).typeHierarchy
                                [(TypeInfo__MVMovingPlatformGroup->_1).typeHierarchyDepth - 1] !=
                                TypeInfo__MVMovingPlatformGroup)) {
code_?:
                              pGVar7 = (this->fields)._PreviewGameObject_k__BackingField;
                              if (pGVar7 != (GameObject *)0x0) {
                                pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform(pGVar7,(MethodInfo *)0x0);
                                fStack_22 = VStack_19.z * fVar5;
                                uStack_23 = CONCAT44(VStack_19.y * fVar5,VStack_19.x * fVar5);
                                if (pTVar6 != (Transform *)0x0) {
                                  value.y = VStack_19.y * fVar5;
                                  value.x = VStack_19.x * fVar5;
                                  value.z = fStack_22;
                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_set_localScale(pTVar6,value,(MethodInfo *)0x0);
                                  pRVar24 = mscorlib.dll::System::Collections::Generic::
                                            KeyValuePair`2[System::Text::RegularExpressions::
                                            Regex+CachedCodeEntryKey,System::Object]::
                                            KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                                      (&RStack_16,
                                                       (
                                                  KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                                  *)&puStack_1,(MethodInfo *)0x0);
                                  fVar25 = VStack_19.x * (float)pRVar24->_options;
                                  pRVar24 = mscorlib.dll::System::Collections::Generic::
                                            KeyValuePair`2[System::Text::RegularExpressions::
                                            Regex+CachedCodeEntryKey,System::Object]::
                                            KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                                      (&RStack_16,
                                                       (
                                                  KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                                  *)&puStack_1,(MethodInfo *)0x0);
                                  fVar26 = VStack_19.y * (float)pRVar24->_cultureKey;
                                  pRVar24 = mscorlib.dll::System::Collections::Generic::
                                            KeyValuePair`2[System::Text::RegularExpressions::
                                            Regex+CachedCodeEntryKey,System::Object]::
                                            KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                                      (&RStack_16,
                                                       (
                                                  KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                                  *)&puStack_1,(MethodInfo *)0x0);
                                  fVar27 = VStack_19.z * (float)pRVar24->_pattern;
                                  pGVar7 = (this->fields)._PreviewGameObject_k__BackingField;
                                  if ((pGVar7 != (GameObject *)0x0) &&
                                     (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (pGVar7,(MethodInfo *)0x0),
                                     pTVar6 != (Transform *)0x0)) {
                                    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_get_position
                                                        ((Vector3 *)&RStack_16,pTVar6,
                                                         (MethodInfo *)0x0);
                                    uStack_23._0_4_ = pVVar15->x;
                                    uStack_23._4_4_ = pVVar15->y;
                                    fStack_22 = pVVar15->z;
                                    RStack_16._pattern = (String *)(fStack_22 + fVar27 * fVar5);
                                    (this->fields).pivotPoint.x = (float)uStack_23 + fVar25 * fVar5
                                    ;
                                    (this->fields).pivotPoint.y = uStack_23._4_4_ + fVar26 * fVar5;
                                    (this->fields).pivotPoint.z = (float)RStack_16._pattern;
                                    pGVar7 = (this->fields)._PreviewGameObject_k__BackingField;
                                    if (pGVar7 != (GameObject *)0x0) {
                                      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (pGVar7,(MethodInfo *)0x0);
                                      uVar28._0_4_ = (this->fields).pivotPoint.x;
                                      uVar28._4_4_ = (this->fields).pivotPoint.y;
                                      fVar5 = (this->fields).pivotPoint.z;
                                      VStack_19.y = (float)(undefined4)uVar28;
                                      VStack_19.z = (float)uVar28._4_4_;
                                      if (cRam_? == '\0') {
                                        func_?();
                                        uVar28 = CONCAT44(VStack_19.z,VStack_19.y);
                                        cRam_? = '\x01';
                                      }
                                      if (pTVar6 != (Transform *)0x0) {
                                        point.z = fVar5;
                                        point.x = (float)(int)uVar28;
                                        point.y = (float)(int)((ulonglong)uVar28 >> 0x20);
                                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_RotateAround
                                                  (pTVar6,point,
                                                   TypeInfo__UnityEngine__Vector3->static_fields->
                                                   upVector,180.0,(MethodInfo *)0x0);
                                        pCVar4 = (this->fields).previewCam;
                                        if (pCVar4 != (Camera *)0x0) {
                                          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Component::Component_get_transform
                                                              ((Component *)pCVar4,(MethodInfo *)0x0
                                                              );
                                          uVar29 = (this->fields).pivotPoint.x;
                                          uVar30 = (this->fields).pivotPoint.y;
                                          fStack_22 = (this->fields).inventoryItemStandardOffset.z;
                                          VStack_19.z = (this->fields).pivotPoint.z;
                                          uStack_23._0_4_ =
                                               (this->fields).inventoryItemStandardOffset.x;
                                          uStack_23._4_4_ =
                                               (this->fields).inventoryItemStandardOffset.y;
                                          RStack_16._cultureKey =
                                               (String *)(uStack_23._4_4_ + (float)uVar30);
                                          RStack_16._options =
                                               (int32_t)((float)uStack_23 + (float)uVar29);
                                          RStack_16._pattern = (String *)(fStack_22 + VStack_19.z);
                                          VStack_19.x = (float)uVar29;
                                          VStack_19.y = (float)uVar30;
                                          if (pTVar6 != (Transform *)0x0) {
                                            value_00.y = uStack_23._4_4_ + (float)uVar30;
                                            value_00.x = (float)uStack_23 + (float)uVar29;
                                            value_00.z = (float)RStack_16._pattern;
                                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_set_position
                                                      (pTVar6,value_00,(MethodInfo *)0x0);
                                            pCVar4 = (this->fields).previewCam;
                                            if ((pCVar4 != (Camera *)0x0) &&
                                               (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Component::Component_get_transform
                                                                    ((Component *)pCVar4,
                                                                     (MethodInfo *)0x0),
                                               pTVar6 != (Transform *)0x0)) {
                                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_LookAt_2(pTVar6,(this->fields).pivotPoint,
                                                                 (MethodInfo *)0x0);
                                              pCVar4 = (this->fields).previewCam;
                                              if (pCVar4 != (Camera *)0x0) {
                                                pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Component::Component_get_transform
                                                                    ((Component *)pCVar4,
                                                                     (MethodInfo *)0x0);
                                                pCVar4 = (this->fields).previewCam;
                                                if ((pCVar4 != (Camera *)0x0) &&
                                                   (pTVar31 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_transform
                                                                        ((Component *)pCVar4,
                                                                         (MethodInfo *)0x0),
                                                   pTVar31 != (Transform *)0x0)) {
                                                  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_get_localPosition
                                                                      ((Vector3 *)&RStack_16,pTVar31
                                                                       ,(MethodInfo *)0x0);
                                                  uStack_23._0_4_ = pVVar15->x;
                                                  uStack_23._4_4_ = pVVar15->y;
                                                  fStack_22 = pVVar15->z;
                                                  pCVar4 = (this->fields).previewCam;
                                                  if ((pCVar4 != (Camera *)0x0) &&
                                                     (pTVar31 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_transform
                                                                          ((Component *)pCVar4,
                                                                           (MethodInfo *)0x0),
                                                     pTVar31 != (Transform *)0x0)) {
                                                    pMVar32 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_worldToLocalMatrix
                                                                        ((Matrix4x4 *)
                                                                         &stack0xffffff30,pTVar31,
                                                                         (MethodInfo *)0x0);
                                                    pVVar15 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Matrix4x4::
                                                              Matrix4x4_MultiplyVector
                                                                        (&VStack_19,
                                                                         (Matrix4x4 *)
                                                                         &stack0xffffff70,
                                                                         (this->fields).
                                                                         previewCamOffset,
                                                                         (MethodInfo *)pMVar32->m33)
                                                    ;
                                                    RStack_16._options = (int32_t)pVVar15->x;
                                                    RStack_16._cultureKey = (String *)pVVar15->y;
                                                    RStack_16._pattern = (String *)pVVar15->z;
                                                    VStack_19.x = (float)RStack_16._options +
                                                                  (float)uStack_23;
                                                    VStack_19.y = (float)RStack_16._cultureKey +
                                                                  uStack_23._4_4_;
                                                    VStack_19.z = (float)RStack_16._pattern +
                                                                  fStack_22;
                                                    if (pTVar6 != (Transform *)0x0) {
                                                      value_01.y = VStack_19.y;
                                                      value_01.x = VStack_19.x;
                                                      value_01.z = VStack_19.z;
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_localPosition
                                                                (pTVar6,value_01,(MethodInfo *)0x0)
                                                      ;
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
                              pGVar7 = (this->fields)._PreviewGameObject_k__BackingField;
                              if (pGVar7 != (GameObject *)0x0) {
                                fVar25 = fVar5 * _UNK_?;
                                this_04 = (LineRenderer *)
                                          Newtonsoft::Json::Linq::LinqExtensions::
                                          LinqExtensions_Values_2
                                                    ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
                                                     pGVar7,
                                                  UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                                                  );
                                if (this_04 != (LineRenderer *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                                  LineRenderer_set_startWidth(this_04,fVar25,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                                  LineRenderer_set_endWidth(this_04,fVar25,(MethodInfo *)0x0);
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
      goto code_?;
    }
  }
  uVar2 = func_?(0);
  func_?(uVar2);
code_?:
  func_?();
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
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
         (int32_t)mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                            ((Void *)(this->fields).layersToRender,(MethodInfo *)0x0);
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
  this_00 = (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>
                           );
  if (this_00 != (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__Dictionary__
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
    Dictionary_2_System_Int32Enum_System_Single__Add
              ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,0x1a,50.0,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__Add_MVWorldObjectDocumentationType__float_
              );
    (this->fields).WorldObjectCameraFOVOverload = this_00;
    func_?(&(this->fields).WorldObjectCameraFOVOverload,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

