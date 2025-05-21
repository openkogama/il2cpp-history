
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ImageGenerator+<CreateTextureFromData>d__0::
     ImageGenerator_CreateTextureFromData_d_0_MoveNext
               (ImageGenerator_CreateTextureFromData_d_0 *this,MethodInfo *method)

{
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
  iVar1 = (this->fields).__1__state;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    pTVar2 = (Texture2D *)func_?(TypeInfo__UnityEngine__Texture2D);
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_3
              (pTVar2,0x200,0x200,TextureFormat__Enum_ARGB32,0,(MethodInfo *)0x0);
    (this->fields)._previewTexture_5__2 = pTVar2;
    func_?(&(this->fields)._previewTexture_5__2,pTVar2);
    pGVar3 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (pGVar3,StringLiteral_Item_Preview,(MethodInfo *)0x0);
    (this->fields)._previewRoot_5__3 = pGVar3;
    func_?(&(this->fields)._previewRoot_5__3,pGVar3);
    pMVar4 = (this->fields).wo;
    if ((pMVar4 != (MVWorldObjectClient *)0x0) &&
       (pGVar3 = (pMVar4->fields).gameObject, pGVar3 != (GameObject *)0x0)) {
      pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren
                         (pGVar3,
                          MVComponent__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<MVComponent>______
                         );
      uVar6 = 0;
      if (pOVar5 != (Object__Array *)0x0) {
        ppOVar7 = pOVar5->vector;
        for (; (int)uVar6 < (int)pOVar5->max_length; uVar6 = uVar6 + 1) {
          if (pOVar5->max_length <= uVar6) goto code_?;
          if (*ppOVar7 == (Object *)0x0) goto code_?;
          *(undefined1 *)&(*ppOVar7)[2].klass = 0;
          ppOVar7 = ppOVar7 + 1;
        }
        pMVar4 = (this->fields).wo;
        if (pMVar4 != (MVWorldObjectClient *)0x0) {
          pGVar3 = (pMVar4->fields).gameObject;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pGVar3 = (GameObject *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             ((Object *)pGVar3,
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
          (this->fields)._itemCopy_5__4 = pGVar3;
          func_?(&(this->fields)._itemCopy_5__4,pGVar3);
          ppOVar7 = pOVar5->vector;
          for (uVar6 = 0; (int)uVar6 < (int)pOVar5->max_length; uVar6 = uVar6 + 1) {
            if (pOVar5->max_length <= uVar6) goto code_?;
            if (*ppOVar7 == (Object *)0x0) goto code_?;
            *(undefined1 *)&(*ppOVar7)[2].klass = 1;
            ppOVar7 = ppOVar7 + 1;
          }
          pMVar4 = (this->fields).wo;
          if (pMVar4 != (MVWorldObjectClient *)0x0) {
            layersToRender = (pMVar4->fields).previewLayerMask;
            pGVar3 = (this->fields)._previewRoot_5__3;
            uStack_8 = 0x3f99999a;
            puStack_9 = (undefined *)0x3dcccccd;
            fVar10 = 0.3;
            if (pGVar3 != (GameObject *)0x0) {
              previewItemsRoot =
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar3,(MethodInfo *)0x0);
              pGVar3 = (this->fields)._itemCopy_5__4;
              if ((pGVar3 != (GameObject *)0x0) &&
                 (this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar3,(MethodInfo *)0x0),
                 this_00 != (Transform *)0x0)) {
                pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    (&VStack_12,this_00,(MethodInfo *)0x0);
                uVar13._0_4_ = pVVar11->x;
                uVar13._4_4_ = pVVar11->y;
                fVar14 = pVVar11->z;
                pMVar4 = (this->fields).wo;
                pGVar3 = (this->fields)._itemCopy_5__4;
                if ((TypeInfo__ObjectPreviewer->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__ObjectPreviewer);
                }
                cameraOffset.y = (float)puStack_9;
                cameraOffset.x = (float)uStack_8;
                cameraOffset.z = fVar10;
                previewPosition.z = fVar14;
                previewPosition.x = (float)(int)uVar13;
                previewPosition.y = (float)(int)((ulonglong)uVar13 >> 0x20);
                pOVar15 = ObjectPreviewer::ObjectPreviewer_Create_1
                                    (0x200,CameraClearFlags__Enum_Color,layersToRender,cameraOffset,
                                     previewItemsRoot,previewPosition,StringLiteral_Model_preview,
                                     pMVar4,pGVar3,(MethodInfo *)0x0);
                (this->fields)._objectPreviewer_5__5 = pOVar15;
                func_?(&(this->fields)._objectPreviewer_5__5,pOVar15);
                pOVar16 = (Object *)func_?();
                (this->fields).__2__current = pOVar16;
                func_?();
                (this->fields).__1__state = 1;
                return 1;
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
    pOVar15 = (this->fields)._objectPreviewer_5__5;
    (this->fields).__1__state = -1;
    if (pOVar15 != (ObjectPreviewer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                ((pOVar15->fields)._PreviewTexture_k__BackingField,(MethodInfo *)0x0);
      pTVar2 = (this->fields)._previewTexture_5__2;
      if (pTVar2 != (Texture2D *)0x0) {
        source.m_YMin = (float)_UNK_?;
        source.m_XMin = (float)_UNK_?;
        source.m_Width = (float)_UNK_?;
        source.m_Height = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                  (pTVar2,source,0,0,(MethodInfo *)0x0);
        pTVar2 = (this->fields)._previewTexture_5__2;
        if (pTVar2 != (Texture2D *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                    (pTVar2,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                    ((RenderTexture *)0x0,(MethodInfo *)0x0);
          pGVar3 = (this->fields)._previewRoot_5__3;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar3,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)(this->fields)._itemCopy_5__4,(MethodInfo *)0x0);
          pOVar15 = (this->fields)._objectPreviewer_5__5;
          if (pOVar15 != (ObjectPreviewer *)0x0) {
            ObjectPreviewer::ObjectPreviewer_Destroy(pOVar15,(MethodInfo *)0x0);
            this_01 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
                      ImageConversion_EncodeToPNG
                                ((this->fields)._previewTexture_5__2,(MethodInfo *)0x0);
            pAVar17 = (this->fields).callback;
            if ((this_01 != (Byte__Array *)0x0) &&
               (pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                          PlayableBehaviour_Clone((PlayableBehaviour *)this_01,(MethodInfo *)0x0),
               pBVar18 = TypeInfo__System__Byte, pAVar17 != (Action_1_Byte_ *)0x0)) {
              iVar1 = 0;
              if ((pOVar16 == (Object *)0x0) ||
                 (iVar1 = func_?(pOVar16,TypeInfo__System__Byte), iVar1 != 0)) {
                (*(pAVar17->fields)._._.invoke_impl)
                          ((pAVar17->fields)._._.method_code,iVar1,(pAVar17->fields)._._.method);
                return 0;
              }
              func_?(pOVar16,pBVar18);
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
  pcVar19 = (code *)swi(3);
  bVar20 = (*pcVar19)();
  return bVar20;
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

