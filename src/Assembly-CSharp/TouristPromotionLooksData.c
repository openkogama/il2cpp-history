
/* Image GetPromotionImage() */

Image * Assembly-CSharp.dll::TouristPromotionLooksData::TouristPromotionLooksData_GetPromotionImage
                  (TouristPromotionLooksData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).promotionData;
  if (pLVar1 != (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) {
    uVar2 = (this->fields).promotionIndex;
    if ((uint)(pLVar1->fields)._size <= uVar2) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pIVar4 = (Image *)(*pcVar3)();
      return pIVar4;
    }
    pTVar5 = (pLVar1->fields)._items;
    if (pTVar5 != (TouristPromotionLooksData_PromotionLooksData__Array *)0x0) {
      if ((uint)pTVar5->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        pIVar4 = (Image *)(*pcVar3)();
        return pIVar4;
      }
      pIVar4 = pTVar5->vector[(int)uVar2].PromotionImage;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar6 = 
      UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
      ;
      if ((
          UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_The_Object_you_want_to_instantia);
        LOCK();
        UNLOCK();
        if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar6);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar7 = StringLiteral_The_Object_you_want_to_instantia;
      if (pIVar4 != (Image *)0x0) {
        pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Internal_CloneSingle
                           ((Object_1 *)pIVar4,(MethodInfo *)0x0);
        pvVar9 = ((pMVar6->field7_0x38).rgctx_data)->rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
          pvVar9 = (void *)FUN_?(pvVar9);
        }
        if (pOVar8 == (Object_1 *)0x0) {
          pIVar4 = (Image *)0x0;
        }
        else {
          pIVar4 = (Image *)FUN_?(pOVar8,pvVar9);
          if (pIVar4 == (Image *)0x0) {
            FUN_?(pOVar8,pvVar9);
            pcVar3 = (code *)swi(3);
            pIVar4 = (Image *)(*pcVar3)();
            return pIVar4;
          }
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
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pIVar4 != (Image *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((void *)(pIVar4->fields)._._._._._._._ != (void *)0x0) {
            return pIVar4;
          }
        }
        uVar10 = func_?(&TypeInfo__UnityEngine__UnityException);
        this_01 = (UnityException *)func_?(uVar10);
        pSVar7 = (String *)func_?(&StringLiteral_Instantiate_failed_because_the_c);
        UnityEngine.CoreModule.dll::UnityEngine::UnityException::UnityException__ctor_1
                  (this_01,pSVar7,(MethodInfo *)0x0);
        FUN_?(this_01,pMVar6);
        pcVar3 = (code *)swi(3);
        pIVar4 = (Image *)(*pcVar3)();
        return pIVar4;
      }
      uVar10 = func_?(&TypeInfo__System__ArgumentException);
      this_00 = (InvalidEnumArgumentException *)func_?(uVar10);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(this_00,pSVar7,(MethodInfo *)0x0);
      uVar10 = func_?(&
                                  MethodInfo__UnityEngine__Object__CheckNullArgument_System__Object__System__String_
                                 );
      FUN_?(this_00,uVar10);
      pcVar3 = (code *)swi(3);
      pIVar4 = (Image *)(*pcVar3)();
      return pIVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pIVar4 = (Image *)(*pcVar3)();
  return pIVar4;
}


/* String GetPromotionText() */

String * Assembly-CSharp.dll::TouristPromotionLooksData::TouristPromotionLooksData_GetPromotionText
                   (TouristPromotionLooksData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).promotionData;
  if (pLVar1 != (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) {
    uVar2 = (this->fields).promotionIndex;
    if ((uint)(pLVar1->fields)._size <= uVar2) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar3)();
      return pSVar4;
    }
    pTVar5 = (pLVar1->fields)._items;
    if (pTVar5 != (TouristPromotionLooksData_PromotionLooksData__Array *)0x0) {
      if ((uint)pTVar5->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar3)();
        return pSVar4;
      }
      pSVar4 = pTVar5->vector[(int)uVar2].PromotionText;
      if (cRam_? == '\0') {
        FUN_?(&::StringLiteral__,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral___sPtr___sPtr_____________Ptr_________);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pSVar4 == (String *)0x0) {
        return (String *)0x0;
      }
      this_01 = (Regex *)FUN_?(TypeInfo__System__Text__RegularExpressions__Regex);
      System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
                (this_01,StringLiteral___sPtr___sPtr_____________Ptr_________,(MethodInfo *)0x0);
      if (this_01 != (Regex *)0x0) {
        if (((this_01->fields).roptions & 0x40) == 0) {
          startat = 0;
        }
        else {
          startat = (pSVar4->fields)._stringLength;
        }
        pMVar6 = System.dll::System::Text::RegularExpressions::Regex::Regex_Run
                           (this_01,0,-1,pSVar4,0,(pSVar4->fields)._stringLength,startat,
                            (MethodInfo *)0x0);
        if (pMVar6 != (Match *)0x0) {
          if ((pMVar6->fields)._._capcount != 0) {
            this_02 = (GroupCollection *)
                      (*(pMVar6->klass->vtable).get_Groups.methodPtr)
                                (pMVar6,(pMVar6->klass->vtable).get_Groups.method);
            if (((this_02 == (GroupCollection *)0x0) ||
                (pGVar7 = System.dll::System::Text::RegularExpressions::GroupCollection::
                          GroupCollection_GetGroup(this_02,1,(MethodInfo *)0x0),
                pGVar7 == (Group *)0x0)) ||
               (pSVar4 = (String *)
                         (*(pGVar7->klass->vtable).ToString.methodPtr)
                                   (pGVar7,(pGVar7->klass->vtable).ToString.method),
               pSVar4 == (String *)0x0)) goto code_?;
            pSVar4 = mscorlib.dll::System::String::String_Substring_1
                               (pSVar4,1,(pSVar4->fields)._stringLength + -2,(MethodInfo *)0x0);
            pSVar4 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                               (pSVar4,(MethodInfo *)0x0);
          }
          if ((pSVar4 != (String *)0x0) && ((pSVar4->fields)._stringLength != 0)) {
            pTVar8 = TM::TM_get_Instance((MethodInfo *)0x0);
            if (pTVar8 == (TM *)0x0) goto code_?;
            if ((pTVar8->fields).catalog != (Catalog *)0x0) {
              pTVar8 = TM::TM_get_Instance((MethodInfo *)0x0);
              if ((pTVar8 == (TM *)0x0) ||
                 (this_00 = (pTVar8->fields).catalog, this_00 == (Catalog *)0x0))
              goto code_?;
              this_03 = GNU::Gettext::Catalog::Catalog_FindItem
                                  (this_00,pSVar4,::StringLiteral__,(MethodInfo *)0x0);
              if ((this_03 != (CatalogEntry *)0x0) &&
                 ((text = GNU::Gettext::CatalogEntry::CatalogEntry_GetTranslation
                                    (this_03,0,(MethodInfo *)0x0), text != (String *)0x0 &&
                  ((text->fields)._stringLength != 0)))) {
                pSVar4 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                                   (text,(MethodInfo *)0x0);
                return pSVar4;
              }
            }
          }
          return pSVar4;
        }
      }
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar3)();
      return pSVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar3)();
  return pSVar4;
}


