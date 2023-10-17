
/* Void <GetBytePackerFromKogamaDataPackage>b__0(MVWorldObject) */

void MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::
     BytePackerFunctionsVersion11+<>c__DisplayClass1::
     BytePackerFunctionsVersion11_c_DisplayClass1__GetBytePackerFromKogamaDataPackage_b__0
               (BytePackerFunctionsVersion11_c_DisplayClass1 *this,MVWorldObject *worldObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVWorldObject>__Add_MV__WorldObject__MVWorldObject_
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).writeRuntimeData == 0) {
    if ((worldObject != (MVWorldObject *)0x0) &&
       (pKVar1 = (this->fields).kogamaDataPackage, pKVar1 != (KogamaDataPackage *)0x0)) {
      bVar2 = BytePackerFunctionsVersion11::BytePackerFunctionsVersion11_IsSerializable
                        ((worldObject->fields).id,(pKVar1->fields).worldObjects,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
      goto code_?;
    }
  }
  else {
code_?:
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVWorldObject>__Add_MV__WorldObject__MVWorldObject_
    ;
    pLVar4 = (this->fields).woList;
    if (pLVar4 != (List_1_MV_WorldObject_MVWorldObject_ *)0x0) {
      piVar5 = &(pLVar4->fields)._version;
      *piVar5 = *piVar5 + 1;
      pMVar6 = (pLVar4->fields)._items;
      if (pMVar6 != (MVWorldObject__Array *)0x0) {
        uVar7 = (pLVar4->fields)._size;
        if (pMVar6->max_length <= uVar7) {
          (*(pMVar3->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                    (pLVar4,worldObject,pMVar3->klass->rgctx_data[0xb].rgctxDataDummy);
          piVar5 = &(this->fields).numWO;
          *piVar5 = *piVar5 + 1;
          return;
        }
        (pLVar4->fields)._size = uVar7 + 1;
        if (uVar7 < pMVar6->max_length) {
          pMVar6->vector[uVar7] = worldObject;
          func_?(pMVar6->vector + uVar7,worldObject);
          piVar5 = &(this->fields).numWO;
          *piVar5 = *piVar5 + 1;
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

