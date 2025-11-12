
/* AvatarRepositoryItem(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::AvatarRepositoryItem::AvatarRepositoryItem__ctor
               (AvatarRepositoryItem *this,Dictionary_2_System_Object_System_Object_ *outData,
               int32_t key,MethodInfo *method)

{
  aIStackX_18[0].m_value = key;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Avatar_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_10[0] = key;
  pOVar1 = (Object *)FUN_?(lRam_?,aiStackX_10);
  if (outData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (outData,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0x59);
    pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pDVar2,
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar2,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      pBVar5 = TypeInfo__System__Byte;
      if (pOVar1 == (Object *)0x0) {
        (this->fields).data = (Byte__Array *)0x0;
      }
      else {
        pBVar6 = (Byte__Array *)FUN_?(pOVar1,TypeInfo__System__Byte);
        if (pBVar6 == (Byte__Array *)0x0) {
          FUN_?(pOVar1,pBVar5);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (this->fields).data = pBVar6;
        pBVar5 = TypeInfo__System__Byte;
        lVar7 = FUN_?();
        if (lVar7 == 0) {
          FUN_?(pOVar1,pBVar5);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&this->fields >> 0xc);
        lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar10 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      (this->fields).itemID = key;
      pSVar12 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
      pSVar12 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_Avatar_,pSVar12,(MethodInfo *)0x0);
      bVar11 = iRam_? != 0;
      (this->fields).name = pSVar12;
      if (bVar11) {
        uVar8 = (uint)((ulonglong)&(this->fields).name >> 0xc);
        lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar10 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      aIStackX_18[0].m_value = key;
      pOVar1 = (Object *)FUN_?(lRam_?,aIStackX_18);
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (outData,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      aIStackX_18[0].m_value._0_1_ = 0x4b;
      pOVar1 = (Object *)FUN_?(uRam_?,aIStackX_18);
      if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar2,
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar2,pOVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar1 != (Object *)0x0) {
          if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar1,lRam_?);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (this->fields).priceGold = *(int32_t *)&pOVar1[1].klass;
          aIStackX_18[0].m_value = key;
          pOVar1 = (Object *)FUN_?(lRam_?,aIStackX_18);
          pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (outData,pOVar1,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          aIStackX_18[0].m_value._0_1_ = 0x62;
          pOVar1 = (Object *)FUN_?(uRam_?,aIStackX_18);
          if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            bVar3 = (
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment;
            if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
               ((Dictionary_2_System_Object_System_Object___Class *)
                (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
            {
              FUN_?(pDVar2,
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar2,pOVar1,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (pOVar1 != (Object *)0x0) {
              if ((pOVar1->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar1,lRam_?);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              (this->fields).slotPosition = *(int32_t *)&pOVar1[1].klass;
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

