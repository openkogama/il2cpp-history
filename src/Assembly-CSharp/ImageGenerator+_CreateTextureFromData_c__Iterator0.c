
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ImageGenerator+<CreateTextureFromData>c__Iterator0::
     ImageGenerator_CreateTextureFromData_c_Iterator0_MoveNext
               (ImageGenerator_CreateTextureFromData_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    (this->fields)._textureSize___0 = 0x200;
    pTVar2 = (Texture2D *)func_?(TypeInfo__UnityEngine__Texture2D);
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_1
              (pTVar2,0x200,0x200,TextureFormat__Enum_RGB24,0,(MethodInfo *)0x0);
    (this->fields)._previewTexture___0 = pTVar2;
    pGVar3 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (pGVar3,StringLiteral_Item_Preview,(MethodInfo *)0x0);
    pMVar4 = (this->fields).wo;
    (this->fields)._previewRoot___0 = pGVar3;
    if ((pMVar4 != (MVWorldObjectClient *)0x0) &&
       (pCVar5 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)pMVar4,(MethodInfo *)0x0),
       pCVar5 != (CelestialParam *)0x0)) {
      pUVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_GetComponentsInChildren_29
                          ((GameObject *)pCVar5,
                           MVComponent__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<MVComponent>______
                          );
      (this->fields)._locvar1 = 0;
      (this->fields)._mvComponents___0 = (MVComponent__Array *)pUVar6;
      (this->fields)._locvar0 = (MVComponent__Array *)pUVar6;
      if (pUVar6 != (UseInteratorVisualization__Array *)0x0) {
        uVar7 = 0;
        do {
          if ((int)pUVar6->max_length <= (int)uVar7) {
            pMVar4 = (this->fields).wo;
            if (pMVar4 != (MVWorldObjectClient *)0x0) {
              pCVar5 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                 ((DayNightCycle *)pMVar4,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              pXVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                  ((XpBoostParticlePreviewer *)pCVar5,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                  );
              pMVar9 = (this->fields)._mvComponents___0;
              (this->fields)._itemCopy___0 = (GameObject *)pXVar8;
              (this->fields)._locvar2 = pMVar9;
              (this->fields)._locvar3 = 0;
              if (pMVar9 != (MVComponent__Array *)0x0) {
                uVar7 = 0;
                goto code_?;
              }
            }
            break;
          }
          if (pUVar6 == (UseInteratorVisualization__Array *)0x0) break;
          if (pUVar6->max_length <= uVar7) goto code_?;
          if (pUVar6->vector[uVar7] == (UseInteratorVisualization *)0x0) break;
          *(undefined1 *)&(pUVar6->vector[uVar7]->fields).useRequirements = 0;
          uVar7 = (this->fields)._locvar1 + 1;
          (this->fields)._locvar1 = uVar7;
          pUVar6 = (UseInteratorVisualization__Array *)(this->fields)._locvar0;
        } while (pUVar6 != (UseInteratorVisualization__Array *)0x0);
      }
    }
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    this_00 = (Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)
              (this->fields)._objectPreviewer___0;
    if (this_00 != (Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)0x0) {
      value = (RenderTexture *)
              System.Core.dll::System::Linq::Enumerable+<CreateUnionIterator>c__Iterator1C`1[System
              ::Object]::
              Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                        (this_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                (value,(MethodInfo *)0x0);
      pTVar2 = (this->fields)._previewTexture___0;
      VStack_10.x = 0.0;
      VStack_10.y = 0.0;
      VStack_10.z = 0.0;
      fVar11 = (float)(this->fields)._textureSize___0;
      uStack_12 = 0;
      func_?(&uStack_12,0,0,fVar11,fVar11);
      if (pTVar2 != (Texture2D *)0x0) {
        source.m_YMin = VStack_10.x;
        source.m_XMin = (float)uStack_12;
        source.m_Width = VStack_10.y;
        source.m_Height = VStack_10.z;
        UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                  (pTVar2,source,0,0,(MethodInfo *)0x0);
        pTVar2 = (this->fields)._previewTexture___0;
        if (pTVar2 != (Texture2D *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                    (pTVar2,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                    ((RenderTexture *)0x0,(MethodInfo *)0x0);
          pGVar3 = (this->fields)._previewRoot___0;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar3,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)(this->fields)._itemCopy___0,(MethodInfo *)0x0);
          pOVar13 = (this->fields)._objectPreviewer___0;
          if (pOVar13 != (ObjectPreviewer *)0x0) {
            ObjectPreviewer::ObjectPreviewer_Destroy(pOVar13,(MethodInfo *)0x0);
            this_03 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
                      ImageConversion_EncodeToPNG
                                ((this->fields)._previewTexture___0,(MethodInfo *)0x0);
            this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_
                       *)(this->fields).callback;
            (this->fields)._bytes___0 = this_03;
            if ((this_03 != (Byte__Array *)0x0) &&
               (pOVar14 = mscorlib.dll::System::Array::Array_Clone
                                   ((Array *)this_03,(MethodInfo *)0x0),
               pBVar15 = TypeInfo__System__Byte,
               this_01 !=
               (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0)
               ) {
              obj = (Dictionary_2_System_String_System_Object_ *)0x0;
              if ((pOVar14 == (Object *)0x0) ||
                 (obj = (Dictionary_2_System_String_System_Object_ *)
                        func_?(pOVar14,TypeInfo__System__Byte),
                 obj != (Dictionary_2_System_String_System_Object_ *)0x0)) {
                mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
                String,System::Object]]::
                Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                          (this_01,obj,
                           MethodInfo__System__Action<System::Byte_[]>__Invoke_System__Byte____);
                (this->fields)._PC = -1;
                return 0;
              }
              func_?(pOVar14,pBVar15);
            }
          }
        }
      }
    }
  }
  goto code_?;
  while( true ) {
    if (pMVar9 == (MVComponent__Array *)0x0) break;
    if (pMVar9->max_length <= uVar7) goto code_?;
    if (pMVar9->vector[uVar7] == (MVComponent *)0x0) break;
    (pMVar9->vector[uVar7]->fields).findWorldObjectParent = 1;
    uVar7 = (this->fields)._locvar3 + 1;
    (this->fields)._locvar3 = uVar7;
    pMVar9 = (this->fields)._locvar2;
    if (pMVar9 == (MVComponent__Array *)0x0) break;
code_?:
    if ((int)pMVar9->max_length <= (int)uVar7) {
      this_02 = (PrefabPool *)(this->fields).wo;
      textureSize = (this->fields)._textureSize___0;
      if (this_02 != (PrefabPool *)0x0) {
        pOStack_16 = PrefabPool::PrefabPool_get_MVSpawnPointYellowPrefab(this_02,(MethodInfo *)0x0);
        fStack_17 = 0.0;
        uStack_18 = 0;
        func_?(&uStack_18,0x3f99999a,0x3dcccccd,0x3e99999a,0);
        pGVar3 = (this->fields)._previewRoot___0;
        if (pGVar3 != (GameObject *)0x0) {
          previewItemsRoot =
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar3,(MethodInfo *)0x0);
          pGVar3 = (this->fields)._itemCopy___0;
          if ((pGVar3 != (GameObject *)0x0) &&
             (this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar3,(MethodInfo *)0x0),
             this_04 != (Transform *)0x0)) {
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_10,this_04,(MethodInfo *)0x0);
            uStack_20._0_4_ = pVVar19->x;
            uStack_20._4_4_ = pVVar19->y;
            fStack_21 = pVVar19->z;
            pMStack_22 = (this->fields).wo;
            pGVar3 = (this->fields)._itemCopy___0;
            if ((((uint)(TypeInfo__ObjectPreviewer->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__ObjectPreviewer->_1).cctor_started == 0)) {
              func_?(TypeInfo__ObjectPreviewer);
            }
            cameraOffset.z = fStack_17;
            cameraOffset.x = (float)(undefined4)uStack_18;
            cameraOffset.y = (float)uStack_18._4_4_;
            previewPosition.z = fStack_21;
            previewPosition.x = (float)(undefined4)uStack_20;
            previewPosition.y = (float)uStack_20._4_4_;
            pOVar13 = ObjectPreviewer::ObjectPreviewer_Create_1
                                (textureSize,CameraClearFlags__Enum_Skybox,
                                 (LayerFlags__Enum)pOStack_16,cameraOffset,previewItemsRoot,
                                 previewPosition,StringLiteral_Model_preview,pMStack_22,pGVar3,
                                 (MethodInfo *)0x0);
            (this->fields)._objectPreviewer___0 = pOVar13;
            uStack_23 = 0;
            pOVar14 = (Object *)func_?(TypeInfo__System__Int32,&uStack_23);
            (this->fields)._current = pOVar14;
            if ((this->fields)._disposing == 0) {
              (this->fields)._PC = 1;
            }
            return 1;
          }
        }
      }
      break;
    }
  }
code_?:
  func_?(0);
code_?:
  uVar24 = func_?(0,0);
  func_?(uVar24);
  pcVar25 = (code *)swi(3);
  bVar26 = (*pcVar25)();
  return bVar26;
}


/* Void Reset() */

void Assembly-CSharp.dll::ImageGenerator+<CreateTextureFromData>c__Iterator0::
     ImageGenerator_CreateTextureFromData_c_Iterator0_Reset
               (ImageGenerator_CreateTextureFromData_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