/* Void RandomizePromotion(Boolean) */

void Assembly-CSharp.dll::TouristPromotionLooksData::TouristPromotionLooksData_RandomizePromotion
               (TouristPromotionLooksData *this,bool embedded,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).initialized == 0) {
    pLVar1 = (List_1_System_Int32_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<int>);
    FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<int>__List__);
    bVar2 = iRam_? != 0;
    (this->fields).portalsIndices = pLVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).portalsIndices >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pLVar1 = (List_1_System_Int32_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<int>);
    FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<int>__List__);
    bVar2 = iRam_? != 0;
    (this->fields).embeddedIndices = pLVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).embeddedIndices >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uVar5 = 0;
    pLVar7 = (this->fields).promotionData;
    uVar8 = uVar5;
    while (pLVar7 != (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) {
      uVar3 = (uint)uVar8;
      if ((pLVar7->fields)._size <= (int)uVar3) {
        (this->fields).initialized = 1;
        goto code_?;
      }
      pLVar7 = (this->fields).promotionData;
      if (pLVar7 == (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) break;
      if ((uint)(pLVar7->fields)._size <= uVar3) goto code_?;
      pTVar9 = (pLVar7->fields)._items;
      if (pTVar9 == (TouristPromotionLooksData_PromotionLooksData__Array *)0x0) break;
      if ((uint)pTVar9->max_length <= uVar3) goto code_?;
      cStack_10 = (char)*(undefined8 *)(&pTVar9->vector[0].ValidOnKogamaPortal + uVar5);
      if (cStack_10 != '\0') {
        pLVar1 = (this->fields).portalsIndices;
        if (pLVar1 == (List_1_System_Int32_ *)0x0) break;
        FUN_?(pLVar1,uVar8,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      pLVar7 = (this->fields).promotionData;
      if (pLVar7 == (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) break;
      if ((uint)(pLVar7->fields)._size <= uVar3) goto code_?;
      pTVar9 = (pLVar7->fields)._items;
      if (pTVar9 == (TouristPromotionLooksData_PromotionLooksData__Array *)0x0) break;
      if ((uint)pTVar9->max_length <= uVar3) goto code_?;
      if ((char)((ulonglong)*(undefined8 *)(&pTVar9->vector[0].ValidOnKogamaPortal + uVar5) >> 8)
          != '\0') {
        pLVar1 = (this->fields).embeddedIndices;
        if (pLVar1 == (List_1_System_Int32_ *)0x0) break;
        FUN_?(pLVar1,uVar8,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      uVar8 = (ulonglong)(uVar3 + 1);
      uVar5 = uVar5 + 0x18;
      pLVar7 = (this->fields).promotionData;
    }
  }
  else {
code_?:
    if (embedded == 0) {
      pLVar1 = (this->fields).portalsIndices;
      if (pLVar1 != (List_1_System_Int32_ *)0x0) {
        iVar11 = (pLVar1->fields)._size;
        pcVar12 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar12 = (code *)FUN_?(), pcVar12 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pcRam_? = pcVar12;
        uVar3 = (*pcRam_?)(0,iVar11);
        if ((uint)(pLVar1->fields)._size <= uVar3) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pIVar14 = (pLVar1->fields)._items;
        if (pIVar14 != (Int32__Array *)0x0) {
          if (uVar3 < (uint)pIVar14->max_length) {
code_?:
            (this->fields).promotionIndex = pIVar14->vector[(int)uVar3];
            return;
          }
code_?:
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
    }
    else {
      pLVar1 = (this->fields).embeddedIndices;
      if (pLVar1 != (List_1_System_Int32_ *)0x0) {
        iVar11 = (pLVar1->fields)._size;
        pcVar12 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar12 = (code *)FUN_?(), pcVar12 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pcRam_? = pcVar12;
        uVar3 = (*pcRam_?)(0,iVar11);
        if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
        pIVar14 = (pLVar1->fields)._items;
        if (pIVar14 != (Int32__Array *)0x0) {
          if (uVar3 < (uint)pIVar14->max_length) goto code_?;
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

