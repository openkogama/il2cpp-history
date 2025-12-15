
/* String <MigrateDataBasedOnVersion>b__0(Match) */

String * Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MVTextMsg::
         MvTextMsgData+<>c__DisplayClass9_0::
         MvTextMsgData_c_DisplayClass9_0__MigrateDataBasedOnVersion_b__0
                   (MvTextMsgData_c_DisplayClass9_0 *this,Match *match,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Object_MethodInfo__Extensions__GetValueOrDefault<System::Object>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__size__0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textSize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (match != (Match *)0x0) {
    this_01 = (GroupCollection *)
              (*(match->klass->vtable).get_Groups.methodPtr)
                        (match,(match->klass->vtable).get_Groups.method);
    if (this_01 != (GroupCollection *)0x0) {
      pGVar1 = System.dll::System::Text::RegularExpressions::GroupCollection::
               GroupCollection_GetGroup(this_01,1,(MethodInfo *)0x0);
      if ((pGVar1 != (Group *)0x0) &&
         (pSVar2 = (pGVar1->fields)._._Text_k__BackingField, pSVar2 != (String *)0x0)) {
        pSVar2 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar2,(pGVar1->fields)._._Index_k__BackingField,
                            (pGVar1->fields)._._Length_k__BackingField,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pSVar2 == (String *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
                    (ExceptionArgument__Enum_s,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          pSVar2 = (String *)(*pcVar3)();
          return pSVar2;
        }
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        PStack_4._arg0 = (Object *)&(pSVar2->fields)._firstChar;
        PStack_4._arg1 = (Object *)(ulonglong)(uint)(pSVar2->fields)._stringLength;
        info = mscorlib.dll::System::Globalization::NumberFormatInfo::
               NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        fVar5 = mscorlib.dll::System::Number::Number_ParseSingle
                          ((ReadOnlySpan_1_Char_ *)&PStack_4,
                           NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                           NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,info,
                           (MethodInfo *)0x0);
        fVar5 = fVar5 / _UNK_?;
        hashtable = (this->fields).data;
        if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->_1).
                     field_0x1c == 0) {
          FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
        }
        this_00 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->
                  static_fields->DefaultData;
        if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (this_00,(Object *)StringLiteral_textSize,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar6 = Extensions::Extensions_GetValueOrDefault_3
                             (hashtable,StringLiteral_textSize,pOVar6,
                              System__Object_MethodInfo__Extensions__GetValueOrDefault<System::Object>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Object_
                             );
          if (pOVar6 != (Object *)0x0) {
            if ((pOVar6->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40))
            {
              afStackX_10[0] = fVar5 * *(float *)&pOVar6[1].klass;
              pOVar6 = (Object *)FUN_?(lRam_?,afStackX_10);
              pSVar2 = StringLiteral__size__0__;
              PStack_4._arg0 = (Object *)0x0;
              PStack_4._arg1 = (Object *)0x0;
              PStack_4._arg2 = (Object *)0x0;
              PStack_4._args = (Object__Array *)0x0;
              mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                        (&PStack_4,pOVar6,(MethodInfo *)0x0);
              PStack_7._arg0 = PStack_4._arg0;
              PStack_7._arg1 = PStack_4._arg1;
              PStack_7._arg2 = PStack_4._arg2;
              PStack_7._args = PStack_4._args;
              pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                                 ((IFormatProvider *)0x0,pSVar2,&PStack_7,(MethodInfo *)0x0);
              return pSVar2;
            }
            FUN_?(pOVar6,lRam_?);
            pcVar3 = (code *)swi(3);
            pSVar2 = (String *)(*pcVar3)();
            return pSVar2;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}

