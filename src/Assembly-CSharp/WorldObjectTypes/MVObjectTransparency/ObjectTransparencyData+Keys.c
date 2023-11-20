
/* ObjectTransparencyData+Keys() */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::ObjectTransparencyData+Keys::
     ObjectTransparencyData_Keys__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys)
    ;
    func_?(&StringLiteral_alpha);
    func_?(&StringLiteral_showOutline);
    cRam_? = '\x01';
  }
  TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->static_fields->
  ShowOutline = StringLiteral_showOutline;
  func_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
                  static_fields,StringLiteral_showOutline);
  TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->static_fields->
  Alpha = StringLiteral_alpha;
  func_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
                   static_fields->Alpha,StringLiteral_alpha);
  return;
}

