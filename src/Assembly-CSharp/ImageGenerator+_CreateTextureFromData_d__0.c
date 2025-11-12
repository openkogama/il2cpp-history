
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ImageGenerator+<CreateTextureFromData>d__0::
     ImageGenerator_CreateTextureFromData_d_0_MoveNext
               (ImageGenerator_CreateTextureFromData_d_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVComponent__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<MVComponent>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ObjectPreviewer);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
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
    pSStack_5 = (String *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor
              (pTVar2,0x200,0x200,TextureFormat__Enum_ARGB32,1,0,(void *)0x0,0,
               (MipmapLimitDescriptor *)auStack_4,(MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (this->fields)._previewTexture_5__2 = pTVar2;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&(this->fields)._previewTexture_5__2 >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar9 == *puVar10;
        if (bVar6) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pGVar11 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
    pSVar12 = StringLiteral_Item_Preview;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
              (pGVar11,pSVar12,(MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (this->fields)._previewRoot_5__3 = pGVar11;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&(this->fields)._previewRoot_5__3 >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar9 == *puVar10;
        if (bVar6) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pMVar13 = 
    MVComponent__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<MVComponent>______;
    pMVar14 = (this->fields).wo;
    if ((pMVar14 != (MVWorldObjectClient *)0x0) &&
       (pGVar11 = (pMVar14->fields).gameObject, pGVar11 != (GameObject *)0x0)) {
      if ((
          MVComponent__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<MVComponent>______
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     MVComponent__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<MVComponent>______
                     );
      }
      p_Var15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_GetComponentsInChildren_4
                          (pGVar11,0,((pMVar13->field7_0x38).rgctx_data)->method);
      if (p_Var15 != (_Il2CppFullySharedGenericType__Array *)0x0) {
        pp_Var25 = p_Var15->vector;
        pOVar15 = pOVar3;
        while (uVar7 = (uint)pOVar15, (int)uVar7 < (int)p_Var15->max_length) {
          if ((uint)p_Var15->max_length <= uVar7) goto code_?;
          if (*pp_Var25 == (_Il2CppFullySharedGenericType *)0x0) goto code_?;
          *(undefined1 *)&(*pp_Var25)[2].klass = 0;
          pp_Var25 = pp_Var25 + 1;
          pOVar15 = (Object *)(ulonglong)(uVar7 + 1);
        }
        pMVar14 = (this->fields).wo;
        if (pMVar14 != (MVWorldObjectClient *)0x0) {
          pGVar11 = (pMVar14->fields).gameObject;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pGVar11 = (GameObject *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pGVar11,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                              );
          bVar6 = iRam_? != 0;
          (this->fields)._itemCopy_5__4 = pGVar11;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)&(this->fields)._itemCopy_5__4 >> 0xc);
            uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
            do {
              uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
              puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
              LOCK();
              bVar6 = uVar9 == *puVar10;
              if (bVar6) {
                *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar6);
          }
          pp_Var25 = p_Var15->vector;
          pOVar15 = pOVar3;
          while (uVar7 = (uint)pOVar15, (int)uVar7 < (int)p_Var15->max_length) {
            if ((uint)p_Var15->max_length <= uVar7) {
code_?:
              FUN_?();
              pcVar16 = (code *)swi(3);
              bVar17 = (*pcVar16)();
              return bVar17;
            }
            if (*pp_Var25 == (_Il2CppFullySharedGenericType *)0x0) goto code_?;
            *(undefined1 *)&(*pp_Var25)[2].klass = 1;
            pp_Var25 = pp_Var25 + 1;
            pOVar15 = (Object *)(ulonglong)(uVar7 + 1);
          }
          pMVar14 = (this->fields).wo;
          if (pMVar14 != (MVWorldObjectClient *)0x0) {
            pGVar11 = (this->fields)._previewRoot_5__3;
            layersToRender = (pMVar14->fields).previewLayerMask;
            if (pGVar11 != (GameObject *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar18 = (pGVar11->fields)._.m_CachedPtr;
              if (pvVar18 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar11,(MethodInfo *)0x0);
                pcVar16 = (code *)swi(3);
                bVar17 = (*pcVar16)();
                return bVar17;
              }
              pcVar16 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar16 = (code *)swi(3);
                bVar17 = (*pcVar16)();
                return bVar17;
              }
              pcRam_? = pcVar16;
              pvVar18 = (void *)(*pcRam_?)(pvVar18);
              previewItemsRoot =
                   (Transform *)
                   UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                   Unmarshal_UnmarshalUnityObject
                             (pvVar18,
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
              pGVar11 = (this->fields)._itemCopy_5__4;
              if (pGVar11 != (GameObject *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar18 = (pGVar11->fields)._.m_CachedPtr;
                if (pvVar18 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar11,(MethodInfo *)0x0);
                  pcVar16 = (code *)swi(3);
                  bVar17 = (*pcVar16)();
                  return bVar17;
                }
                pcVar16 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
                  uVar19 = func_?(&UNK_?);
                  FUN_?(uVar19,0);
                  pcVar16 = (code *)swi(3);
                  bVar17 = (*pcVar16)();
                  return bVar17;
                }
                pcRam_? = pcVar16;
                pvVar18 = (void *)(*pcRam_?)(pvVar18);
                pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                          Unmarshal_UnmarshalUnityObject
                                    (pvVar18,
                                     UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                    );
                if (pOVar15 != (Object *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  RStack_20.m_XMin = 0.0;
                  RStack_20.m_YMin = 0.0;
                  RStack_20.m_Width = 0.0;
                  pOVar21 = pOVar15[1].klass;
                  if (pOVar21 == (Object__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0);
                    pcVar16 = (code *)swi(3);
                    bVar17 = (*pcVar16)();
                    return bVar17;
                  }
                  pcVar16 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
                    uVar19 = func_?(&UNK_?);
                    FUN_?(uVar19,0);
                    pcVar16 = (code *)swi(3);
                    bVar17 = (*pcVar16)();
                    return bVar17;
                  }
                  pcRam_? = pcVar16;
                  (*pcRam_?)(pOVar21,&RStack_20);
                  pMVar14 = (this->fields).wo;
                  pGVar11 = (this->fields)._itemCopy_5__4;
                  if (*(int *)&(TypeInfo__ObjectPreviewer->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pSVar12 = StringLiteral_Model_preview;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__ObjectPreviewer);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  fVar22 = _UNK_?;
                  fVar23 = _UNK_?;
                  if (*(int *)&(TypeInfo__ObjectPreviewer->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pSStack_5 = (String *)CONCAT44(pSStack_5._4_4_,RStack_20.m_Width);
                  auStack_4._0_4_ = RStack_20.m_XMin;
                  auStack_4._4_4_ = RStack_20.m_YMin;
                  RStack_20.m_YMin = fVar23;
                  RStack_20.m_XMin = _UNK_?;
                  RStack_20.m_Width = fVar22;
                  pOVar24 = ObjectPreviewer::ObjectPreviewer_Create_2
                                      (0x200,0x200,CameraClearFlags__Enum_Color,layersToRender,
                                       (Vector3 *)&RStack_20,previewItemsRoot,(Vector3 *)auStack_4,
                                       pSVar12,pMVar14,pGVar11,(MethodInfo *)0x0);
                  bVar6 = iRam_? != 0;
                  (this->fields)._objectPreviewer_5__5 = pOVar24;
                  if (bVar6) {
                    uVar7 = (uint)((ulonglong)&(this->fields)._objectPreviewer_5__5 >> 0xc);
                    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                    do {
                      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
                      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
                      LOCK();
                      bVar6 = uVar9 == *puVar10;
                      if (bVar6) {
                        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar6);
                  }
                  lVar25 = lRam_?;
                  uStackX_8 = 0;
                  if (*(int *)(lRam_? + 0x28) < 0) {
                    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
                       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
                      pOVar3 = (Object *)FUN_?(lRam_?);
                      FUN_?(pOVar3 + 1,&uStackX_8,(longlong)*(int *)(lVar25 + 0xf8) + -0x10
                                   );
                      if (iRam_? != 0) {
                        uVar7 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
                        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                        do {
                          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
                          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
                          LOCK();
                          bVar6 = uVar9 == *puVar10;
                          if (bVar6) {
                            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar6);
                      }
                    }
                  }
                  else {
                    pOVar3 = (Object *)((ulonglong)uStackX_c << 0x20);
                  }
                  bVar6 = iRam_? != 0;
                  (this->fields).__2__current = pOVar3;
                  if (bVar6) {
                    uVar7 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
                    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                    do {
                      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
                      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
                      LOCK();
                      bVar6 = uVar9 == *puVar10;
                      if (bVar6) {
                        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar6);
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
    pOVar24 = (this->fields)._objectPreviewer_5__5;
    (this->fields).__1__state = -1;
    if (pOVar24 != (ObjectPreviewer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                ((pOVar24->fields)._PreviewTexture_k__BackingField,(MethodInfo *)0x0);
      pTVar2 = (this->fields)._previewTexture_5__2;
      if (pTVar2 != (Texture2D *)0x0) {
        lVar25 = 0;
        auStack_4._0_4_ = _UNK_?;
        auStack_4._4_4_ = _UNK_?;
        pSStack_5 = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                  (pTVar2,(Rect *)auStack_4,0,0,(MethodInfo *)0x0);
        pTVar2 = (this->fields)._previewTexture_5__2;
        if (pTVar2 != (Texture2D *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply
                    (pTVar2,1,0,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          pcVar16 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
            uVar19 = func_?(&UNK_?);
            FUN_?(uVar19,0);
            pcVar16 = (code *)swi(3);
            bVar17 = (*pcVar16)();
            return bVar17;
          }
          pcRam_? = pcVar16;
          (*pcRam_?)(0);
          pGVar11 = (this->fields)._previewRoot_5__3;
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
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    ((Object_1 *)pGVar11,0.0,(MethodInfo *)0x0);
          pGVar11 = (this->fields)._itemCopy_5__4;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    ((Object_1 *)pGVar11,0.0,(MethodInfo *)0x0);
          pOVar24 = (this->fields)._objectPreviewer_5__5;
          if (pOVar24 != (ObjectPreviewer *)0x0) {
            ObjectPreviewer::ObjectPreviewer_Destroy(pOVar24,(MethodInfo *)0x0);
            pBVar26 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
                      ImageConversion_EncodeToPNG
                                ((this->fields)._previewTexture_5__2,(MethodInfo *)0x0);
            pAVar27 = (this->fields).callback;
            if ((pBVar26 != (Byte__Array *)0x0) &&
               (lVar28 = FUN_?(pBVar26), pBVar29 = TypeInfo__System__Byte,
               pAVar27 != (Action_1_Byte_ *)0x0)) {
              if ((lVar28 != 0) &&
                 (lVar25 = FUN_?(lVar28,TypeInfo__System__Byte), lVar25 == 0)) {
                FUN_?(lVar28,pBVar29);
                pcVar16 = (code *)swi(3);
                bVar17 = (*pcVar16)();
                return bVar17;
              }
              (*(pAVar27->fields)._._.invoke_impl)
                        ((pAVar27->fields)._._.method_code,lVar25,(pAVar27->fields)._._.method);
              return 0;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  bVar17 = (*pcVar16)();
  return bVar17;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::ImageGenerator+<CreateTextureFromData>d__0::
     ImageGenerator_CreateTextureFromData_d_0_System_Collections_IEnumerator_Reset
               (ImageGenerator_CreateTextureFromData_d_0 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__ImageGenerator___CreateTextureFromData_d__0__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

