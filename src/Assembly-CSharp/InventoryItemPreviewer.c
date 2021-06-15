
/* Void Initialize(Int32, Int32, CameraClearFlags, LayerFlags, Vector3, Transform, Vector3, String,
   MVWorldObjectClient, GameObject) */

void Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer_Initialize
               (InventoryItemPreviewer *this,int32_t textureWidth,int32_t textureHeight,
               CameraClearFlags__Enum clearFlags,LayerFlags__Enum layersToRender,
               Vector3 cameraOffset,Transform *previewItemsRoot,Vector3 previewPosition,String *name
               ,MVWorldObjectClient *wo,GameObject *woGameObjectCopy,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  func_?(&fStack_8,0,0x40);
  this_02 = this;
  this_00 = (this->fields).WorldObjectCameraFOVOverload;
  (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  if ((wo == (MVWorldObjectClient *)0x0) ||
     (MVar9 = (*(code *)(wo->klass->vtable).get_DocumentationType.method)
                         (wo,(wo->klass->vtable).TraverseRecursiveTail.methodPtr),
     this_00 == (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)0x0)) {
code_?:
    func_?(0);
code_?:
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar10 = func_?(0);
    func_?(uVar10);
code_?:
    uVar11 = 0;
    uVar12 = 0;
    uVar10 = func_?();
    func_?(uVar10,uVar12,uVar11);
code_?:
    uVar11 = 0;
    uVar12 = 0;
    uVar10 = func_?();
    func_?(uVar10,uVar12,uVar11);
code_?:
    uVar11 = 0;
    uVar12 = 0;
    uVar10 = func_?();
    func_?(uVar10,uVar12,uVar11);
code_?:
    uVar12 = 0;
    uVar10 = func_?();
    uVar13 = CONCAT44(uVar12,uVar10);
    func_?(uVar10);
code_?:
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar10 = func_?(0);
    func_?(uVar10);
code_?:
    uVar10 = func_?(0);
    func_?(uVar10);
code_?:
    uVar10 = func_?(0);
    func_?(uVar10);
code_?:
    uVar13 = uVar13 & 0xffffffff00000000;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar10 = func_?(0,uVar13);
    func_?(uVar10);
  }
  else {
    bVar14 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[MVWorldObjectDocumentationType,System::Single]::
             Dictionary_2_MVWorldObjectDocumentationType_System_Single__ContainsKey
                       (this_00,MVar9,
                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__ContainsKey_MVWorldObjectDocumentationType_
                       );
    if (bVar14 != 0) {
      layersToRender = (LayerFlags__Enum)(this_02->fields).WorldObjectCameraFOVOverload;
      pCVar15 = (this_02->fields).previewCam;
      MVar9 = (*(code *)(wo->klass->vtable).get_DocumentationType.method)
                         (wo,(wo->klass->vtable).TraverseRecursiveTail.methodPtr);
      if ((layersToRender == 0) ||
         (layersToRender =
               (LayerFlags__Enum)
               mscorlib.dll::System::Collections::Generic::
               Dictionary`2[MVWorldObjectDocumentationType,System::Single]::
               Dictionary_2_MVWorldObjectDocumentationType_System_Single__get_Item
                         ((Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)
                          layersToRender,MVar9,
                          MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__get_Item_MVWorldObjectDocumentationType_
                         ), pCVar15 == (Camera *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                (pCVar15,(float)layersToRender,(MethodInfo *)0x0);
    }
    (this_02->fields).previewCamOffset.x = cameraOffset.x;
    (this_02->fields).previewCamOffset.y = cameraOffset.y;
    (this_02->fields).previewCamOffset.z = cameraOffset.z;
    pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_02,(MethodInfo *)0x0);
    if (pTVar16 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar16,previewItemsRoot,(MethodInfo *)0x0);
    layersToRender =
         (LayerFlags__Enum)
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this_02,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar17 = mscorlib.dll::System::String::String_Format
                        (StringLiteral_Preview__0__RenderCam,(Object *)name,(MethodInfo *)0x0);
    if (layersToRender == 0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)layersToRender,pSVar17,(MethodInfo *)0x0);
    layersToRender =
         (LayerFlags__Enum)
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this_02,(MethodInfo *)0x0);
    value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Preview,(MethodInfo *)0x0);
    if (layersToRender == 0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              ((GameObject *)layersToRender,value,(MethodInfo *)0x0);
    pRVar18 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_GetTemporary_1
                        (textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
                         RenderTextureReadWrite__Enum_Default,2,(MethodInfo *)0x0);
    (this_02->fields).previewTexture = pRVar18;
    if (pRVar18 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)pRVar18,name,(MethodInfo *)0x0);
    pRVar18 = (this_02->fields).previewTexture;
    if (pRVar18 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
              ((Texture *)pRVar18,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
    pRVar18 = (this_02->fields).previewTexture;
    if (pRVar18 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
              ((Object_1 *)pRVar18,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
    pCVar15 = (this_02->fields).previewCam;
    if (pCVar15 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (pCVar15,(this_02->fields).previewTexture,(MethodInfo *)0x0);
    (this_02->fields)._PreviewGameObject_k__BackingField = woGameObjectCopy;
    args = (Object__Array *)func_?(TypeInfo__System__Object,6);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((StringLiteral_Preview_ != (String *)0x0) &&
       (iVar19 = func_?(StringLiteral_Preview_,(args->klass->_0).element_class),
       iVar19 == 0)) goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_Preview_;
    if ((name != (String *)0x0) &&
       (iVar19 = func_?(name,(args->klass->_0).element_class), iVar19 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)name;
    if ((StringLiteral__Item_ != (String *)0x0) &&
       (iVar19 = func_?(StringLiteral__Item_,(args->klass->_0).element_class), iVar19 == 0)
       ) goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral__Item_;
    this = (InventoryItemPreviewer *)
           System.dll::System::Collections::Generic::
           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
           Single,System::Object]::
           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                     ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                       *)wo,(MethodInfo *)0x0);
    layersToRender = func_?(TypeInfo__System__Int32,&this);
    if ((layersToRender != 0) && (iVar19 = func_?(), iVar19 == 0)) goto code_?;
    if (args->max_length < 4) goto code_?;
    args->vector[3] = (Object *)layersToRender;
    if ((StringLiteral__woID_ != (String *)0x0) && (iVar19 = func_?(), iVar19 == 0))
    goto code_?;
    if (args->max_length < 5) goto code_?;
    args->vector[4] = (Object *)StringLiteral__woID_;
    pIStack_20 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
    uVar13 = ZEXT48(TypeInfo__System__Int32) << 0x20;
    pOVar21 = (Object *)func_?();
    if ((pOVar21 != (Object *)0x0) &&
       (iVar19 = func_?(pOVar21,(args->klass->_0).element_class), iVar19 == 0))
    goto code_?;
    if (args->max_length < 6) goto code_?;
    args->vector[5] = pOVar21;
    pSVar17 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
    if (woGameObjectCopy == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
              ((Object_1 *)woGameObjectCopy,pSVar17,(MethodInfo *)0x0);
    pGVar22 = (this_02->fields)._PreviewGameObject_k__BackingField;
    if ((pGVar22 == (GameObject *)0x0) ||
       (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar22,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar16,previewItemsRoot,(MethodInfo *)0x0);
    pGVar22 = (this_02->fields)._PreviewGameObject_k__BackingField;
    if (pGVar22 == (GameObject *)0x0) goto code_?;
    pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar22,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    pQVar23 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                        ((Quaternion *)auStack_24,(MethodInfo *)0x0);
    if (pTVar16 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar16,*pQVar23,(MethodInfo *)0x0);
    pGVar22 = (this_02->fields)._PreviewGameObject_k__BackingField;
    if ((pGVar22 == (GameObject *)0x0) ||
       (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar22,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar16,previewPosition,(MethodInfo *)0x0);
    pGVar22 = (this_02->fields)._PreviewGameObject_k__BackingField;
    if (pGVar22 == (GameObject *)0x0) goto code_?;
    pUStack_25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_29
                           (pGVar22,
                            UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                           );
    uVar26 = 0;
    if (pUStack_25 == (UseInteratorVisualization__Array *)0x0) goto code_?;
    layersToRender = (LayerFlags__Enum)pUStack_25->vector;
    while( true ) {
      if ((int)pUStack_25->max_length <= (int)uVar26) break;
      if (pUStack_25->max_length <= uVar26) goto code_?;
      this_01 = *(UseInteratorVisualization **)layersToRender;
      if (this_01 == (UseInteratorVisualization *)0x0) goto code_?;
      pMStack_27 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                             ((Component_1 *)this_01,
                              TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                             );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      uVar13 = 0;
      bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pMStack_27,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar14 != 0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)this_01,0,(MethodInfo *)0x0);
      }
      uVar26 = uVar26 + 1;
      layersToRender = layersToRender + LayerFlags__Enum_IgnoreRaycast;
    }
    pGVar22 = (this_02->fields)._PreviewGameObject_k__BackingField;
    if (pGVar22 == (GameObject *)0x0) goto code_?;
    uVar28 = CONCAT44((int)(uVar13 >> 0x20),
                      SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                     );
    layersToRender =
         (LayerFlags__Enum)
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_29
                   (pGVar22,
                    SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                   );
    uVar26 = 0;
    if ((UseInteratorVisualization__Array *)layersToRender ==
        (UseInteratorVisualization__Array *)0x0) goto code_?;
    ppUVar29 = ((UseInteratorVisualization__Array *)layersToRender)->vector;
    while( true ) {
      uVar10 = (undefined4)((ulonglong)uVar28 >> 0x20);
      if ((int)*(uint *)(layersToRender + 0xc) <= (int)uVar26) break;
      if (*(uint *)(layersToRender + 0xc) <= uVar26) goto code_?;
      if ((*ppUVar29 == (UseInteratorVisualization *)0x0) ||
         (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                              ((Component_1 *)*ppUVar29,
                               UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                              ), this_03 == (MVInteractableBase *)0x0)) goto code_?;
      uVar28 = 0;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)this_03,0,(MethodInfo *)0x0);
      uVar26 = uVar26 + 1;
      ppUVar29 = ppUVar29 + 1;
    }
    puVar30 = (undefined4 *)
              (*(code *)(wo->klass->vtable).GetLocalBounds.method)
                        (auStack_31,wo,2,(wo->klass->vtable).Select.methodPtr);
    uStack_3 = *puVar30;
    uStack_4 = puVar30[1];
    uStack_5 = puVar30[2];
    uStack_6 = puVar30[3];
    uStack_2 = *(undefined8 *)(puVar30 + 4);
    pGVar22 = (this_02->fields)._PreviewGameObject_k__BackingField;
    if ((pGVar22 == (GameObject *)0x0) ||
       (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar22,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0))
    goto code_?;
    pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        (&VStack_33,pTVar16,(MethodInfo *)0x0);
    uVar13 = CONCAT44(uVar10,3);
    uStack_34._0_4_ = pVVar32->x;
    uStack_34._4_4_ = pVVar32->y;
    this = (InventoryItemPreviewer *)pVVar32->z;
    pIStack_35 = this;
    uStack_36 = (float)uStack_34;
    pUStack_25 = (UseInteratorVisualization__Array *)uStack_34._4_4_;
    pSVar37 = (Single__Array *)func_?(TypeInfo__System__Single,3);
    puVar38 = (undefined8 *)func_?(&VStack_33,&uStack_3,0);
    uStack_39 = *puVar38;
    fStack_40 = *(float *)(puVar38 + 1);
    if (pSVar37 == (Single__Array *)0x0) goto code_?;
    uVar13 = uVar13 & 0xffffffff00000000;
    if (pSVar37->max_length == 0) goto code_?;
    pSVar37->vector[0] = (float)uStack_39;
    puVar38 = (undefined8 *)func_?(&VStack_33,&uStack_3,0);
    uStack_39 = *puVar38;
    fStack_40 = *(float *)(puVar38 + 1);
    uVar13 = uVar13 & 0xffffffff00000000;
    if (pSVar37->max_length < 2) goto code_?;
    uStack_39._4_4_ = (float)((ulonglong)uStack_39 >> 0x20);
    pSVar37->vector[1] = uStack_39._4_4_;
    puVar38 = (undefined8 *)func_?(&VStack_33,&uStack_3,0);
    uVar10 = (undefined4)(uVar13 >> 0x20);
    uStack_39 = *puVar38;
    fStack_40 = *(float *)(puVar38 + 1);
    if (pSVar37->max_length < 3) goto code_?;
    pSVar37->vector[2] = fStack_40;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_1(pSVar37,(MethodInfo *)0x0);
    uVar13 = CONCAT44(uVar10,3);
    pSVar37 = (Single__Array *)func_?(TypeInfo__System__Single,3);
    puVar38 = (undefined8 *)func_?(&VStack_33,&uStack_3,0);
    uStack_39 = *puVar38;
    fStack_40 = *(float *)(puVar38 + 1);
    if (pSVar37 == (Single__Array *)0x0) goto code_?;
    uVar13 = uVar13 & 0xffffffff00000000;
    if (pSVar37->max_length == 0) goto code_?;
    pSVar37->vector[0] = (float)uStack_34 * (float)uStack_39;
    puVar38 = (undefined8 *)func_?(&VStack_33,&uStack_3,0);
    uStack_39 = *puVar38;
    fStack_40 = *(float *)(puVar38 + 1);
    if (1 < pSVar37->max_length) {
      uStack_39._4_4_ = (float)((ulonglong)uStack_39 >> 0x20);
      pSVar37->vector[1] = uStack_34._4_4_ * uStack_39._4_4_;
      puVar38 = (undefined8 *)func_?(&VStack_33,&uStack_3,0);
      uStack_39 = *puVar38;
      fStack_40 = *(float *)(puVar38 + 1);
      if (pSVar37->max_length < 3) goto code_?;
      pSVar37->vector[2] = (float)pIStack_35 * fStack_40;
      fVar41 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_1
                         (pSVar37,(MethodInfo *)0x0);
      fVar41 = (this_02->fields).previewObjMaxSize / fVar41;
      bVar42 = (TypeInfo__MVMovingPlatformGroup->_1).naturalAligment;
      if (((wo->klass->_1).naturalAligment < bVar42) ||
         ((MVMovingPlatformGroup__Class *)(wo->klass->_1).typeHierarchy[bVar42 - 1] !=
          TypeInfo__MVMovingPlatformGroup)) {
        bVar43 = false;
      }
      else {
        bVar43 = true;
      }
      pMVar44 = (MVWorldObjectClient *)0x0;
      if (bVar43) {
        pMVar44 = wo;
      }
      if (pMVar44 == (MVWorldObjectClient *)0x0) {
code_?:
        pGVar22 = (this_02->fields)._PreviewGameObject_k__BackingField;
        if (pGVar22 != (GameObject *)0x0) {
          pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar22,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          a_02.y = (float)pUStack_25;
          a_02.x = (float)uStack_36;
          a_02.z = (float)this;
          pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                              (&VStack_33,a_02,fVar41,(MethodInfo *)0x0);
          if (pTVar16 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar16,*pVVar32,(MethodInfo *)0x0);
            puVar38 = (undefined8 *)func_?(&uStack_39,&uStack_3,0);
            VStack_33._0_8_ = *puVar38;
            puVar38 = (undefined8 *)func_?(&uStack_39,&uStack_3,0);
            pUStack_25 = *(UseInteratorVisualization__Array **)(puVar38 + 1);
            uStack_45 = (undefined4)*puVar38;
            uStack_36 = (undefined4)((ulonglong)*puVar38 >> 0x20);
            puVar38 = (undefined8 *)func_?(auStack_24 + 4,&uStack_3,0);
            uStack_39 = *puVar38;
            fStack_40 = *(float *)(puVar38 + 1);
            func_?();
            a.z = fStack_1;
            a.x = (float)(undefined4)uStack_7;
            a.y = (float)uStack_7._4_4_;
            pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                ((Vector3 *)(auStack_24 + 4),a,fVar41,(MethodInfo *)0x0);
            uVar46 = pVVar32->x;
            uVar47 = pVVar32->y;
            fVar41 = pVVar32->z;
            pGVar22 = (this_02->fields)._PreviewGameObject_k__BackingField;
            uStack_36 = uVar46;
            pUStack_25 = (UseInteratorVisualization__Array *)uVar47;
            if ((pGVar22 != (GameObject *)0x0) &&
               (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar22,(MethodInfo *)0x0),
               pTVar16 != (Transform *)0x0)) {
              pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)(auStack_24 + 4),pTVar16,(MethodInfo *)0x0);
              a_00.y = (float)pUStack_25;
              a_00.x = (float)uStack_36;
              a_00.z = fVar41;
              pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                  ((Vector3 *)(auStack_24 + 4),a_00,*pVVar32,(MethodInfo *)0x0);
              fVar48 = pVVar32->y;
              fVar41 = pVVar32->z;
              (this_02->fields).pivotPoint.x = pVVar32->x;
              (this_02->fields).pivotPoint.y = fVar48;
              (this_02->fields).pivotPoint.z = fVar41;
              pGVar22 = (this_02->fields)._PreviewGameObject_k__BackingField;
              if (pGVar22 != (GameObject *)0x0) {
                pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar22,(MethodInfo *)0x0);
                uVar49 = (this_02->fields).pivotPoint.x;
                uVar50 = (this_02->fields).pivotPoint.y;
                fVar41 = (this_02->fields).pivotPoint.z;
                uStack_36 = uVar49;
                pUStack_25 = (UseInteratorVisualization__Array *)uVar50;
                pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                    ((Vector3 *)(auStack_24 + 4),(MethodInfo *)0x0);
                if (pTVar16 != (Transform *)0x0) {
                  point.y = (float)pUStack_25;
                  point.x = (float)uStack_36;
                  point.z = fVar41;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                            (pTVar16,point,*pVVar32,180.0,(MethodInfo *)0x0);
                  pCVar15 = (this_02->fields).previewCam;
                  if (pCVar15 != (Camera *)0x0) {
                    pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_transform((Component_1 *)pCVar15,(MethodInfo *)0x0);
                    pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                        ((Vector3 *)(auStack_24 + 4),(this_02->fields).pivotPoint,
                                         (this_02->fields).inventoryItemStandardOffset,
                                         (MethodInfo *)0x0);
                    if (pTVar16 != (Transform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                (pTVar16,*pVVar32,(MethodInfo *)0x0);
                      pCVar15 = (this_02->fields).previewCam;
                      if ((pCVar15 != (Camera *)0x0) &&
                         (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_1_get_transform
                                              ((Component_1 *)pCVar15,(MethodInfo *)0x0),
                         pTVar16 != (Transform *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                                  (pTVar16,(this_02->fields).pivotPoint,(MethodInfo *)0x0);
                        pCVar15 = (this_02->fields).previewCam;
                        if (pCVar15 != (Camera *)0x0) {
                          pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_1_get_transform
                                              ((Component_1 *)pCVar15,(MethodInfo *)0x0);
                          pCVar15 = (this_02->fields).previewCam;
                          if ((pCVar15 != (Camera *)0x0) &&
                             (pTVar51 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_1_get_transform
                                                  ((Component_1 *)pCVar15,(MethodInfo *)0x0),
                             pTVar51 != (Transform *)0x0)) {
                            pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_get_localPosition
                                                ((Vector3 *)(auStack_24 + 4),pTVar51,
                                                 (MethodInfo *)0x0);
                            uVar52 = pVVar32->x;
                            uVar53 = pVVar32->y;
                            fVar41 = pVVar32->z;
                            pCVar15 = (this_02->fields).previewCam;
                            uStack_36 = uVar52;
                            pUStack_25 = (UseInteratorVisualization__Array *)uVar53;
                            if ((pCVar15 != (Camera *)0x0) &&
                               (pTVar51 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_1_get_transform
                                                    ((Component_1 *)pCVar15,(MethodInfo *)0x0),
                               pTVar51 != (Transform *)0x0)) {
                              pMVar54 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_worldToLocalMatrix
                                                  ((Matrix4x4 *)&stack0xffffff08,pTVar51,
                                                   (MethodInfo *)0x0);
                              fStack_8 = pMVar54->m00;
                              fStack_55 = pMVar54->m10;
                              fStack_56 = pMVar54->m20;
                              fStack_57 = pMVar54->m30;
                              fStack_58 = pMVar54->m01;
                              fStack_59 = pMVar54->m11;
                              fStack_60 = pMVar54->m21;
                              fStack_61 = pMVar54->m31;
                              fStack_62 = pMVar54->m02;
                              fStack_63 = pMVar54->m12;
                              fStack_64 = pMVar54->m22;
                              fStack_65 = pMVar54->m32;
                              fStack_66 = pMVar54->m03;
                              fStack_67 = pMVar54->m13;
                              fStack_68 = pMVar54->m23;
                              fStack_69 = pMVar54->m33;
                              uVar28._0_4_ = (this_02->fields).previewCamOffset.x;
                              uVar28._4_4_ = (this_02->fields).previewCamOffset.y;
                              pVVar32 = (Vector3 *)
                                        func_?(auStack_24 + 4,&fStack_8,uVar28,
                                                        (this_02->fields).previewCamOffset.z,0);
                              a_01.y = (float)pUStack_25;
                              a_01.x = (float)uStack_36;
                              a_01.z = fVar41;
                              pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                        Vector3_op_Addition((Vector3 *)(auStack_24 + 4),a_01,
                                                            *pVVar32,(MethodInfo *)0x0);
                              if (pTVar16 != (Transform *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_set_localPosition(pTVar16,*pVVar32,(MethodInfo *)0x0);
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
        pGVar22 = (this_02->fields)._PreviewGameObject_k__BackingField;
        if (pGVar22 != (GameObject *)0x0) {
          this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_GetComponentsInChildren_29
                              (pGVar22,
                               UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                              );
          layersToRender = (LayerFlags__Enum)(fVar41 * _UNK_?);
          if (this_04 != (UseInteratorVisualization__Array *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                      ((LineRenderer *)this_04,(float)layersToRender,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                      ((LineRenderer *)this_04,(float)layersToRender,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
      goto code_?;
    }
  }
  uVar10 = func_?(0);
  func_?(uVar10);
code_?:
  uVar10 = func_?(0);
  func_?(uVar10);
  pcVar70 = (code *)swi(3);
  (*pcVar70)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer_OnDestroy
               (InventoryItemPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).previewCam;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                  ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPreCull() */

void Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer_OnPreCull
               (InventoryItemPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._PreviewGameObject_k__BackingField;
  if (this_00 != (GameObject *)0x0) {
    transfrom = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
    layersToChange.m_Mask =
         (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                            ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                              *)(this->fields).layersToRender,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
    if (rotateSpeed <= _UNK_?) {
      rotateSpeed = (this->fields).previewItemRotateSpeed;
    }
    axis = *pVVar4;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      point.y = 0.0;
      point.x = fVar5 * rotateSpeed;
      point.z = fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                (this_00,point,axis,fVar5 * rotateSpeed,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* InventoryItemPreviewer() */

void Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer__ctor
               (InventoryItemPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).previewObjMaxSize = 2.0;
  (this->fields).previewItemRotateSpeed = 9.3;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields).previewCamOffset.x = pVVar1->x;
  (this->fields).previewCamOffset.y = fVar2;
  (this->fields).previewCamOffset.z = fVar3;
  uStack_4 = 0;
  fStack_5 = 0.0;
  func_?(&uStack_4,0x40923d71,0x40000000,0x3e19999a,0);
  (this->fields).inventoryItemStandardOffset.x = (float)(undefined4)uStack_4;
  (this->fields).inventoryItemStandardOffset.y = (float)uStack_4._4_4_;
  (this->fields).inventoryItemStandardOffset.z = fStack_5;
  this_00 = (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__Dictionary__
            );
  if (this_00 != (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Single]::Dictionary_2_MVWorldObjectDocumentationType_System_Single__Add
              (this_00,MVWorldObjectDocumentationType__Enum_HamsterBall,50.0,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__Add_MVWorldObjectDocumentationType__float_
              );
    (this->fields).WorldObjectCameraFOVOverload = this_00;
    UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* GameObject get_PreviewGameObject() */

GameObject *
Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
          (InventoryItemPreviewer *this,MethodInfo *method)

{
  return (this->fields)._PreviewGameObject_k__BackingField;
}


/* Void set_PreviewGameObject(GameObject) */

void Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer_set_PreviewGameObject
               (InventoryItemPreviewer *this,GameObject *value,MethodInfo *method)

{
  (this->fields)._PreviewGameObject_k__BackingField = value;
  return;
}

