
/* JsonSerializerSettings() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializerSettings::JsonSerializerSettings__ctor
               (JsonSerializerSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::JsonConverter>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::JsonConverter>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._ReferenceLoopHandling_k__BackingField = 0;
  (this->fields)._MissingMemberHandling_k__BackingField = 0;
  (this->fields)._ObjectCreationHandling_k__BackingField = 0;
  (this->fields)._NullValueHandling_k__BackingField = 0;
  (this->fields)._DefaultValueHandling_k__BackingField = 0;
  (this->fields)._PreserveReferencesHandling_k__BackingField = 0;
  (this->fields)._TypeNameHandling_k__BackingField = 0;
  (this->fields)._TypeNameAssemblyFormat_k__BackingField = 0;
  if ((TypeInfo__Newtonsoft__Json__JsonSerializerSettings->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
  }
  pOVar1 = (TypeInfo__Newtonsoft__Json__JsonSerializerSettings->static_fields->DefaultContext).
           m_additionalContext;
  (this->fields)._Context_k__BackingField.m_state =
       (TypeInfo__Newtonsoft__Json__JsonSerializerSettings->static_fields->DefaultContext).m_state;
  (this->fields)._Context_k__BackingField.m_additionalContext = pOVar1;
  func_?(&(this->fields)._Context_k__BackingField,0);
  this_00 = (LowLevelList_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::JsonConverter>
                           );
  if (this_00 != (LowLevelList_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::JsonConverter>__List__
              );
    (this->fields)._Converters_k__BackingField = (IList_1_Newtonsoft_Json_JsonConverter_ *)this_00;
    func_?(&(this->fields)._Converters_k__BackingField,this_00);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Context(StreamingContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializerSettings::
     JsonSerializerSettings_set_Context
               (JsonSerializerSettings *this,StreamingContext value,MethodInfo *method)

{
  (this->fields)._Context_k__BackingField.m_additionalContext = value.m_additionalContext;
  (this->fields)._Context_k__BackingField.m_state = value.m_state;
  func_?(&(this->fields)._Context_k__BackingField,0);
  return;
}

