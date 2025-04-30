
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ImageGenerator+<CreateTextureFromData>d__0::
     ImageGenerator_CreateTextureFromData_d_0_MoveNext
               (ImageGenerator_CreateTextureFromData_d_0 *this,MethodInfo *method)

{
  pIVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MVComponent__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<MVComponent>______
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ObjectPreviewer);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    func_?(&StringLiteral_Item_Preview);
    func_?(&StringLiteral_Model_preview);
    cRam_? = '\x01';
  }
  iVar2 = (this->fields).__1__state;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    pTVar3 = (Texture2D *)func_?(TypeInfo__UnityEngine__Texture2D);
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_3
              (pTVar3,0x200,0x200,TextureFormat__Enum_ARGB32,0,(MethodInfo *)0x0);
    ppTVar4 = &(this->fields)._previewTexture_5__2;
    *ppTVar4 = pTVar3;
    func_?(ppTVar4,pTVar3);
    pGVar5 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (pGVar5,StringLiteral_Item_Preview,(MethodInfo *)0x0);
    ppGVar6 = &(this->fields)._previewRoot_5__3;
    *ppGVar6 = pGVar5;
    func_?(ppGVar6,pGVar5);
    pMVar7 = (this->fields).wo;
    if ((pMVar7 != (MVWorldObjectClient *)0x0) &&
       (pGVar5 = (pMVar7->fields).gameObject, pGVar5 != (GameObject *)0x0)) {
      pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_GetComponentsInChildren
                          (pGVar5,
                           MVComponent__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<MVComponent>______
                          );
      this = (ImageGenerator_CreateTextureFromData_d_0 *)0x0;
      if (pOVar8 != (Object__Array *)0x0) {
        ppOVar9 = pOVar8->vector;
        ppOVar10 = ppOVar9;
        for (; (int)this < (int)pOVar8->max_length;
            this = (ImageGenerator_CreateTextureFromData_d_0 *)((int)&this->klass + 1)) {
          if ((ImageGenerator_CreateTextureFromData_d_0 *)pOVar8->max_length <= this)
          goto code_?;
          if (*ppOVar10 == (Object *)0x0) goto code_?;
          *(undefined1 *)&(*ppOVar10)[2].klass = 0;
          ppOVar10 = ppOVar10 + 1;
        }
        pMVar7 = (pIVar1->fields).wo;
        if (pMVar7 != (MVWorldObjectClient *)0x0) {
          pGVar5 = (pMVar7->fields).gameObject;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pGVar5 = (GameObject *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pGVar5,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                              );
          ppGVar6 = &(pIVar1->fields)._itemCopy_5__4;
          *ppGVar6 = pGVar5;
          func_?(ppGVar6,pGVar5);
          for (uVar11 = 0; (int)uVar11 < (int)pOVar8->max_length; uVar11 = uVar11 + 1) {
            if (pOVar8->max_length <= uVar11) goto code_?;
            if (*ppOVar9 == (Object *)0x0) goto code_?;
            *(undefined1 *)&(*ppOVar9)[2].klass = 1;
            ppOVar9 = ppOVar9 + 1;
          }
          pMVar7 = (pIVar1->fields).wo;
          if (pMVar7 != (MVWorldObjectClient *)0x0) {
            layersToRender = (pMVar7->fields).previewLayerMask;
            pGVar5 = (pIVar1->fields)._previewRoot_5__3;
            uStack_12 = 0x3f99999a;
            puStack_13 = (undefined *)0x3dcccccd;
            fVar14 = 0.3;
            if (pGVar5 != (GameObject *)0x0) {
              previewItemsRoot =
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar5,(MethodInfo *)0x0);
              pGVar5 = (pIVar1->fields)._itemCopy_5__4;
              if ((pGVar5 != (GameObject *)0x0) &&
                 (this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar5,(MethodInfo *)0x0),
                 this_00 != (Transform *)0x0)) {
                pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    (&VStack_16,this_00,(MethodInfo *)0x0);
                uVar17._0_4_ = pVVar15->x;
                uVar17._4_4_ = pVVar15->y;
                fVar18 = pVVar15->z;
                pMVar7 = (pIVar1->fields).wo;
                pGVar5 = (pIVar1->fields)._itemCopy_5__4;
                if ((TypeInfo__ObjectPreviewer->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__ObjectPreviewer);
                }
                cameraOffset.y = (float)puStack_13;
                cameraOffset.x = (float)uStack_12;
                cameraOffset.z = fVar14;
                previewPosition.z = fVar18;
                previewPosition.x = (float)(int)uVar17;
                previewPosition.y = (float)(int)((ulonglong)uVar17 >> 0x20);
                pOVar19 = ObjectPreviewer::ObjectPreviewer_Create_1
                                    (0x200,CameraClearFlags__Enum_Color,layersToRender,cameraOffset,
                                     previewItemsRoot,previewPosition,StringLiteral_Model_preview,
                                     pMVar7,pGVar5,(MethodInfo *)0x0);
                ppOVar20 = &(pIVar1->fields)._objectPreviewer_5__5;
                *ppOVar20 = pOVar19;
                func_?(ppOVar20,pOVar19);
                pOVar21 = (Object *)func_?();
                (pIVar1->fields).__2__current = pOVar21;
                func_?();
                (pIVar1->fields).__1__state = 1;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    pOVar19 = (this->fields)._objectPreviewer_5__5;
    (this->fields).__1__state = -1;
    if (pOVar19 != (ObjectPreviewer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                ((pOVar19->fields)._PreviewTexture_k__BackingField,(MethodInfo *)0x0);
      pTVar3 = (this->fields)._previewTexture_5__2;
      if (pTVar3 != (Texture2D *)0x0) {
        source.m_YMin = (float)_UNK_?;
        source.m_XMin = (float)_UNK_?;
        source.m_Width = (float)_UNK_?;
        source.m_Height = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                  (pTVar3,source,0,0,(MethodInfo *)0x0);
        pTVar3 = (this->fields)._previewTexture_5__2;
        if (pTVar3 != (Texture2D *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                    (pTVar3,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                    ((RenderTexture *)0x0,(MethodInfo *)0x0);
          pGVar5 = (this->fields)._previewRoot_5__3;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar5,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)(this->fields)._itemCopy_5__4,(MethodInfo *)0x0);
          pOVar19 = (this->fields)._objectPreviewer_5__5;
          if (pOVar19 != (ObjectPreviewer *)0x0) {
            ObjectPreviewer::ObjectPreviewer_Destroy(pOVar19,(MethodInfo *)0x0);
            this_01 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
                      ImageConversion_EncodeToPNG
                                ((this->fields)._previewTexture_5__2,(MethodInfo *)0x0);
            pAVar22 = (this->fields).callback;
            if ((this_01 != (Byte__Array *)0x0) &&
               (pOVar21 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                          PlayableBehaviour_Clone((PlayableBehaviour *)this_01,(MethodInfo *)0x0),
               pBVar23 = TypeInfo__System__Byte, pAVar22 != (Action_1_Byte_ *)0x0)) {
              iVar2 = 0;
              if ((pOVar21 == (Object *)0x0) ||
                 (iVar2 = func_?(pOVar21,TypeInfo__System__Byte), iVar2 != 0)) {
                (*(pAVar22->fields)._._.invoke_impl)
                          ((pAVar22->fields)._._.method_code,iVar2,(pAVar22->fields)._._.method);
                return 0;
              }
              func_?(pOVar21,pBVar23);
code_?:
              func_?();
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  bVar25 = (*pcVar24)();
  return bVar25;
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
  func_?(&
                  MethodInfo__ImageGenerator___CreateTextureFromData_d__0__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

