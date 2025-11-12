
/* Boolean Equals(Object) */

bool MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData_Equals
               (FileData *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__AntiCheat__FileData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    bVar1 = (TypeInfo__MV__WorldObject__AntiCheat__FileData->_1).naturalAligment;
    if (((bVar1 <= (obj->klass->_1).naturalAligment) &&
        ((obj->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo__MV__WorldObject__AntiCheat__FileData)) &&
       ((this->fields).crc == *(uint32_t *)&obj[1].monitor)) {
      pSVar2 = FileData_NameAsString(this,(MethodInfo *)0x0);
      pSVar3 = FileData_NameAsString((FileData *)obj,(MethodInfo *)0x0);
      if (pSVar2 == pSVar3) {
        return 1;
      }
      if (((pSVar2 != (String *)0x0) && (pSVar3 != (String *)0x0)) &&
         ((pSVar2->fields)._stringLength == (pSVar3->fields)._stringLength)) {
        lVar4 = (longlong)(pSVar2->fields)._stringLength;
        puVar5 = &(pSVar3->fields)._firstChar;
        uVar6 = lVar4 * 2;
        puVar7 = &(pSVar2->fields)._firstChar;
        if (puVar7 != puVar5) {
          if (7 < uVar6) {
            if (uVar6 != 8) {
              puVar8 = puVar5;
              do {
                if (*(longlong *)((longlong)puVar8 + ((longlong)puVar7 - (longlong)puVar5)) !=
                    *(longlong *)puVar8) {
                  return 0;
                }
                puVar8 = puVar8 + 4;
              } while ((ulonglong)((longlong)puVar8 - (longlong)puVar5) < uVar6 - 8);
            }
            return *(longlong *)(puVar7 + lVar4 + -4) == *(longlong *)(puVar5 + lVar4 + -4);
          }
          if (uVar6 != 0) {
            puVar8 = puVar5;
            do {
              if (*(char *)((longlong)puVar8 + ((longlong)puVar7 - (longlong)puVar5)) !=
                  (char)*puVar8) {
                return 0;
              }
              puVar8 = (uint16_t *)((longlong)puVar8 + 1);
            } while ((ulonglong)((longlong)puVar8 - (longlong)puVar5) < uVar6);
          }
        }
        return 1;
      }
    }
  }
  return 0;
}


/* Int32 GetHashCode() */

int32_t MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData_GetHashCode
                  (FileData *this,MethodInfo *method)

{
  return ((uint)((ulonglong)this >> 3) & 0x1fffffff) * -0x61c8864f;
}


/* String NameAsString() */

String * MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData_NameAsString
                   (FileData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  pLVar2 = (this->fields).name;
  if (pLVar2 != (List_1_System_Byte_ *)0x0) {
    uVar3 = FUN_?(pLVar2,
                          MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    if (pEVar1 != (Encoding *)0x0) {
      UNRECOVERED_JUMPTABLE = (pEVar1->klass->vtable).GetString.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar4 = (String *)
               (*UNRECOVERED_JUMPTABLE)
                         (pEVar1,uVar3,(pEVar1->klass->vtable).GetString.method,
                          UNRECOVERED_JUMPTABLE);
      return pSVar4;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData_ToString
                   (FileData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Dll__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__CRC__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = FileData_NameAsString(this,(MethodInfo *)0x0);
  str3 = mscorlib.dll::System::UInt32::UInt32_ToString
                   ((UInt32 *)&(this->fields).crc,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_6
                     (StringLiteral_Dll__,pSVar1,StringLiteral__CRC__,str3,(MethodInfo *)0x0);
  return pSVar1;
}


/* FileData(Byte[], UInt32) */

void MVWorldObject.dll::MV::WorldObject::AntiCheat::FileData::FileData__ctor
               (FileData *this,Byte__Array *name,uint32_t crc,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Byte_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte___ctor_1
            (this_00,(IEnumerable_1_System_Byte_ *)name,
             MethodInfo__System__Collections__Generic__List<unsigned_char>__List_System__Collections__Generic__IEnumerable<unsigned_char>_
            );
  bVar1 = iRam_? != 0;
  (this->fields).name = this_00;
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
  (this->fields).crc = crc;
  return;
}

