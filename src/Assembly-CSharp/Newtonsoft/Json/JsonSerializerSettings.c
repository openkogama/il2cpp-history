
/* JsonSerializerSettings() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializerSettings::JsonSerializerSettings__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = TypeInfo__Newtonsoft__Json__JsonSerializerSettings->static_fields;
  (pJVar1->DefaultContext).state = 0;
  (pJVar1->DefaultContext).additional = (Object *)0x0;
  return;
}


/* JsonSerializerSettings() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializerSettings::JsonSerializerSettings__ctor
               (JsonSerializerSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields)._ReferenceLoopHandling_k__BackingField = 0;
  (this->fields)._MissingMemberHandling_k__BackingField = 0;
  (this->fields)._ObjectCreationHandling_k__BackingField = 0;
  (this->fields)._NullValueHandling_k__BackingField = 0;
  (this->fields)._DefaultValueHandling_k__BackingField = 0;
  (this->fields)._PreserveReferencesHandling_k__BackingField = 0;
  (this->fields)._TypeNameHandling_k__BackingField = 0;
  (this->fields)._TypeNameAssemblyFormat_k__BackingField = 0;
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonSerializerSettings->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__JsonSerializerSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
  }
  pOVar1 = (TypeInfo__Newtonsoft__Json__JsonSerializerSettings->static_fields->DefaultContext).
           additional;
  (this->fields)._Context_k__BackingField.state =
       (TypeInfo__Newtonsoft__Json__JsonSerializerSettings->static_fields->DefaultContext).state;
  (this->fields)._Context_k__BackingField.additional = pOVar1;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::JsonConverter>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::JsonConverter>__List__
            );
  (this->fields)._Converters_k__BackingField = (IList_1_Newtonsoft_Json_JsonConverter_ *)this_00;
  return;
}

