
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ImageGenerator+<CreateTextureFromData>d__0::ImageGenerator_CreateTextureFromData_d_0_MoveNext(ImageGenerator_CreateTextureFromData_d_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&MVComponent__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<MVComponent>______);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ObjectPreviewer);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Texture2D);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Item_Preview);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Model_preview);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    pTVar2 = (Texture2D *)FUN_?(TypeInfo__UnityEngine__Texture2D);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Texture);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar3 = (Object *)0x0;
    auStack_4._0_4_ = 0.0;
    auStack_4._4_4_ = 0.0;
    auStack_4._8_8_ = (String *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor(pTVar2,0x200,0x200,TextureFormat__Enum_ARGB32,1,0,(void *)0x0,0,(MipmapLimitDescriptor *)auStack_4,(MethodInfo *)0x0);
    bVar5 = iRam_? != 0;
    (this->fields)._previewTexture_5__2 = pTVar2;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields)._previewTexture_5__2 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pGVar10 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
    pSVar11 = StringLiteral_Item_Preview;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject(pGVar10,pSVar11,(MethodInfo *)0x0);
    bVar5 = iRam_? != 0;
    (this->fields)._previewRoot_5__3 = pGVar10;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields)._previewRoot_5__3 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pMVar12 = MVComponent__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<MVComponent>______;
    pMVar13 = (this->fields).wo;
    if ((pMVar13 != (MVWorldObjectClient *)0x0) && (pGVar10 = (pMVar13->fields).gameObject, pGVar10 != (GameObject *)0x0)) {
      if ((MVComponent__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<MVComponent>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(MVComponent__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<MVComponent>______);
      }
      p_Var13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar10,0,((pMVar12->field7_0x38).rgctx_data)->method);
      if (p_Var13 != (_Il2CppFullySharedGenericType__Array *)0x0) {
        pp_Var23 = p_Var13->vector;
        pOVar14 = pOVar3;
        while (uVar6 = (uint)pOVar14, (int)uVar6 < (int)p_Var13->max_length) {
          if ((uint)p_Var13->max_length <= uVar6) goto code_?;
          if (*pp_Var23 == (_Il2CppFullySharedGenericType *)0x0) goto code_?;
          *(undefined1 *)&(*pp_Var23)[2].klass = 0;
          pp_Var23 = pp_Var23 + 1;
          pOVar14 = (Object *)(ulonglong)(uVar6 + 1);
        }
        pMVar13 = (this->fields).wo;
        if (pMVar13 != (MVWorldObjectClient *)0x0) {
          pGVar10 = (pMVar13->fields).gameObject;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pGVar10 = (GameObject *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pGVar10,UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_);
          bVar5 = iRam_? != 0;
          (this->fields)._itemCopy_5__4 = pGVar10;
          if (bVar5) {
            uVar6 = (uint)((ulonglong)&(this->fields)._itemCopy_5__4 >> 0xc);
            uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
            do {
              uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
              puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
              LOCK();
              bVar5 = uVar8 == *puVar9;
              if (bVar5) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar5);
          }
          pp_Var23 = p_Var13->vector;
          pOVar14 = pOVar3;
          while (uVar6 = (uint)pOVar14, (int)uVar6 < (int)p_Var13->max_length) {
            if ((uint)p_Var13->max_length <= uVar6) {
code_?:
              FUN_?();
              pcVar15 = (code *)swi(3);
              bVar16 = (*pcVar15)();
              return bVar16;
            }
            if (*pp_Var23 == (_Il2CppFullySharedGenericType *)0x0) goto code_?;
            *(undefined1 *)&(*pp_Var23)[2].klass = 1;
            pp_Var23 = pp_Var23 + 1;
            pOVar14 = (Object *)(ulonglong)(uVar6 + 1);
          }
          pMVar13 = (this->fields).wo;
          if (pMVar13 != (MVWorldObjectClient *)0x0) {
            pGVar10 = (this->fields)._previewRoot_5__3;
            layersToRender = (pMVar13->fields).previewLayerMask;
            if (pGVar10 != (GameObject *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                LOCK();
                UNLOCK();
                FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar17 = (pGVar10->fields)._.m_CachedPtr;
              if (pvVar17 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar10,(MethodInfo *)0x0);
                pcVar15 = (code *)swi(3);
                bVar16 = (*pcVar15)();
                return bVar16;
              }
              pcVar15 = pcRam_?;
              if ((pcRam_? == (code *)0x0) && (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
                uVar18 = func_?(&UNK_?);
                FUN_?(uVar18,0);
                pcVar15 = (code *)swi(3);
                bVar16 = (*pcVar15)();
                return bVar16;
              }
              pcRam_? = pcVar15;
              pvVar17 = (void *)(*pcRam_?)(pvVar17);
              previewItemsRoot = (Transform *)UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar17,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
              pGVar10 = (this->fields)._itemCopy_5__4;
              if (pGVar10 != (GameObject *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                  LOCK();
                  UNLOCK();
                  FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar17 = (pGVar10->fields)._.m_CachedPtr;
                if (pvVar17 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar10,(MethodInfo *)0x0);
                  pcVar15 = (code *)swi(3);
                  bVar16 = (*pcVar15)();
                  return bVar16;
                }
                pcVar15 = pcRam_?;
                if ((pcRam_? == (code *)0x0) && (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
                  uVar18 = func_?(&UNK_?);
                  FUN_?(uVar18,0);
                  pcVar15 = (code *)swi(3);
                  bVar16 = (*pcVar15)();
                  return bVar16;
                }
                pcRam_? = pcVar15;
                pvVar17 = (void *)(*pcRam_?)(pvVar17);
                pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar17,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                if (pOVar14 != (Object *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  RStack_19.m_XMin = 0.0;
                  RStack_19.m_YMin = 0.0;
                  RStack_19.m_Width = 0.0;
                  pOVar20 = pOVar14[1].klass;
                  if (pOVar20 == (Object__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar14,(MethodInfo *)0x0);
                    pcVar15 = (code *)swi(3);
                    bVar16 = (*pcVar15)();
                    return bVar16;
                  }
                  pcVar15 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) && (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
                    uVar18 = func_?(&UNK_?);
                    FUN_?(uVar18,0);
                    pcVar15 = (code *)swi(3);
                    bVar16 = (*pcVar15)();
                    return bVar16;
                  }
                  pcRam_? = pcVar15;
                  (*pcRam_?)(pOVar20,&RStack_19);
                  pMVar13 = (this->fields).wo;
                  pGVar10 = (this->fields)._itemCopy_5__4;
                  if (*(int *)&(TypeInfo__ObjectPreviewer->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pSVar11 = StringLiteral_Model_preview;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__ObjectPreviewer);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__ObjectPreviewer->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  auStack_4._8_4_ = RStack_19.m_Width;
                  auStack_4._0_4_ = RStack_19.m_XMin;
                  auStack_4._4_4_ = RStack_19.m_YMin;
                  RStack_19.m_XMin = 1.2;
                  RStack_19.m_YMin = 0.1;
                  RStack_19.m_Width = 0.3;
                  pOVar21 = ObjectPreviewer::ObjectPreviewer_Create_2(0x200,0x200,CameraClearFlags__Enum_Color,layersToRender,(Vector3 *)&RStack_19,previewItemsRoot,(Vector3 *)auStack_4,pSVar11,pMVar13,pGVar10,(MethodInfo *)0x0);
                  bVar5 = iRam_? != 0;
                  (this->fields)._objectPreviewer_5__5 = pOVar21;
                  if (bVar5) {
                    uVar6 = (uint)((ulonglong)&(this->fields)._objectPreviewer_5__5 >> 0xc);
                    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
                    do {
                      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                      LOCK();
                      bVar5 = uVar8 == *puVar9;
                      if (bVar5) {
                        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar5);
                  }
                  lVar22 = lRam_?;
                  uStackX_8 = 0;
                  if (*(int *)(lRam_? + 0x28) < 0) {
                    if ((*(longlong *)(lRam_? + 0x60) == 0) || ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
                      pOVar3 = (Object *)FUN_?(lRam_?);
                      FUN_?(pOVar3 + 1,&uStackX_8,(longlong)*(int *)(lVar22 + 0xf8) + -0x10);
                      if (iRam_? != 0) {
                        uVar6 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
                        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
                        do {
                          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                          LOCK();
                          bVar5 = uVar8 == *puVar9;
                          if (bVar5) {
                            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar5);
                      }
                    }
                  }
                  else {
                    pOVar3 = (Object *)((ulonglong)uStackX_c << 0x20);
                  }
                  bVar5 = iRam_? != 0;
                  (this->fields).__2__current = pOVar3;
                  if (bVar5) {
                    uVar6 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
                    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
                    do {
                      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                      LOCK();
                      bVar5 = uVar8 == *puVar9;
                      if (bVar5) {
                        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar5);
                  }
                  (this->fields).__1__state = 1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    pOVar21 = (this->fields)._objectPreviewer_5__5;
    (this->fields).__1__state = -1;
    if (pOVar21 != (ObjectPreviewer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active((pOVar21->fields)._PreviewTexture_k__BackingField,(MethodInfo *)0x0);
      pTVar2 = (this->fields)._previewTexture_5__2;
      if (pTVar2 != (Texture2D *)0x0) {
        lVar22 = 0;
        auStack_4._0_4_ = 0.0;
        auStack_4._4_4_ = 0.0;
        auStack_4._8_8_ = (String *)0x4400000044000000;
        UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1(pTVar2,(Rect *)auStack_4,0,0,(MethodInfo *)0x0);
        pTVar2 = (this->fields)._previewTexture_5__2;
        if (pTVar2 != (Texture2D *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply(pTVar2,1,0,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          pcVar15 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
            uVar18 = func_?(&UNK_?);
            FUN_?(uVar18,0);
            pcVar15 = (code *)swi(3);
            bVar16 = (*pcVar15)();
            return bVar16;
          }
          pcRam_? = pcVar15;
          (*pcRam_?)(0);
          pGVar10 = (this->fields)._previewRoot_5__3;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy((Object_1 *)pGVar10,0.0,(MethodInfo *)0x0);
          pGVar10 = (this->fields)._itemCopy_5__4;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy((Object_1 *)pGVar10,0.0,(MethodInfo *)0x0);
          pOVar21 = (this->fields)._objectPreviewer_5__5;
          if (pOVar21 != (ObjectPreviewer *)0x0) {
            ObjectPreviewer::ObjectPreviewer_Destroy(pOVar21,(MethodInfo *)0x0);
            pBVar23 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::ImageConversion_EncodeToPNG((this->fields)._previewTexture_5__2,(MethodInfo *)0x0);
            pAVar24 = (this->fields).callback;
            if ((pBVar23 != (Byte__Array *)0x0) && (lVar25 = FUN_?(pBVar23), pBVar26 = TypeInfo__System__Byte, pAVar24 != (Action_1_Byte_ *)0x0)) {
              if ((lVar25 != 0) && (lVar22 = FUN_?(lVar25,TypeInfo__System__Byte), lVar22 == 0)) {
                FUN_?(lVar25,pBVar26);
                pcVar15 = (code *)swi(3);
                bVar16 = (*pcVar15)();
                return bVar16;
              }
              (*(pAVar24->fields)._._.invoke_impl)((pAVar24->fields)._._.method_code,lVar22,(pAVar24->fields)._._.method);
              return 0;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar16 = (*pcVar15)();
  return bVar16;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::ImageGenerator+<CreateTextureFromData>d__0::ImageGenerator_CreateTextureFromData_d_0_System_Collections_IEnumerator_Reset(ImageGenerator_CreateTextureFromData_d_0 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__ImageGenerator___CreateTextureFromData_d__0__System_Collections_IEnumerator_Reset__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

