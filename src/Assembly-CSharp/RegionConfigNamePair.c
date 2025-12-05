
/* RegionConfigNamePair+RegionConfigType RegionNameToType(String) */

RegionConfigNamePair_RegionConfigType__Enum
Assembly-CSharp.dll::RegionConfigNamePair::RegionConfigNamePair_RegionNameToType
          (String *regionName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_br);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_na);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_eu);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_test);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_dev);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ut);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_local);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RVar1 = RegionConfigNamePair_RegionConfigType__Enum_none;
  if (regionName == (String *)0x0) {
    return RegionConfigNamePair_RegionConfigType__Enum_none;
  }
  iVar2 = (regionName->fields)._stringLength;
  puVar3 = &(regionName->fields)._firstChar;
  uVar4 = 0x811c9dc5;
  for (uVar5 = 0; (int)uVar5 < iVar2; uVar5 = uVar5 + 1) {
    if ((longlong)iVar2 <= (longlong)(ulonglong)uVar5) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                ((MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      RVar1 = (*pcVar6)();
      return RVar1;
    }
    uVar4 = (*puVar3 ^ uVar4) * 0x1000193;
    puVar3 = puVar3 + 1;
  }
  if (uVar4 < 0x4f2bc4b6) {
    if (uVar4 == 0x4743116c) {
      if (regionName == StringLiteral_ut) {
        return RegionConfigNamePair_RegionConfigType__Enum_ut;
      }
      if (((StringLiteral_ut != (String *)0x0) &&
          ((regionName->fields)._stringLength == (StringLiteral_ut->fields)._stringLength)) &&
         (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(regionName->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_ut->fields)._firstChar,
                             (longlong)(regionName->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar7 != 0)) {
        return RegionConfigNamePair_RegionConfigType__Enum_ut;
      }
    }
    else if (uVar4 == 0x481a708f) {
      if (regionName == StringLiteral_eu) {
        return RegionConfigNamePair_RegionConfigType__Enum_www;
      }
      if (((StringLiteral_eu != (String *)0x0) &&
          ((regionName->fields)._stringLength == (StringLiteral_eu->fields)._stringLength)) &&
         (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(regionName->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_eu->fields)._firstChar,
                             (longlong)(regionName->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar7 != 0)) {
        return RegionConfigNamePair_RegionConfigType__Enum_www;
      }
    }
    else if (uVar4 == 0x4f2bc4b5) {
      if (regionName != StringLiteral_br) {
        if (StringLiteral_br == (String *)0x0) {
          return RegionConfigNamePair_RegionConfigType__Enum_none;
        }
        if ((regionName->fields)._stringLength != (StringLiteral_br->fields)._stringLength) {
          return RegionConfigNamePair_RegionConfigType__Enum_none;
        }
        bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(regionName->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_br->fields)._firstChar,
                           (longlong)(regionName->fields)._stringLength * 2,(MethodInfo *)0x0);
        if (bVar7 == 0) {
          return RegionConfigNamePair_RegionConfigType__Enum_none;
        }
      }
      RVar1 = RegionConfigNamePair_RegionConfigType__Enum_br;
    }
  }
  else if (uVar4 < 0x9c436709) {
    if (uVar4 == 0x543659f0) {
      if (regionName == StringLiteral_na) {
        return RegionConfigNamePair_RegionConfigType__Enum_friends;
      }
      if (((StringLiteral_na != (String *)0x0) &&
          ((regionName->fields)._stringLength == (StringLiteral_na->fields)._stringLength)) &&
         (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(regionName->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_na->fields)._firstChar,
                             (longlong)(regionName->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar7 != 0)) {
        return RegionConfigNamePair_RegionConfigType__Enum_friends;
      }
    }
    else if (uVar4 == 0x9c436708) {
      if (regionName == StringLiteral_local) {
        return RegionConfigNamePair_RegionConfigType__Enum_local;
      }
      if (((StringLiteral_local != (String *)0x0) &&
          ((regionName->fields)._stringLength == (StringLiteral_local->fields)._stringLength)) &&
         (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(regionName->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_local->fields)._firstChar,
                             (longlong)(regionName->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar7 != 0)) {
        return RegionConfigNamePair_RegionConfigType__Enum_local;
      }
    }
  }
  else if (uVar4 == 0xafd071e5) {
    if (regionName == StringLiteral_test) {
      return RegionConfigNamePair_RegionConfigType__Enum_test;
    }
    if (((StringLiteral_test != (String *)0x0) &&
        ((regionName->fields)._stringLength == (StringLiteral_test->fields)._stringLength)) &&
       (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(regionName->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_test->fields)._firstChar,
                           (longlong)(regionName->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar7 != 0)) {
      return RegionConfigNamePair_RegionConfigType__Enum_test;
    }
  }
  else if (uVar4 == 0xd55997bc) {
    if (regionName == StringLiteral_dev) {
      return RegionConfigNamePair_RegionConfigType__Enum_dev;
    }
    if (((StringLiteral_dev != (String *)0x0) &&
        ((regionName->fields)._stringLength == (StringLiteral_dev->fields)._stringLength)) &&
       (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(regionName->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_dev->fields)._firstChar,
                           (longlong)(regionName->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar7 != 0)) {
      return RegionConfigNamePair_RegionConfigType__Enum_dev;
    }
  }
  return RVar1;
}

