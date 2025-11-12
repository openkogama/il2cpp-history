
/* Void Initialize(AccessoryDataClient) */

void Assembly-CSharp.dll::AccessoryItemBackground::AccessoryItemBackground_Initialize
               (AccessoryItemBackground *this,AccessoryDataClient *accessoryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (accessoryData != (AccessoryDataClient *)0x0) {
    if (((accessoryData->fields)._.lvl == 0) || ((accessoryData->fields)._.cost != 0)) {
      iVar1 = (accessoryData->fields)._.cost;
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      pRVar2 = Styles::Styles_GetAccessoryColorsFromPrice(iVar1,(MethodInfo *)0x0);
    }
    else {
      iVar1 = (accessoryData->fields)._.lvl;
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      pRVar2 = Styles::Styles_GetAccessoryColorsFromLevel(iVar1,(MethodInfo *)0x0);
    }
    if ((pRVar2 != (RarityStylesDef *)0x0) &&
       (pIVar3 = (this->fields).rarityImage, pIVar3 != (Image *)0x0)) {
      fStack_4 = (pRVar2->fields).backgroundColor.r;
      fStack_5 = (pRVar2->fields).backgroundColor.g;
      fStack_6 = (pRVar2->fields).backgroundColor.b;
      fStack_7 = (pRVar2->fields).backgroundColor.a;
      (*(pIVar3->klass->vtable).set_color.methodPtr)
                (pIVar3,&fStack_4,(pIVar3->klass->vtable).set_color.method);
      pIVar3 = (this->fields).glowImage;
      if (pIVar3 != (Image *)0x0) {
        fStack_4 = (pRVar2->fields).glowColor.r;
        fStack_5 = (pRVar2->fields).glowColor.g;
        fStack_6 = (pRVar2->fields).glowColor.b;
        fStack_7 = (pRVar2->fields).glowColor.a;
        (*(pIVar3->klass->vtable).set_color.methodPtr)();
        pIVar3 = (this->fields).backgroundRay;
        if ((pIVar3 != (Image *)0x0) &&
           (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pIVar3,(MethodInfo *)0x0),
           pGVar8 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar8,0,(MethodInfo *)0x0);
          if ((accessoryData->fields)._.owns != 0) {
            return;
          }
          pIVar3 = (this->fields).backgroundRay;
          if ((pIVar3 != (Image *)0x0) &&
             (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pIVar3,(MethodInfo *)0x0),
             pGVar8 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar8,(accessoryData->fields)._.iFtr,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__AccessoryDataManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pAVar9 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
            if ((pAVar9 != (AccessoryShopDataClient *)0x0) &&
               (pAVar10 = (pAVar9->fields).accessoryBundle, pAVar10 != (AccessoryBundleClient *)0x0))
            {
              pLVar11 = (pAVar10->fields)._.accessoryBundleItems;
              uVar12 = 0;
              if (pLVar11 != (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0) {
                uVar13 = (pLVar11->fields)._size;
                lVar14 = 0x20;
                while( true ) {
                  if ((int)uVar13 <= (int)uVar12) {
                    return;
                  }
                  if (uVar13 <= uVar12) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  pAVar16 = (pLVar11->fields)._items;
                  if (pAVar16 == (AccessoryBundleItem__Array *)0x0) goto code_?;
                  if ((uint)pAVar16->max_length <= uVar12) {
                    FUN_?();
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  lVar17 = *(longlong *)((longlong)pAVar16->vector + lVar14 + -0x20);
                  if (lVar17 == 0) goto code_?;
                  if (*(int *)(lVar17 + 0x14) == (accessoryData->fields)._.aMDID) break;
                  uVar12 = uVar12 + 1;
                  lVar14 = lVar14 + 8;
                }
                pIVar3 = (this->fields).backgroundRay;
                if ((pIVar3 != (Image *)0x0) &&
                   (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pIVar3,(MethodInfo *)0x0),
                   pGVar8 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar8,1,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

