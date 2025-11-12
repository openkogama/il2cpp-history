
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::OwnershipData::PlanetOwnershipsData::
         PlanetOwnershipsData_ToString(PlanetOwnershipsData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__PlanetOwnershipType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0____1__u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).planetOwnerships;
  uVar2 = 0;
  if (pLVar1 != (List_1_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_ *)0x0) {
    lVar3 = 0x20;
    pSVar4 = ::StringLiteral__;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return pSVar4;
      }
      if (pLVar1 == (List_1_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar5)();
        return pSVar4;
      }
      pPVar6 = (pLVar1->fields)._items;
      if (pPVar6 == (PlanetOwnershipsEntry__Array *)0x0) break;
      if ((uint)pPVar6->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar5)();
        return pSVar4;
      }
      lVar7 = *(longlong *)((longlong)pPVar6->vector + lVar3 + -0x20);
      if (lVar7 == 0) break;
      auStackX_8[0] = *(undefined4 *)(lVar7 + 0x10);
      arg0 = (Object *)FUN_?(uRam_?,auStackX_8);
      pLVar1 = (this->fields).planetOwnerships;
      if (pLVar1 == (List_1_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pPVar6 = (pLVar1->fields)._items;
      if (pPVar6 == (PlanetOwnershipsEntry__Array *)0x0) break;
      if ((uint)pPVar6->max_length <= uVar2) goto code_?;
      lVar7 = *(longlong *)((longlong)pPVar6->vector + lVar3 + -0x20);
      if (lVar7 == 0) break;
      auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,*(undefined1 *)(lVar7 + 0x14));
      arg1 = (Object *)FUN_?(TypeInfo__MV__Common__PlanetOwnershipType,auStackX_8);
      pSVar8 = StringLiteral__0____1__u000A;
      PStack_9._arg0 = (Object *)0x0;
      PStack_9._arg1 = (Object *)0x0;
      PStack_9._arg2 = (Object *)0x0;
      PStack_9._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_9,arg0,arg1,(MethodInfo *)0x0)
      ;
      PStack_10._arg0 = PStack_9._arg0;
      PStack_10._arg1 = PStack_9._arg1;
      PStack_10._arg2 = PStack_9._arg2;
      PStack_10._args = PStack_9._args;
      pSVar8 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar8,&PStack_10,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_4(pSVar4,pSVar8,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      pLVar1 = (this->fields).planetOwnerships;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_ *)0x0);
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* PlanetOwnershipsData() */

void MVWorldObject.dll::MV::WorldObject::OwnershipData::PlanetOwnershipsData::
     PlanetOwnershipsData__ctor(PlanetOwnershipsData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields).planetOwnerships = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

