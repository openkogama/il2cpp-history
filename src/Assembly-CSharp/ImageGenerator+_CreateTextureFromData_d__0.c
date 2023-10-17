
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
    if (pTVar2 != (Texture2D *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_2
                (pTVar2,0x200,0x200,TextureFormat__Enum_ARGB32,0,(MethodInfo *)0x0);
      (this->fields)._previewTexture_5__2 = pTVar2;
      func_?(&(this->fields)._previewTexture_5__2,pTVar2);
      pGVar3 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (pGVar3,StringLiteral_Item_Preview,(MethodInfo *)0x0);
        (this->fields)._previewRoot_5__3 = pGVar3;
        func_?(&(this->fields)._previewRoot_5__3,pGVar3);
        pMVar4 = (this->fields).wo;
        if ((pMVar4 != (MVWorldObjectClient *)0x0) &&
           (pGVar3 = (pMVar4->fields).gameObject, pGVar3 != (GameObject *)0x0)) {
          pIVar5 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                             ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar3,
                              MVComponent__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<MVComponent>______
                             );
          pMVar6 = (MonitorData *)0x0;
          if (pIVar5 != (IEnumerable_1_System_Object_ *)0x0) {
            pIVar7 = pIVar5 + 2;
            for (; (int)pMVar6 < (int)pIVar5[1].monitor; pMVar6 = pMVar6 + 1) {
              if (pIVar5[1].monitor <= pMVar6) goto code_?;
              if (pIVar7->klass == (IEnumerable_1_System_Object___Class *)0x0)
              goto code_?;
              *(undefined1 *)&(pIVar7->klass->_0).namespaze = 0;
              pIVar7 = (IEnumerable_1_System_Object_ *)&pIVar7->monitor;
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
              pIVar7 = pIVar5 + 2;
              for (pMVar6 = (MonitorData *)0x0; (int)pMVar6 < (int)pIVar5[1].monitor;
                  pMVar6 = pMVar6 + 1) {
                if (pIVar5[1].monitor <= pMVar6) goto code_?;
                if (pIVar7->klass == (IEnumerable_1_System_Object___Class *)0x0)
                goto code_?;
                *(undefined1 *)&(pIVar7->klass->_0).namespaze = 1;
                pIVar7 = (IEnumerable_1_System_Object_ *)&pIVar7->monitor;
              }
              pMVar4 = (this->fields).wo;
              if (pMVar4 != (MVWorldObjectClient *)0x0) {
                layersToRender = (pMVar4->fields).previewLayerMask;
                pGVar3 = (this->fields)._previewRoot_5__3;
                uVar8 = 0x3f99999a;
                if (pGVar3 != (GameObject *)0x0) {
                  previewItemsRoot =
                       UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar3,(MethodInfo *)0x0);
                  pGVar3 = (this->fields)._itemCopy_5__4;
                  if ((pGVar3 != (GameObject *)0x0) &&
                     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform(pGVar3,(MethodInfo *)0x0),
                     this_00 != (Transform *)0x0)) {
                    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_position
                                       ((Vector3 *)&stack0xffffffd0,this_00,(MethodInfo *)0x0);
                    previewPosition = *pVVar9;
                    pMVar4 = (this->fields).wo;
                    pGVar3 = (this->fields)._itemCopy_5__4;
                    if ((TypeInfo__ObjectPreviewer->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__ObjectPreviewer);
                    }
                    cameraOffset.y = 0.1;
                    cameraOffset.x = (float)uVar8;
                    cameraOffset.z = 0.3;
                    pOVar10 = ObjectPreviewer::ObjectPreviewer_Create_1
                                       (0x200,CameraClearFlags__Enum_Color,layersToRender,
                                        cameraOffset,previewItemsRoot,previewPosition,
                                        StringLiteral_Model_preview,pMVar4,pGVar3,(MethodInfo *)0x0
                                       );
                    (this->fields)._objectPreviewer_5__5 = pOVar10;
                    func_?(&(this->fields)._objectPreviewer_5__5,pOVar10);
                    pOVar11 = (Object *)func_?();
                    (this->fields).__2__current = pOVar11;
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
    }
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    pOVar10 = (this->fields)._objectPreviewer_5__5;
    (this->fields).__1__state = -1;
    if (pOVar10 != (ObjectPreviewer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                ((pOVar10->fields)._PreviewTexture_k__BackingField,(MethodInfo *)0x0);
      pTVar2 = (this->fields)._previewTexture_5__2;
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      fVar15 = 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4__ctor
                ((Vector4 *)&stack0xffffffcc,0.0,0.0,512.0,512.0,(MethodInfo *)0x0);
      if (pTVar2 != (Texture2D *)0x0) {
        source.m_YMin = fVar13;
        source.m_XMin = fVar12;
        source.m_Width = fVar14;
        source.m_Height = fVar15;
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
          pOVar10 = (this->fields)._objectPreviewer_5__5;
          if (pOVar10 != (ObjectPreviewer *)0x0) {
            ObjectPreviewer::ObjectPreviewer_Destroy(pOVar10,(MethodInfo *)0x0);
            this_01 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
                      ImageConversion_EncodeToPNG
                                ((this->fields)._previewTexture_5__2,(MethodInfo *)0x0);
            pAVar16 = (this->fields).callback;
            if ((this_01 != (Byte__Array *)0x0) &&
               (pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                          PlayableBehaviour_Clone((PlayableBehaviour *)this_01,(MethodInfo *)0x0),
               pBVar17 = TypeInfo__System__Byte, pAVar16 != (Action_1_Byte_ *)0x0)) {
              iVar1 = 0;
              if ((pOVar11 == (Object *)0x0) ||
                 (iVar1 = func_?(pOVar11,TypeInfo__System__Byte), iVar1 != 0)) {
                (*(pAVar16->fields)._._.invoke_impl)
                          ((pAVar16->fields)._._.method_code,iVar1,(pAVar16->fields)._._.method);
                return 0;
              }
              func_?(pOVar11,pBVar17);
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
  pcVar18 = (code *)swi(3);
  bVar19 = (*pcVar18)();
  return bVar19;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::ImageGenerator+<CreateTextureFromData>d__0::
     ImageGenerator_CreateTextureFromData_d_0_System_Collections_IEnumerator_Reset
               (ImageGenerator_CreateTextureFromData_d_0 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
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

